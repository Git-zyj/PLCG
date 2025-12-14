#ifndef _4416251225_07_H
#define _4416251225_07_H
/* params start */
# define PB_N 10
# define PB_M 10
# define PB_L 10
# define PB_P 10
# define PB_Q 9
/* params end */
# define xA PB_L
# define yA PB_P
# define xB PB_M
# define yB PB_M
# define zB PB_P
# define vB PB_Q
# define xE PB_M
# define yE PB_L
# define xF PB_M
# define yF PB_P
# define zF PB_P
# define vF PB_Q
# define xG PB_M
# define yG PB_L
# define zG PB_P
# define vG PB_Q
# define xH PB_N
# define yH PB_N
# define zH PB_M
# define vH PB_L
# define wH PB_L
# define xI PB_M
# define xJ PB_M
# define yJ PB_P
# define xK PB_N
# define yK PB_L
# define zK PB_P
# define xL PB_M
# define xM PB_M
# define yM PB_M
# define zM PB_L
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

