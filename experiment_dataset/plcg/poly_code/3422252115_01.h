#ifndef _3422252115_01_H
#define _3422252115_01_H
/* params start */
# define PB_N 50
# define PB_M 40
# define PB_L 50
# define PB_P 40
# define PB_Q 40
/* params end */
# define xA PB_M
# define yA PB_L
# define zA PB_P
# define xB PB_M
# define yB PB_M
# define xE PB_N
# define yE PB_M
# define zE PB_P
# define vE PB_Q
# define xF PB_M
# define yF PB_P
# define zF PB_Q
# define xG PB_L
# define yG PB_P
# define xH PB_M
# define yH PB_L
# define zH PB_P
# define xI PB_M
# define yI PB_P
# define xJ PB_M
# define xK PB_L
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

