#ifndef _4412352211_07_H
#define _4412352211_07_H
/* params start */
# define PB_N 8
# define PB_M 10
# define PB_L 9
# define PB_P 8
# define PB_Q 9
/* params end */
# define xA PB_M
# define yA PB_L
# define xB PB_L
# define yB PB_P
# define zB PB_Q
# define vB PB_Q
# define xC PB_N
# define yC PB_M
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define xE PB_L
# define yE PB_P
# define zE PB_Q
# define xF PB_M
# define yF PB_P
# define xG PB_N
# define xH PB_M
# define xI PB_L
# define yI PB_P
# define zI PB_Q
# define vI PB_Q
# define xJ PB_M
# define yJ PB_L
# define zJ PB_P
# define vJ PB_Q
# define xK PB_N
# define yK PB_M
# define zK PB_M
# define xL PB_M
# define yL PB_M
# define xM PB_M
# define xN PB_M
# define yN PB_P
# define zN PB_Q
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

