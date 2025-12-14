#ifndef _4422152121_05_H
#define _4422152121_05_H
/* params start */
# define PB_N 9
# define PB_M 8
# define PB_L 10
# define PB_P 10
# define PB_Q 9
/* params end */
# define xB PB_M
# define yB PB_M
# define zB PB_P
# define xC PB_M
# define xD PB_L
# define yD PB_Q
# define zD PB_Q
# define vD PB_Q
# define xE PB_L
# define yE PB_P
# define zE PB_Q
# define vE PB_Q
# define xF PB_L
# define yF PB_Q
# define zF PB_Q
# define vF PB_Q
# define wF PB_Q
# define xG PB_M
# define yG PB_L
# define zG PB_Q
# define xH PB_M
# define yH PB_P
# define xI PB_N
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

