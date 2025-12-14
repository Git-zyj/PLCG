#ifndef _4426252315_05_H
#define _4426252315_05_H
/* params start */
# define PB_N 10
# define PB_M 9
# define PB_L 8
# define PB_P 8
# define PB_Q 9
/* params end */
# define xA PB_M
# define xC PB_M
# define yC PB_L
# define zC PB_P
# define xE PB_M
# define xF PB_L
# define yF PB_Q
# define zF PB_Q
# define vF PB_Q
# define xG PB_M
# define yG PB_L
# define zG PB_P
# define xH PB_L
# define yH PB_Q
# define zH PB_Q
# define vH PB_Q
# define xI PB_N
# define yI PB_L
# define zI PB_L
# define xJ PB_L
# define yJ PB_P
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

