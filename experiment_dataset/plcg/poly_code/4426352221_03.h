#ifndef _4426352221_03_H
#define _4426352221_03_H
/* params start */
# define PB_N 9
# define PB_M 8
# define PB_L 10
# define PB_P 9
# define PB_Q 9
/* params end */
# define xA PB_L
# define xB PB_L
# define yB PB_P
# define zB PB_Q
# define vB PB_Q
# define xC PB_M
# define yC PB_M
# define zC PB_L
# define vC PB_P
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define xE PB_M
# define xF PB_N
# define xG PB_L
# define xH PB_N
# define yH PB_M
# define zH PB_M
# define vH PB_L
# define xI PB_M
# define yI PB_M
# define zI PB_L
# define vI PB_P
# define xJ PB_L
# define yJ PB_P
# define zJ PB_Q
# define vJ PB_Q
# define xK PB_N
# define yK PB_L
# define zK PB_P
# define xL PB_L
# define yL PB_P
# define xM PB_L
# define yM PB_L
# define zM PB_P
# define xN PB_L
# define yN PB_P
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

