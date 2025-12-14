#ifndef _4436331211_04_H
#define _4436331211_04_H
/* params start */
# define PB_N 9
# define PB_M 9
# define PB_L 10
# define PB_P 8
# define PB_Q 10
/* params end */
# define xA PB_M
# define yA PB_L
# define xB PB_M
# define yB PB_P
# define zB PB_Q
# define vB PB_Q
# define xC PB_N
# define yC PB_M
# define zC PB_L
# define vC PB_P
# define xD PB_M
# define xE PB_M
# define xF PB_M
# define xG PB_M
# define xH PB_N
# define yH PB_M
# define xI PB_N
# define yI PB_M
# define zI PB_L
# define vI PB_P
# define xJ PB_N
# define yJ PB_M
# define zJ PB_L
# define xK PB_M
# define yK PB_M
# define zK PB_L
# define xL PB_N
# define yL PB_M
# define xM PB_N
# define yM PB_M
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

