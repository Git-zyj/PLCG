#ifndef _4416252323_04_H
#define _4416252323_04_H
/* params start */
# define PB_M 8
# define PB_L 8
# define PB_P 9
# define PB_Q 8
/* params end */
# define xC PB_M
# define yC PB_L
# define zC PB_P
# define xB PB_M
# define yB PB_L
# define xE PB_M
# define yE PB_L
# define zE PB_P
# define vE PB_P
# define xF PB_L
# define yF PB_P
# define zF PB_Q
# define vF PB_Q
# define xG PB_M
# define yG PB_M
# define zG PB_L
# define vG PB_P
# define wG PB_Q
# define xH PB_M
# define yH PB_P
# define xI PB_M
# define yI PB_M
# define xJ PB_M
# define yJ PB_L
# define zJ PB_Q
# define xK PB_M
# define yK PB_L
# define zK PB_Q
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

