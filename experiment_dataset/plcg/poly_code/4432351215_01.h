#ifndef _4432351215_01_H
#define _4432351215_01_H
/* params start */
# define PB_N 8
# define PB_M 9
# define PB_L 10
# define PB_P 8
# define PB_Q 8
/* params end */
# define xB PB_M
# define yB PB_L
# define xC PB_M
# define yC PB_L
# define zC PB_P
# define vC PB_Q
# define xE PB_M
# define yE PB_L
# define zE PB_P
# define xF PB_M
# define yF PB_M
# define zF PB_M
# define xG PB_M
# define yG PB_L
# define zG PB_P
# define vG PB_P
# define xH PB_L
# define yH PB_Q
# define zH PB_Q
# define xI PB_M
# define yI PB_P
# define xJ PB_M
# define yJ PB_P
# define xK PB_M
# define yK PB_L
# define xL PB_M
# define yL PB_P
# define zL PB_P
# define vL PB_P
# define xM PB_M
# define yM PB_L
# define zM PB_P
# define vM PB_P
# define xN PB_N
# define yN PB_M
# define zN PB_L
# define vN PB_P
# define wN PB_Q
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

