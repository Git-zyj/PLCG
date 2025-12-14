#ifndef _4412351313_05_H
#define _4412351313_05_H
/* params start */
# define PB_N 8
# define PB_M 8
# define PB_L 10
# define PB_P 9
# define PB_Q 10
/* params end */
# define xD PB_M
# define yD PB_P
# define xB PB_N
# define xE PB_L
# define yE PB_P
# define zE PB_Q
# define xF PB_M
# define yF PB_L
# define zF PB_Q
# define xG PB_M
# define yG PB_L
# define zG PB_Q
# define xH PB_M
# define xI PB_M
# define xJ PB_M
# define xK PB_M
# define yK PB_M
# define zK PB_L
# define vK PB_P
# define xL PB_M
# define yL PB_L
# define zL PB_L
# define vL PB_P
# define xM PB_L
# define yM PB_P
# define zM PB_Q
# define vM PB_Q
# define wM PB_Q
# define xN PB_N
# define yN PB_N
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

