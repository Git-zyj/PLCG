#ifndef _4432351223_02_H
#define _4432351223_02_H
/* params start */
# define PB_N 8
# define PB_M 9
# define PB_L 8
# define PB_P 8
# define PB_Q 8
/* params end */
# define xA PB_M
# define yA PB_L
# define zA PB_L
# define xC PB_L
# define yC PB_P
# define zC PB_Q
# define vC PB_Q
# define xD PB_L
# define xE PB_M
# define yE PB_L
# define zE PB_Q
# define xF PB_M
# define yF PB_L
# define xG PB_M
# define yG PB_M
# define zG PB_P
# define xH PB_M
# define yH PB_L
# define zH PB_P
# define vH PB_Q
# define xI PB_N
# define yI PB_M
# define zI PB_M
# define vI PB_L
# define xJ PB_M
# define yJ PB_L
# define zJ PB_P
# define vJ PB_Q
# define xK PB_M
# define xL PB_M
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

