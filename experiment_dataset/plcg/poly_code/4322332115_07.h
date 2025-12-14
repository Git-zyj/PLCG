#ifndef _4322332115_07_H
#define _4322332115_07_H
/* params start */
# define PB_N 40
# define PB_M 30
# define PB_L 40
# define PB_P 50
# define PB_Q 30
/* params end */
# define xA PB_N
# define xC PB_M
# define yC PB_L
# define zC PB_Q
# define xD PB_M
# define xE PB_L
# define xF PB_M
# define yF PB_L
# define xG PB_M
# define yG PB_M
# define xH PB_N
# define yH PB_N
# define zH PB_M
# define xI PB_M
# define yI PB_M
# define xJ PB_M
# define yJ PB_P
# define zJ PB_Q
# define vJ PB_Q
# define xK PB_M
# define yK PB_M
# define zK PB_M
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

