#ifndef _4436351123_07_H
#define _4436351123_07_H
/* params start */
# define PB_N 10
# define PB_M 8
# define PB_L 10
# define PB_P 9
/* params end */
# define xA PB_M
# define xB PB_M
# define xC PB_L
# define yC PB_L
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define vD PB_P
# define xE PB_L
# define xF PB_M
# define yF PB_L
# define xG PB_M
# define yG PB_L
# define xH PB_L
# define xI PB_L
# define xJ PB_N
# define yJ PB_M
# define xK PB_M
# define yK PB_M
# define zK PB_L
# define vK PB_P
# define xL PB_M
# define yL PB_L
# define zL PB_L
# define vL PB_P
# define xM PB_N
# define yM PB_M
# define zM PB_M
# define vM PB_L
# define xN PB_N
# define yN PB_L
# define zN PB_P
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

