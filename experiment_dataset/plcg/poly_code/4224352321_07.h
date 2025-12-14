#ifndef _4224352321_07_H
#define _4224352321_07_H
/* params start */
# define PB_N 9
# define PB_M 10
# define PB_L 10
# define PB_P 8
# define PB_Q 8
/* params end */
# define xA PB_N
# define xB PB_M
# define yB PB_L
# define zB PB_L
# define vB PB_Q
# define xC PB_M
# define xD PB_M
# define xE PB_M
# define yE PB_L
# define zE PB_Q
# define vE PB_Q
# define xF PB_N
# define yF PB_M
# define zF PB_L
# define xG PB_L
# define yG PB_P
# define zG PB_Q
# define vG PB_Q
# define xH PB_N
# define yH PB_M
# define zH PB_L
# define vH PB_L
# define xI PB_N
# define yI PB_N
# define zI PB_L
# define vI PB_P
# define wI PB_P
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

