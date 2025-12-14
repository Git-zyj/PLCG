#ifndef _4412352223_01_H
#define _4412352223_01_H
/* params start */
# define PB_N 9
# define PB_M 8
# define PB_L 9
# define PB_P 10
# define PB_Q 8
/* params end */
# define xA PB_M
# define xB PB_N
# define yB PB_M
# define zB PB_P
# define xE PB_M
# define xF PB_M
# define xG PB_M
# define yG PB_M
# define zG PB_L
# define vG PB_P
# define xH PB_M
# define yH PB_L
# define xI PB_L
# define yI PB_L
# define zI PB_P
# define xJ PB_N
# define yJ PB_M
# define zJ PB_L
# define xK PB_M
# define yK PB_M
# define xL PB_M
# define yL PB_L
# define zL PB_P
# define vL PB_Q
# define xM PB_M
# define yM PB_L
# define zM PB_P
# define vM PB_Q
# define wM PB_Q
# define xN PB_M
# define yN PB_M
# define zN PB_L
# define xO PB_M
# define yO PB_L
# define xP PB_M
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

