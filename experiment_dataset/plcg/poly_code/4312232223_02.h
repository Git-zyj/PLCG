#ifndef _4312232223_02_H
#define _4312232223_02_H
/* params start */
# define PB_N 10
# define PB_M 9
# define PB_L 10
# define PB_P 8
# define PB_Q 10
/* params end */
# define xC PB_M
# define yC PB_L
# define zC PB_P
# define vC PB_Q
# define xB PB_M
# define yB PB_L
# define zB PB_P
# define vB PB_P
# define xD PB_N
# define yD PB_M
# define xE PB_M
# define yE PB_M
# define zE PB_L
# define xF PB_M
# define yF PB_L
# define zF PB_Q
# define xG PB_N
# define yG PB_M
# define zG PB_L
# define vG PB_Q
# define xH PB_M
# define yH PB_L
# define zH PB_P
# define vH PB_Q
# define wH PB_Q
# define xI PB_M
# define yI PB_L
# define zI PB_P
# define vI PB_Q
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

