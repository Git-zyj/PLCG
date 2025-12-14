#ifndef _4332351323_04_H
#define _4332351323_04_H
/* params start */
# define PB_N 10
# define PB_M 10
# define PB_L 9
# define PB_P 8
# define PB_Q 9
/* params end */
# define xA PB_M
# define yA PB_L
# define zA PB_P
# define xB PB_N
# define yB PB_M
# define zB PB_L
# define vB PB_Q
# define xC PB_M
# define xD PB_N
# define yD PB_M
# define xE PB_L
# define yE PB_P
# define zE PB_Q
# define xF PB_N
# define yF PB_M
# define zF PB_L
# define xG PB_M
# define yG PB_L
# define zG PB_L
# define xH PB_M
# define yH PB_L
# define zH PB_P
# define vH PB_Q
# define xI PB_M
# define yI PB_L
# define zI PB_P
# define vI PB_Q
# define wI PB_Q
# define xJ PB_M
# define xK PB_M
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

