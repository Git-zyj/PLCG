#ifndef _4416352211_00_H
#define _4416352211_00_H
/* params start */
# define PB_N 8
# define PB_M 9
# define PB_L 8
# define PB_P 10
# define PB_Q 9
/* params end */
# define xA PB_N
# define yA PB_M
# define xB PB_M
# define yB PB_L
# define xC PB_M
# define yC PB_L
# define xD PB_M
# define yD PB_L
# define zD PB_Q
# define xE PB_M
# define xF PB_M
# define xG PB_M
# define yG PB_L
# define xH PB_M
# define yH PB_M
# define xI PB_N
# define yI PB_M
# define xJ PB_L
# define yJ PB_P
# define zJ PB_Q
# define xK PB_M
# define yK PB_L
# define zK PB_Q
# define vK PB_Q
# define xL PB_M
# define yL PB_M
# define zL PB_L
# define vL PB_P
# define xM PB_M
# define yM PB_L
# define zM PB_P
# define vM PB_Q
# define wM PB_Q
# define xN PB_M
# define yN PB_L
# define zN PB_P
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

