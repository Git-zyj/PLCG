#ifndef _4426252323_09_H
#define _4426252323_09_H
/* params start */
# define PB_N 9
# define PB_M 10
# define PB_L 9
# define PB_P 10
# define PB_Q 10
/* params end */
# define xB PB_N
# define yB PB_M
# define zB PB_L
# define xD PB_N
# define yD PB_M
# define zD PB_P
# define vD PB_P
# define xE PB_M
# define yE PB_L
# define zE PB_L
# define vE PB_L
# define xF PB_N
# define yF PB_M
# define zF PB_P
# define xG PB_M
# define yG PB_L
# define zG PB_P
# define vG PB_Q
# define wG PB_Q
# define xH PB_M
# define yH PB_P
# define zH PB_Q
# define xI PB_M
# define yI PB_M
# define zI PB_L
# define vI PB_P
# define xJ PB_M
# define yJ PB_L
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

