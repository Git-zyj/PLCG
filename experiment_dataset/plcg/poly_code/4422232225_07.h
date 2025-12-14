#ifndef _4422232225_07_H
#define _4422232225_07_H
/* params start */
# define PB_N 8
# define PB_M 10
# define PB_L 9
# define PB_P 9
# define PB_Q 8
/* params end */
# define xC PB_M
# define yC PB_L
# define zC PB_P
# define vC PB_P
# define xB PB_N
# define xD PB_M
# define xE PB_N
# define xF PB_L
# define yF PB_P
# define xG PB_M
# define yG PB_L
# define xH PB_N
# define yH PB_M
# define zH PB_L
# define vH PB_P
# define xI PB_L
# define yI PB_P
# define zI PB_Q
# define vI PB_Q
# define xJ PB_M
# define yJ PB_L
# define zJ PB_L
# define xK PB_N
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

