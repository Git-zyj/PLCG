#ifndef _4426352115_00_H
#define _4426352115_00_H
/* params start */
# define PB_N 10
# define PB_M 8
# define PB_L 10
# define PB_P 8
# define PB_Q 9
/* params end */
# define xA PB_N
# define xD PB_M
# define yD PB_L
# define zD PB_Q
# define xE PB_M
# define xF PB_M
# define xG PB_M
# define yG PB_P
# define xH PB_M
# define yH PB_L
# define zH PB_P
# define vH PB_Q
# define xI PB_L
# define yI PB_P
# define zI PB_P
# define xJ PB_M
# define yJ PB_L
# define xK PB_N
# define yK PB_N
# define zK PB_M
# define xL PB_M
# define yL PB_L
# define zL PB_Q
# define vL PB_Q
# define xM PB_N
# define yM PB_N
# define zM PB_M
# define vM PB_L
# define xN PB_N
# define yN PB_N
# define zN PB_M
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

