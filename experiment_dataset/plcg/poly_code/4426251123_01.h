#ifndef _4426251123_01_H
#define _4426251123_01_H
/* params start */
# define PB_N 9
# define PB_M 10
# define PB_L 8
# define PB_P 10
# define PB_Q 10
/* params end */
# define xC PB_L
# define yC PB_P
# define zC PB_Q
# define vC PB_Q
# define xB PB_M
# define xE PB_L
# define yE PB_P
# define xF PB_M
# define yF PB_L
# define zF PB_L
# define xG PB_M
# define yG PB_P
# define xH PB_M
# define yH PB_L
# define zH PB_P
# define xI PB_M
# define xJ PB_M
# define xK PB_N
# define yK PB_M
# define zK PB_L
# define vK PB_P
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

