#ifndef _4436352215_00_H
#define _4436352215_00_H
/* params start */
# define PB_N 10
# define PB_M 8
# define PB_L 10
# define PB_P 10
# define PB_Q 10
/* params end */
# define xA PB_M
# define yA PB_P
# define xB PB_L
# define xE PB_M
# define yE PB_L
# define zE PB_L
# define xF PB_N
# define yF PB_N
# define xG PB_L
# define yG PB_Q
# define zG PB_Q
# define xH PB_L
# define xI PB_M
# define xJ PB_M
# define yJ PB_P
# define zJ PB_Q
# define vJ PB_Q
# define xK PB_M
# define yK PB_L
# define zK PB_Q
# define vK PB_Q
# define xL PB_M
# define yL PB_P
# define zL PB_Q
# define vL PB_Q
# define xM PB_M
# define yM PB_P
# define xN PB_N
# define yN PB_M
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

