#ifndef _3436352221_02_H
#define _3436352221_02_H
/* params start */
# define PB_N 40
# define PB_M 30
# define PB_L 30
# define PB_P 50
# define PB_Q 50
/* params end */
# define xC PB_M
# define xB PB_M
# define yB PB_L
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define xE PB_L
# define yE PB_L
# define xF PB_M
# define yF PB_M
# define xG PB_L
# define yG PB_P
# define xH PB_M
# define yH PB_M
# define zH PB_L
# define xI PB_M
# define yI PB_P
# define zI PB_Q
# define xJ PB_M
# define yJ PB_L
# define zJ PB_P
# define xK PB_M
# define xL PB_M
# define xM PB_N
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

