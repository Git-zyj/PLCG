#ifndef _4422232315_07_H
#define _4422232315_07_H
/* params start */
# define PB_N 10
# define PB_M 10
# define PB_L 10
# define PB_P 10
# define PB_Q 10
/* params end */
# define xA PB_M
# define yA PB_L
# define zA PB_Q
# define vA PB_Q
# define xB PB_M
# define yB PB_L
# define xC PB_L
# define yC PB_P
# define zC PB_Q
# define xE PB_M
# define yE PB_L
# define zE PB_P
# define vE PB_Q
# define xF PB_M
# define yF PB_L
# define zF PB_P
# define vF PB_Q
# define wF PB_Q
# define xG PB_M
# define yG PB_L
# define zG PB_L
# define xH PB_N
# define yH PB_M
# define zH PB_L
# define vH PB_Q
# define xI PB_M
# define yI PB_L
# define xJ PB_M
# define yJ PB_P
# define zJ PB_Q
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

