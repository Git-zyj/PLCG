#ifndef _4412352223_08_H
#define _4412352223_08_H
/* params start */
# define PB_N 9
# define PB_M 8
# define PB_L 10
# define PB_P 9
# define PB_Q 9
/* params end */
# define xA PB_N
# define xB PB_N
# define xC PB_M
# define yC PB_L
# define zC PB_Q
# define xD PB_M
# define yD PB_M
# define zD PB_L
# define vD PB_P
# define xE PB_M
# define yE PB_M
# define xF PB_L
# define xG PB_M
# define yG PB_L
# define xH PB_N
# define xI PB_M
# define xJ PB_L
# define yJ PB_P
# define xK PB_M
# define yK PB_L
# define zK PB_L
# define xL PB_M
# define yL PB_P
# define zL PB_Q
# define xM PB_M
# define yM PB_P
# define zM PB_Q
# define vM PB_Q
# define xN PB_L
# define yN PB_P
# define zN PB_Q
# define vN PB_Q
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

