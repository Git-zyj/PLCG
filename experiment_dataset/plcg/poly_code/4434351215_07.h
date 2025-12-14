#ifndef _4434351215_07_H
#define _4434351215_07_H
/* params start */
# define PB_N 8
# define PB_M 8
# define PB_L 8
# define PB_P 10
# define PB_Q 10
/* params end */
# define xA PB_N
# define yA PB_M
# define xC PB_L
# define yC PB_P
# define xD PB_N
# define yD PB_M
# define zD PB_L
# define vD PB_P
# define xE PB_L
# define yE PB_Q
# define zE PB_Q
# define xF PB_M
# define yF PB_L
# define zF PB_P
# define xG PB_M
# define yG PB_P
# define xH PB_M
# define xI PB_M
# define yI PB_P
# define zI PB_Q
# define xJ PB_M
# define yJ PB_L
# define zJ PB_P
# define vJ PB_Q
# define xK PB_M
# define yK PB_P
# define zK PB_Q
# define vK PB_Q
# define wK PB_Q
# define xL PB_M
# define yL PB_L
# define zL PB_P
# define vL PB_Q
# define xM PB_N
# define yM PB_M
# define zM PB_L
# define vM PB_P
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

