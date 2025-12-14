#ifndef _4416352313_01_H
#define _4416352313_01_H
/* params start */
# define PB_N 10
# define PB_M 10
# define PB_L 8
# define PB_P 10
# define PB_Q 9
/* params end */
# define xD PB_M
# define yD PB_L
# define zD PB_Q
# define vD PB_Q
# define xC PB_M
# define xE PB_M
# define yE PB_L
# define zE PB_P
# define vE PB_Q
# define xF PB_M
# define yF PB_L
# define zF PB_Q
# define xG PB_M
# define yG PB_L
# define zG PB_Q
# define vG PB_Q
# define xH PB_M
# define yH PB_L
# define xI PB_M
# define xJ PB_M
# define yJ PB_P
# define zJ PB_Q
# define xK PB_N
# define yK PB_M
# define zK PB_L
# define vK PB_L
# define xL PB_M
# define yL PB_M
# define zL PB_L
# define xM PB_M
# define yM PB_P
# define zM PB_Q
# define vM PB_Q
# define wM PB_Q
# define xN PB_L
# define yN PB_Q
# define zN PB_Q
# define vN PB_Q
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

