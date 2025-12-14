#ifndef _4336351211_02_H
#define _4336351211_02_H
/* params start */
# define PB_N 10
# define PB_M 8
# define PB_L 9
# define PB_P 10
# define PB_Q 9
/* params end */
# define xA PB_L
# define yA PB_P
# define zA PB_Q
# define xB PB_M
# define yB PB_M
# define xC PB_N
# define yC PB_M
# define zC PB_P
# define vC PB_P
# define xD PB_L
# define yD PB_P
# define zD PB_Q
# define xE PB_M
# define yE PB_M
# define xF PB_M
# define xG PB_M
# define yG PB_M
# define xH PB_M
# define yH PB_M
# define xI PB_M
# define yI PB_L
# define zI PB_P
# define xJ PB_M
# define xK PB_N
# define yK PB_M
# define zK PB_L
# define vK PB_P
# define xL PB_M
# define yL PB_L
# define zL PB_L
# define vL PB_P
# define xM PB_M
# define yM PB_M
# define zM PB_L
# define vM PB_P
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

