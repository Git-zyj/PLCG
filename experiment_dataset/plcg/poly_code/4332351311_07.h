#ifndef _4332351311_07_H
#define _4332351311_07_H
/* params start */
# define PB_N 10
# define PB_M 10
# define PB_L 10
# define PB_P 8
# define PB_Q 9
/* params end */
# define xA PB_M
# define yA PB_L
# define zA PB_P
# define xB PB_M
# define xC PB_M
# define yC PB_M
# define zC PB_L
# define vC PB_P
# define xD PB_N
# define yD PB_M
# define zD PB_L
# define xE PB_M
# define yE PB_L
# define zE PB_P
# define xF PB_M
# define yF PB_P
# define xG PB_N
# define yG PB_L
# define zG PB_P
# define xH PB_M
# define xI PB_L
# define xJ PB_M
# define xK PB_N
# define yK PB_M
# define zK PB_M
# define vK PB_M
# define xL PB_M
# define yL PB_M
# define zL PB_L
# define vL PB_Q
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

