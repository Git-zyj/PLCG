#ifndef _3414251313_01_H
#define _3414251313_01_H
/* params start */
# define PB_N 30
# define PB_M 50
# define PB_L 30
# define PB_P 40
# define PB_Q 30
/* params end */
# define xA PB_M
# define yA PB_L
# define zA PB_Q
# define xB PB_L
# define yB PB_P
# define zB PB_Q
# define xD PB_L
# define yD PB_P
# define xE PB_M
# define yE PB_L
# define zE PB_P
# define xF PB_N
# define yF PB_M
# define zF PB_L
# define vF PB_L
# define xG PB_M
# define yG PB_M
# define zG PB_L
# define xH PB_N
# define yH PB_L
# define xI PB_L
# define xJ PB_M
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

