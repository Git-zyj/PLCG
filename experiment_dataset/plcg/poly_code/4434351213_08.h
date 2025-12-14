#ifndef _4434351213_08_H
#define _4434351213_08_H
/* params start */
# define PB_N 9
# define PB_M 8
# define PB_L 10
# define PB_P 9
# define PB_Q 10
/* params end */
# define xA PB_M
# define yA PB_P
# define xB PB_M
# define xC PB_M
# define yC PB_M
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define vD PB_Q
# define xE PB_N
# define yE PB_M
# define xF PB_M
# define yF PB_L
# define xG PB_M
# define xH PB_N
# define xI PB_M
# define xJ PB_L
# define yJ PB_P
# define xK PB_M
# define yK PB_L
# define zK PB_P
# define vK PB_Q
# define wK PB_Q
# define xL PB_N
# define yL PB_M
# define zL PB_P
# define xM PB_M
# define yM PB_P
# define zM PB_P
# define xN PB_M
# define yN PB_L
# define zN PB_P
# define vN PB_P
# define xO PB_N
# define yO PB_M
# define zO PB_L
# define vO PB_L
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

