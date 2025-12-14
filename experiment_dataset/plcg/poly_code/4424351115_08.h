#ifndef _4424351115_08_H
#define _4424351115_08_H
/* params start */
# define PB_N 10
# define PB_M 10
# define PB_L 8
# define PB_P 8
# define PB_Q 8
/* params end */
# define xA PB_M
# define yA PB_M
# define xB PB_L
# define xC PB_M
# define yC PB_L
# define zC PB_P
# define xE PB_L
# define yE PB_P
# define xF PB_N
# define yF PB_L
# define xG PB_M
# define yG PB_M
# define xH PB_M
# define xI PB_L
# define xJ PB_L
# define xK PB_M
# define yK PB_P
# define zK PB_Q
# define vK PB_Q
# define xL PB_N
# define yL PB_L
# define zL PB_L
# define vL PB_L
# define xM PB_N
# define yM PB_M
# define zM PB_L
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

