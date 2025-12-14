#ifndef _4336232115_08_H
#define _4336232115_08_H
/* params start */
# define PB_N 9
# define PB_M 8
# define PB_L 8
# define PB_P 10
# define PB_Q 8
/* params end */
# define xA PB_L
# define xB PB_M
# define yB PB_L
# define zB PB_P
# define xD PB_M
# define xE PB_N
# define yE PB_M
# define zE PB_M
# define xF PB_N
# define yF PB_N
# define zF PB_M
# define xG PB_N
# define yG PB_M
# define xH PB_M
# define yH PB_M
# define zH PB_L
# define vH PB_P
# define xI PB_M
# define yI PB_L
# define zI PB_L
# define vI PB_L
# define wI PB_P
# define xJ PB_L
# define yJ PB_P
# define zJ PB_Q
# define vJ PB_Q
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

