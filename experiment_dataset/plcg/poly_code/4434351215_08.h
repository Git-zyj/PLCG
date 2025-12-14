#ifndef _4434351215_08_H
#define _4434351215_08_H
/* params start */
# define PB_N 10
# define PB_M 9
# define PB_L 9
# define PB_P 10
# define PB_Q 8
/* params end */
# define xA PB_M
# define xD PB_M
# define yD PB_L
# define zD PB_Q
# define xC PB_L
# define yC PB_P
# define zC PB_Q
# define xE PB_M
# define xF PB_L
# define xG PB_M
# define yG PB_M
# define zG PB_L
# define vG PB_Q
# define xH PB_N
# define yH PB_M
# define zH PB_L
# define vH PB_P
# define xI PB_M
# define yI PB_M
# define zI PB_L
# define xJ PB_M
# define yJ PB_M
# define xK PB_L
# define yK PB_L
# define xL PB_N
# define yL PB_L
# define zL PB_P
# define xM PB_N
# define yM PB_M
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

