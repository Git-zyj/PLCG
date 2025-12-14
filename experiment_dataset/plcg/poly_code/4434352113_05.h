#ifndef _4434352113_05_H
#define _4434352113_05_H
/* params start */
# define PB_N 9
# define PB_M 9
# define PB_L 9
# define PB_P 9
# define PB_Q 8
/* params end */
# define xA PB_M
# define yA PB_L
# define zA PB_P
# define vA PB_Q
# define xC PB_M
# define yC PB_L
# define xE PB_L
# define yE PB_L
# define zE PB_P
# define xF PB_L
# define yF PB_P
# define zF PB_Q
# define xG PB_N
# define xH PB_L
# define yH PB_L
# define xI PB_M
# define yI PB_L
# define xJ PB_L
# define yJ PB_P
# define xK PB_M
# define xL PB_M
# define yL PB_M
# define zL PB_P
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

