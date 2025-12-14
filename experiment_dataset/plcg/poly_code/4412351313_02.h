#ifndef _4412351313_02_H
#define _4412351313_02_H
/* params start */
# define PB_N 8
# define PB_M 10
# define PB_L 8
# define PB_P 8
# define PB_Q 9
/* params end */
# define xA PB_L
# define xB PB_M
# define yB PB_L
# define xC PB_N
# define yC PB_L
# define zC PB_P
# define vC PB_P
# define xE PB_N
# define xF PB_L
# define xG PB_M
# define yG PB_M
# define xH PB_L
# define yH PB_P
# define xI PB_M
# define yI PB_L
# define xJ PB_M
# define yJ PB_P
# define zJ PB_Q
# define xK PB_M
# define yK PB_P
# define zK PB_P
# define vK PB_Q
# define xL PB_M
# define yL PB_L
# define zL PB_L
# define xM PB_L
# define yM PB_P
# define zM PB_Q
# define vM PB_Q
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

