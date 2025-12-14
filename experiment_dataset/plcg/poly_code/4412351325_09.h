#ifndef _4412351325_09_H
#define _4412351325_09_H
/* params start */
# define PB_N 9
# define PB_M 10
# define PB_L 9
# define PB_P 9
# define PB_Q 9
/* params end */
# define xC PB_M
# define yC PB_P
# define zC PB_Q
# define vC PB_Q
# define xD PB_M
# define xE PB_L
# define yE PB_P
# define zE PB_Q
# define xF PB_M
# define yF PB_M
# define zF PB_P
# define vF PB_Q
# define xG PB_M
# define yG PB_P
# define zG PB_Q
# define vG PB_Q
# define wG PB_Q
# define xH PB_M
# define yH PB_M
# define zH PB_L
# define xI PB_M
# define yI PB_P
# define zI PB_Q
# define vI PB_Q
# define xJ PB_L
# define yJ PB_P
# define zJ PB_Q
# define xK PB_N
# define yK PB_M
# define zK PB_L
# define vK PB_P
# define wK PB_Q
# define xL PB_L
# define xM PB_M
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

