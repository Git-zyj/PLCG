#ifndef _4412331321_05_H
#define _4412331321_05_H
/* params start */
# define PB_N 9
# define PB_M 10
# define PB_L 9
# define PB_P 10
# define PB_Q 8
/* params end */
# define xD PB_M
# define xE PB_M
# define yE PB_L
# define zE PB_P
# define xF PB_M
# define yF PB_L
# define zF PB_L
# define vF PB_Q
# define wF PB_Q
# define xG PB_M
# define xH PB_L
# define xI PB_N
# define yI PB_M
# define zI PB_P
# define xJ PB_M
# define yJ PB_L
# define xK PB_N
# define xL PB_M
# define yL PB_L
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

