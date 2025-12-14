#ifndef _4432352213_07_H
#define _4432352213_07_H
/* params start */
# define PB_N 10
# define PB_M 10
# define PB_L 10
# define PB_P 8
# define PB_Q 8
/* params end */
# define xA PB_M
# define xB PB_M
# define yB PB_M
# define zB PB_L
# define vB PB_P
# define xC PB_L
# define yC PB_L
# define xD PB_M
# define yD PB_L
# define xE PB_M
# define xF PB_M
# define xG PB_M
# define yG PB_L
# define zG PB_P
# define vG PB_Q
# define xH PB_M
# define yH PB_L
# define zH PB_L
# define vH PB_L
# define xI PB_N
# define yI PB_N
# define zI PB_L
# define vI PB_P
# define xJ PB_M
# define xK PB_M
# define yK PB_P
# define xL PB_M
# define yL PB_L
# define xM PB_N
# define yM PB_N
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

