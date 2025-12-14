#ifndef _4414332113_02_H
#define _4414332113_02_H
/* params start */
# define PB_N 9
# define PB_M 10
# define PB_L 9
# define PB_P 8
# define PB_Q 9
/* params end */
# define xA PB_M
# define yA PB_L
# define xB PB_M
# define yB PB_L
# define zB PB_P
# define vB PB_Q
# define xD PB_M
# define xE PB_M
# define yE PB_L
# define xF PB_N
# define yF PB_M
# define xG PB_L
# define yG PB_P
# define zG PB_P
# define vG PB_Q
# define wG PB_Q
# define xH PB_M
# define yH PB_L
# define zH PB_Q
# define xI PB_N
# define yI PB_M
# define zI PB_L
# define xJ PB_M
# define yJ PB_L
# define zJ PB_P
# define vJ PB_Q
# define xK PB_L
# define yK PB_Q
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

