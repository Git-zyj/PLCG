#ifndef _4416331323_07_H
#define _4416331323_07_H
/* params start */
# define PB_N 9
# define PB_M 9
# define PB_L 9
# define PB_P 10
# define PB_Q 8
/* params end */
# define xA PB_M
# define yA PB_L
# define xB PB_N
# define yB PB_M
# define zB PB_P
# define vB PB_P
# define xC PB_L
# define xE PB_M
# define xF PB_M
# define yF PB_M
# define xG PB_M
# define xH PB_N
# define yH PB_M
# define zH PB_L
# define vH PB_P
# define wH PB_P
# define xI PB_M
# define yI PB_P
# define zI PB_Q
# define vI PB_Q
# define xJ PB_N
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

