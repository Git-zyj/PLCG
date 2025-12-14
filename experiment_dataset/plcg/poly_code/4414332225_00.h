#ifndef _4414332225_00_H
#define _4414332225_00_H
/* params start */
# define PB_N 9
# define PB_M 9
# define PB_L 8
# define PB_P 8
# define PB_Q 8
/* params end */
# define xA PB_M
# define xB PB_N
# define yB PB_M
# define zB PB_M
# define vB PB_P
# define xD PB_N
# define xE PB_M
# define xF PB_N
# define yF PB_N
# define zF PB_M
# define vF PB_L
# define wF PB_P
# define xG PB_M
# define yG PB_L
# define zG PB_L
# define vG PB_Q
# define xH PB_L
# define yH PB_P
# define zH PB_Q
# define vH PB_Q
# define xI PB_M
# define yI PB_L
# define zI PB_P
# define xJ PB_M
# define yJ PB_L
# define zJ PB_L
# define xK PB_N
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

