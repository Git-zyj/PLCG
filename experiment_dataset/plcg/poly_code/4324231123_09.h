#ifndef _4324231123_09_H
#define _4324231123_09_H
/* params start */
# define PB_N 8
# define PB_M 10
# define PB_L 9
# define PB_P 9
# define PB_Q 9
/* params end */
# define xB PB_M
# define yB PB_P
# define xC PB_N
# define yC PB_M
# define zC PB_M
# define vC PB_L
# define xD PB_L
# define yD PB_P
# define xE PB_N
# define xF PB_M
# define yF PB_L
# define zF PB_Q
# define xG PB_M
# define yG PB_M
# define zG PB_L
# define vG PB_P
# define xH PB_M
# define yH PB_L
# define zH PB_L
# define vH PB_P
# define wH PB_P
# define xI PB_N
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

