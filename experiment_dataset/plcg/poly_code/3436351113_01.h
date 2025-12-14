#ifndef _3436351113_01_H
#define _3436351113_01_H
/* params start */
# define PB_N 50
# define PB_M 30
# define PB_L 40
# define PB_P 40
# define PB_Q 30
/* params end */
# define xA PB_M
# define yA PB_P
# define zA PB_Q
# define xB PB_M
# define xC PB_M
# define xD PB_N
# define xE PB_L
# define yE PB_L
# define zE PB_P
# define xF PB_L
# define yF PB_P
# define zF PB_Q
# define xG PB_M
# define yG PB_L
# define xH PB_N
# define yH PB_N
# define xI PB_N
# define yI PB_N
# define zI PB_M
# define xJ PB_M
# define xK PB_L
# define xL PB_L
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

