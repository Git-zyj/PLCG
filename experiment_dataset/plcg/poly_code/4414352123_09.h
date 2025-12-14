#ifndef _4414352123_09_H
#define _4414352123_09_H
/* params start */
# define PB_N 8
# define PB_M 9
# define PB_L 9
# define PB_P 8
# define PB_Q 9
/* params end */
# define xA PB_N
# define yA PB_M
# define zA PB_L
# define xB PB_M
# define xD PB_N
# define yD PB_L
# define zD PB_P
# define xE PB_N
# define yE PB_M
# define zE PB_L
# define vE PB_P
# define xF PB_N
# define yF PB_M
# define zF PB_P
# define vF PB_Q
# define xG PB_M
# define yG PB_L
# define zG PB_P
# define xH PB_M
# define yH PB_L
# define xI PB_M
# define yI PB_L
# define xJ PB_L
# define yJ PB_P
# define xK PB_M
# define yK PB_L
# define zK PB_P
# define vK PB_Q
# define wK PB_Q
# define xL PB_M
# define yL PB_P
# define zL PB_P
# define vL PB_Q
# define xM PB_L
# define yM PB_L
# define zM PB_Q
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

