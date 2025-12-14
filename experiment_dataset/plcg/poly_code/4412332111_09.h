#ifndef _4412332111_09_H
#define _4412332111_09_H
/* params start */
# define PB_N 8
# define PB_M 10
# define PB_L 9
# define PB_P 8
# define PB_Q 9
/* params end */
# define xA PB_M
# define yA PB_L
# define zA PB_Q
# define vA PB_Q
# define xB PB_M
# define xC PB_N
# define yC PB_M
# define xE PB_M
# define yE PB_L
# define zE PB_Q
# define vE PB_Q
# define wE PB_Q
# define xF PB_N
# define xG PB_M
# define xH PB_N
# define yH PB_N
# define xI PB_M
# define yI PB_L
# define zI PB_P
# define vI PB_Q
# define xJ PB_M
# define yJ PB_L
# define zJ PB_P
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

