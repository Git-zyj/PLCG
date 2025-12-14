#ifndef _4332251215_06_H
#define _4332251215_06_H
/* params start */
# define PB_N 8
# define PB_M 8
# define PB_L 9
# define PB_P 10
# define PB_Q 8
/* params end */
# define xA PB_M
# define yA PB_P
# define xC PB_M
# define yC PB_L
# define zC PB_P
# define vC PB_Q
# define xD PB_M
# define yD PB_L
# define xE PB_M
# define xF PB_M
# define yF PB_L
# define xG PB_M
# define yG PB_L
# define zG PB_P
# define vG PB_Q
# define wG PB_Q
# define xH PB_L
# define yH PB_P
# define zH PB_Q
# define xI PB_N
# define yI PB_M
# define zI PB_L
# define vI PB_L
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

