#ifndef _4434352313_00_H
#define _4434352313_00_H
/* params start */
# define PB_N 10
# define PB_M 8
# define PB_L 8
# define PB_P 9
# define PB_Q 8
/* params end */
# define xA PB_M
# define xC PB_N
# define yC PB_N
# define zC PB_L
# define vC PB_P
# define xE PB_M
# define yE PB_L
# define zE PB_P
# define xF PB_N
# define xG PB_M
# define yG PB_P
# define xH PB_M
# define yH PB_P
# define xI PB_L
# define xJ PB_M
# define yJ PB_L
# define xK PB_N
# define xL PB_L
# define yL PB_P
# define zL PB_Q
# define vL PB_Q
# define xM PB_M
# define yM PB_L
# define zM PB_P
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

