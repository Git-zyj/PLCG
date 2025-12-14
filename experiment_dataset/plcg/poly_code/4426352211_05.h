#ifndef _4426352211_05_H
#define _4426352211_05_H
/* params start */
# define PB_N 10
# define PB_M 10
# define PB_L 10
# define PB_P 9
# define PB_Q 10
/* params end */
# define xA PB_M
# define yA PB_M
# define xB PB_L
# define yB PB_P
# define xC PB_M
# define yC PB_M
# define zC PB_L
# define vC PB_P
# define xD PB_M
# define xE PB_N
# define xF PB_M
# define yF PB_M
# define zF PB_L
# define xG PB_M
# define yG PB_L
# define xH PB_L
# define yH PB_P
# define xI PB_M
# define yI PB_L
# define xJ PB_L
# define yJ PB_P
# define zJ PB_Q
# define xK PB_M
# define yK PB_L
# define zK PB_L
# define vK PB_P
# define xL PB_M
# define yL PB_L
# define zL PB_P
# define vL PB_Q
# define xM PB_M
# define xN PB_M
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

