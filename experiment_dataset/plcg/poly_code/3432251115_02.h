#ifndef _3432251115_02_H
#define _3432251115_02_H
/* params start */
# define PB_N 30
# define PB_M 50
# define PB_L 30
# define PB_P 30
# define PB_Q 40
/* params end */
# define xA PB_M
# define yA PB_P
# define xC PB_M
# define xE PB_L
# define yE PB_P
# define xF PB_M
# define yF PB_L
# define xG PB_M
# define yG PB_L
# define zG PB_P
# define xH PB_L
# define yH PB_Q
# define zH PB_Q
# define xI PB_N
# define yI PB_M
# define zI PB_L
# define vI PB_L
# define xJ PB_N
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

