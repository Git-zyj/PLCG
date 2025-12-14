#ifndef _4434151123_04_H
#define _4434151123_04_H
/* params start */
# define PB_N 8
# define PB_M 9
# define PB_L 10
# define PB_P 9
# define PB_Q 10
/* params end */
# define xD PB_M
# define xB PB_M
# define yB PB_L
# define zB PB_P
# define xC PB_N
# define yC PB_M
# define zC PB_L
# define vC PB_L
# define xE PB_M
# define xF PB_L
# define yF PB_L
# define xG PB_L
# define yG PB_P
# define zG PB_Q
# define xH PB_L
# define yH PB_L
# define zH PB_P
# define vH PB_Q
# define xI PB_M
# define yI PB_L
# define zI PB_P
# define vI PB_Q
# define wI PB_Q
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

