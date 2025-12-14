#ifndef _4426351125_02_H
#define _4426351125_02_H
/* params start */
# define PB_N 8
# define PB_M 10
# define PB_L 8
# define PB_P 8
# define PB_Q 10
/* params end */
# define xC PB_M
# define yC PB_P
# define xE PB_N
# define yE PB_M
# define xF PB_M
# define yF PB_P
# define zF PB_Q
# define xG PB_M
# define yG PB_L
# define zG PB_P
# define xH PB_N
# define yH PB_M
# define zH PB_P
# define xI PB_M
# define xJ PB_N
# define xK PB_L
# define yK PB_P
# define xL PB_L
# define yL PB_P
# define zL PB_Q
# define vL PB_Q
# define xM PB_M
# define yM PB_P
# define zM PB_Q
# define vM PB_Q
# define xN PB_M
# define yN PB_M
# define zN PB_L
# define vN PB_P
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

