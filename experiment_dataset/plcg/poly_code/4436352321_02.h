#ifndef _4436352321_02_H
#define _4436352321_02_H
/* params start */
# define PB_N 9
# define PB_M 10
# define PB_L 8
# define PB_P 10
# define PB_Q 9
/* params end */
# define xA PB_M
# define yA PB_L
# define xB PB_M
# define yB PB_M
# define zB PB_M
# define vB PB_M
# define xC PB_M
# define yC PB_L
# define zC PB_P
# define xD PB_M
# define xE PB_M
# define yE PB_P
# define xF PB_M
# define xG PB_N
# define xH PB_P
# define yH PB_Q
# define xI PB_M
# define yI PB_L
# define zI PB_L
# define vI PB_P
# define xJ PB_L
# define yJ PB_Q
# define zJ PB_Q
# define vJ PB_Q
# define xK PB_M
# define yK PB_L
# define zK PB_Q
# define xL PB_M
# define yL PB_L
# define zL PB_P
# define vL PB_P
# define xM PB_N
# define yM PB_M
# define zM PB_L
# define xN PB_N
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

