#ifndef _4414351315_05_H
#define _4414351315_05_H
/* params start */
# define PB_N 10
# define PB_M 9
# define PB_L 8
# define PB_P 10
# define PB_Q 10
/* params end */
# define xA PB_N
# define yA PB_M
# define zA PB_L
# define vA PB_P
# define xB PB_M
# define yB PB_L
# define xD PB_M
# define yD PB_L
# define zD PB_Q
# define xE PB_M
# define yE PB_L
# define zE PB_L
# define vE PB_P
# define xF PB_M
# define yF PB_M
# define zF PB_L
# define vF PB_P
# define wF PB_Q
# define xG PB_M
# define yG PB_P
# define zG PB_Q
# define xH PB_M
# define yH PB_P
# define zH PB_Q
# define vH PB_Q
# define xI PB_L
# define xJ PB_L
# define yJ PB_Q
# define xK PB_N
# define yK PB_M
# define xL PB_M
# define yL PB_M
# define zL PB_M
# define xM PB_M
# define yM PB_M
# define zM PB_L
# define xN PB_M
# define yN PB_P
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

