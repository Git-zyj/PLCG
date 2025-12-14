#ifndef _3414251315_09_H
#define _3414251315_09_H
/* params start */
# define PB_N 40
# define PB_M 50
# define PB_L 40
# define PB_P 30
# define PB_Q 40
/* params end */
# define xB PB_M
# define yB PB_P
# define zB PB_Q
# define xC PB_M
# define xE PB_M
# define yE PB_L
# define zE PB_P
# define xF PB_M
# define yF PB_M
# define zF PB_L
# define xG PB_M
# define yG PB_L
# define xH PB_M
# define xI PB_N
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

