#ifndef _4432352315_01_H
#define _4432352315_01_H
/* params start */
# define PB_N 8
# define PB_M 8
# define PB_L 8
# define PB_P 9
# define PB_Q 10
/* params end */
# define xB PB_M
# define yB PB_P
# define xE PB_L
# define yE PB_P
# define xF PB_M
# define yF PB_L
# define zF PB_P
# define vF PB_Q
# define xG PB_L
# define yG PB_Q
# define zG PB_Q
# define xH PB_M
# define yH PB_M
# define zH PB_L
# define xI PB_M
# define yI PB_M
# define xJ PB_N
# define yJ PB_M
# define xK PB_M
# define xL PB_M
# define yL PB_M
# define zL PB_L
# define vL PB_P
# define xM PB_M
# define yM PB_L
# define zM PB_P
# define vM PB_P
# define wM PB_Q
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

