#ifndef _4434352215_07_H
#define _4434352215_07_H
/* params start */
# define PB_N 10
# define PB_M 10
# define PB_L 9
# define PB_P 10
# define PB_Q 9
/* params end */
# define xA PB_M
# define yA PB_L
# define zA PB_P
# define vA PB_P
# define xB PB_M
# define xD PB_M
# define yD PB_L
# define xE PB_M
# define yE PB_M
# define zE PB_M
# define vE PB_P
# define xF PB_L
# define yF PB_P
# define zF PB_Q
# define vF PB_Q
# define xG PB_L
# define yG PB_P
# define zG PB_P
# define vG PB_Q
# define wG PB_Q
# define xH PB_M
# define xI PB_N
# define yI PB_M
# define xJ PB_M
# define yJ PB_L
# define xK PB_N
# define xL PB_M
# define yL PB_P
# define zL PB_Q
# define xM PB_M
# define xN PB_M
# define yN PB_L
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

