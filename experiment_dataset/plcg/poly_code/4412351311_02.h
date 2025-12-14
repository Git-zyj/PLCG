#ifndef _4412351311_02_H
#define _4412351311_02_H
/* params start */
# define PB_N 8
# define PB_M 8
# define PB_L 10
# define PB_P 9
# define PB_Q 10
/* params end */
# define xA PB_M
# define yA PB_L
# define xB PB_N
# define yB PB_N
# define zB PB_M
# define vB PB_L
# define xC PB_M
# define yC PB_L
# define zC PB_L
# define xD PB_L
# define yD PB_P
# define zD PB_Q
# define xE PB_L
# define yE PB_P
# define xF PB_N
# define yF PB_L
# define xG PB_M
# define xH PB_M
# define yH PB_L
# define zH PB_L
# define vH PB_P
# define xI PB_L
# define yI PB_Q
# define zI PB_Q
# define vI PB_Q
# define xJ PB_M
# define yJ PB_L
# define zJ PB_L
# define vJ PB_P
# define xK PB_M
# define yK PB_L
# define zK PB_P
# define xL PB_M
# define yL PB_M
# define zL PB_L
# define xM PB_M
# define yM PB_L
# define zM PB_Q
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

