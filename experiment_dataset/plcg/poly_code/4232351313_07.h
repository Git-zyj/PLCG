#ifndef _4232351313_07_H
#define _4232351313_07_H
/* params start */
# define PB_M 10
# define PB_L 8
# define PB_P 9
# define PB_Q 8
/* params end */
# define xB PB_M
# define yB PB_P
# define zB PB_Q
# define vB PB_Q
# define xC PB_M
# define yC PB_L
# define zC PB_P
# define xD PB_M
# define yD PB_M
# define zD PB_M
# define vD PB_L
# define xE PB_M
# define yE PB_P
# define zE PB_Q
# define vE PB_Q
# define xF PB_M
# define yF PB_L
# define zF PB_Q
# define xG PB_M
# define yG PB_M
# define zG PB_L
# define vG PB_P
# define wG PB_Q
# define xH PB_M
# define yH PB_L
# define zH PB_P
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

