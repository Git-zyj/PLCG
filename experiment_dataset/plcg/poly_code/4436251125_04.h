#ifndef _4436251125_04_H
#define _4436251125_04_H
/* params start */
# define PB_N 8
# define PB_M 9
# define PB_L 9
# define PB_P 8
# define PB_Q 10
/* params end */
# define xA PB_M
# define xB PB_M
# define yB PB_L
# define xC PB_M
# define yC PB_L
# define zC PB_L
# define vC PB_P
# define wC PB_Q
# define xE PB_M
# define xF PB_L
# define yF PB_L
# define xG PB_M
# define xH PB_P
# define yH PB_Q
# define xI PB_N
# define yI PB_N
# define zI PB_L
# define xJ PB_L
# define yJ PB_P
# define zJ PB_Q
# define vJ PB_Q
# define xK PB_M
# define yK PB_L
# define zK PB_L
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
# define yN PB_L
# define zN PB_P
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

