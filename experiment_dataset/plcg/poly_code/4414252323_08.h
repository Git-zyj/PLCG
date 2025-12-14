#ifndef _4414252323_08_H
#define _4414252323_08_H
/* params start */
# define PB_N 10
# define PB_M 10
# define PB_L 8
# define PB_P 9
# define PB_Q 8
/* params end */
# define xD PB_L
# define xB PB_M
# define yB PB_L
# define zB PB_Q
# define vB PB_Q
# define xC PB_M
# define yC PB_L
# define xE PB_M
# define xF PB_M
# define xG PB_M
# define yG PB_L
# define zG PB_L
# define vG PB_P
# define xH PB_M
# define yH PB_M
# define zH PB_L
# define vH PB_L
# define xI PB_M
# define yI PB_L
# define zI PB_P
# define xJ PB_M
# define yJ PB_L
# define xK PB_N
# define yK PB_M
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

