#ifndef _4426351213_06_H
#define _4426351213_06_H
/* params start */
# define PB_N 50
# define PB_M 50
# define PB_L 50
# define PB_P 50
# define PB_Q 30
/* params end */
# define xA PB_M
# define xB PB_N
# define yB PB_N
# define xC PB_L
# define yC PB_P
# define xE PB_N
# define xF PB_L
# define xG PB_M
# define xH PB_M
# define yH PB_L
# define zH PB_Q
# define vH PB_Q
# define xI PB_L
# define yI PB_Q
# define zI PB_Q
# define xJ PB_N
# define yJ PB_N
# define zJ PB_M
# define vJ PB_L
# define xK PB_M
# define yK PB_L
# define xL PB_L
# define yL PB_P
# define xM PB_M
# define yM PB_M
# define xN PB_N
# define yN PB_L
# define zN PB_L
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

