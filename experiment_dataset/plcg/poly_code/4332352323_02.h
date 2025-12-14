#ifndef _4332352323_02_H
#define _4332352323_02_H
/* params start */
# define PB_M 10
# define PB_L 8
# define PB_P 8
# define PB_Q 10
/* params end */
# define xC PB_L
# define xB PB_M
# define yB PB_P
# define zB PB_Q
# define vB PB_Q
# define xD PB_M
# define xE PB_M
# define xF PB_M
# define yF PB_L
# define zF PB_P
# define vF PB_Q
# define xG PB_M
# define yG PB_L
# define zG PB_P
# define xH PB_M
# define yH PB_L
# define zH PB_P
# define xI PB_L
# define yI PB_P
# define zI PB_P
# define vI PB_Q
# define xJ PB_L
# define yJ PB_Q
# define zJ PB_Q
# define vJ PB_Q
# define wJ PB_Q
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

