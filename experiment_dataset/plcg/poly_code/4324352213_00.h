#ifndef _4324352213_00_H
#define _4324352213_00_H
/* params start */
# define PB_N 8
# define PB_M 10
# define PB_L 10
# define PB_P 10
# define PB_Q 8
/* params end */
# define xA PB_M
# define yA PB_L
# define xC PB_M
# define yC PB_P
# define zC PB_Q
# define xD PB_M
# define yD PB_L
# define xE PB_M
# define yE PB_L
# define xF PB_N
# define yF PB_M
# define xG PB_M
# define yG PB_L
# define zG PB_Q
# define xH PB_N
# define yH PB_M
# define zH PB_M
# define xI PB_N
# define yI PB_M
# define zI PB_M
# define vI PB_L
# define xJ PB_N
# define yJ PB_M
# define zJ PB_P
# define vJ PB_Q
# define wJ PB_Q
# define xK PB_L
# define yK PB_P
# define zK PB_Q
# define vK PB_Q
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

