#ifndef _4234331213_05_H
#define _4234331213_05_H
/* params start */
# define PB_N 10
# define PB_M 9
# define PB_L 10
# define PB_P 10
# define PB_Q 10
/* params end */
# define xB PB_M
# define yB PB_L
# define zB PB_Q
# define vB PB_Q
# define xC PB_L
# define yC PB_P
# define zC PB_Q
# define vC PB_Q
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define vD PB_Q
# define wD PB_Q
# define xE PB_M
# define yE PB_M
# define zE PB_M
# define xF PB_N
# define yF PB_M
# define zF PB_M
# define vF PB_L
# if !defined(DATA_TYPE_IS_FLOAT) && !defined(DATA_TYPE_IS_DOUBLE)
#  define DATA_TYPE_IS_DOUBLE
# endif
#ifdef DATA_TYPE_IS_FLOAT
#  define DATA_TYPE float
#  define DATA_PRINTF_MODIFIER "%f "
#  define SCALAR_VAL(x) x##f
#  define SQRT_FUN(x) sqrtf(x)
#  define EXP_FUN(x) expf(x)
#  define POW_FUN(x,y) powf(x,y)
# endif
#ifdef DATA_TYPE_IS_DOUBLE
#  define DATA_TYPE double
#  define DATA_PRINTF_MODIFIER "%lf "
#  define SCALAR_VAL(x) x
#  define SQRT_FUN(x) sqrt(x)
#  define EXP_FUN(x) exp(x)
#  define POW_FUN(x,y) pow(x,y)
# endif
# endif

