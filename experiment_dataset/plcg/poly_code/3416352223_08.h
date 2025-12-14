#ifndef _3416352223_08_H
#define _3416352223_08_H
/* params start */
# define PB_N 50
# define PB_M 40
# define PB_L 40
# define PB_P 30
# define PB_Q 50
/* params end */
# define xA PB_N
# define yA PB_M
# define zA PB_L
# define xB PB_M
# define yB PB_L
# define xD PB_L
# define yD PB_P
# define zD PB_Q
# define xE PB_M
# define yE PB_L
# define zE PB_Q
# define xF PB_M
# define yF PB_L
# define zF PB_Q
# define xG PB_L
# define yG PB_P
# define zG PB_P
# define xH PB_L
# define yH PB_Q
# define xI PB_N
# define xJ PB_M
# define yJ PB_L
# define xK PB_M
# define yK PB_L
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

