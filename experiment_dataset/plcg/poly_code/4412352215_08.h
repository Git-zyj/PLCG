#ifndef _4412352215_08_H
#define _4412352215_08_H
/* params start */
# define PB_N 40
# define PB_M 30
# define PB_L 30
# define PB_P 30
# define PB_Q 30
/* params end */
# define xA PB_N
# define yA PB_M
# define xB PB_M
# define yB PB_L
# define zB PB_Q
# define xE PB_N
# define xF PB_M
# define yF PB_L
# define xG PB_M
# define yG PB_L
# define xH PB_M
# define yH PB_L
# define xI PB_M
# define xJ PB_M
# define yJ PB_L
# define zJ PB_P
# define xK PB_M
# define yK PB_L
# define zK PB_P
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

