#ifndef _4416151115_06_H
#define _4416151115_06_H
/* params start */
# define PB_N 9
# define PB_M 9
# define PB_L 8
# define PB_P 10
# define PB_Q 8
/* params end */
# define xA PB_M
# define yA PB_L
# define xB PB_N
# define xC PB_L
# define yC PB_P
# define zC PB_P
# define xD PB_N
# define yD PB_M
# define zD PB_L
# define vD PB_P
# define xE PB_L
# define yE PB_P
# define xF PB_M
# define xG PB_M
# define yG PB_L
# define zG PB_P
# define xH PB_M
# define yH PB_P
# define zH PB_Q
# define vH PB_Q
# define xI PB_M
# define yI PB_M
# define zI PB_L
# define vI PB_P
# define wI PB_P
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

