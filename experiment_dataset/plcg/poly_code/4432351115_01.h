#ifndef _4432351115_01_H
#define _4432351115_01_H
/* params start */
# define PB_N 9
# define PB_M 9
# define PB_L 9
# define PB_P 9
# define PB_Q 10
/* params end */
# define xA PB_M
# define yA PB_P
# define zA PB_P
# define xB PB_N
# define yB PB_N
# define xC PB_M
# define yC PB_L
# define zC PB_P
# define vC PB_Q
# define xD PB_M
# define xE PB_N
# define yE PB_M
# define zE PB_P
# define vE PB_Q
# define xF PB_L
# define yF PB_P
# define zF PB_Q
# define vF PB_Q
# define xG PB_N
# define yG PB_N
# define zG PB_N
# define xH PB_M
# define yH PB_L
# define xI PB_M
# define yI PB_P
# define xJ PB_M
# define xK PB_N
# define yK PB_L
# define xL PB_L
# define yL PB_P
# define zL PB_Q
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

