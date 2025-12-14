#ifndef _4332351221_07_H
#define _4332351221_07_H
/* params start */
# define PB_N 9
# define PB_M 8
# define PB_L 10
# define PB_P 10
# define PB_Q 10
/* params end */
# define xA PB_M
# define yA PB_L
# define xB PB_M
# define yB PB_P
# define xC PB_N
# define yC PB_M
# define zC PB_L
# define vC PB_P
# define xD PB_M
# define yD PB_M
# define xE PB_L
# define yE PB_P
# define xF PB_M
# define xG PB_N
# define yG PB_N
# define xH PB_M
# define xI PB_M
# define xJ PB_M
# define yJ PB_L
# define zJ PB_P
# define xK PB_M
# define yK PB_M
# define zK PB_L
# define xL PB_M
# define yL PB_L
# define zL PB_P
# define xM PB_M
# define yM PB_L
# define zM PB_P
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

