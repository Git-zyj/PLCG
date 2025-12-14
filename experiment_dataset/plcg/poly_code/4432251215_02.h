#ifndef _4432251215_02_H
#define _4432251215_02_H
/* params start */
# define PB_N 10
# define PB_M 9
# define PB_L 8
# define PB_P 9
# define PB_Q 8
/* params end */
# define xC PB_M
# define yC PB_L
# define xD PB_N
# define xE PB_M
# define yE PB_L
# define zE PB_Q
# define vE PB_Q
# define xF PB_M
# define yF PB_L
# define zF PB_P
# define vF PB_Q
# define xG PB_L
# define yG PB_Q
# define zG PB_Q
# define xH PB_L
# define yH PB_P
# define xI PB_M
# define yI PB_L
# define zI PB_Q
# define xJ PB_M
# define xK PB_M
# define yK PB_L
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

