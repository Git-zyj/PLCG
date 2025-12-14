#ifndef _4426352323_02_H
#define _4426352323_02_H
/* params start */
# define PB_N 8
# define PB_M 9
# define PB_L 9
# define PB_P 10
# define PB_Q 9
/* params end */
# define xB PB_M
# define xC PB_M
# define xD PB_N
# define yD PB_M
# define zD PB_L
# define vD PB_P
# define xE PB_N
# define xF PB_L
# define xG PB_L
# define xH PB_N
# define yH PB_M
# define xI PB_L
# define yI PB_P
# define xJ PB_L
# define yJ PB_P
# define xK PB_M
# define yK PB_M
# define zK PB_L
# define vK PB_P
# define xL PB_M
# define yL PB_L
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

