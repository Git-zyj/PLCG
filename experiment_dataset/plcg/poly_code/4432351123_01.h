#ifndef _4432351123_01_H
#define _4432351123_01_H
/* params start */
# define PB_N 9
# define PB_M 8
# define PB_L 8
# define PB_P 10
# define PB_Q 8
/* params end */
# define xA PB_N
# define yA PB_L
# define zA PB_P
# define vA PB_P
# define xB PB_M
# define xC PB_M
# define yC PB_L
# define zC PB_P
# define vC PB_Q
# define xD PB_M
# define yD PB_L
# define zD PB_Q
# define vD PB_Q
# define xE PB_M
# define yE PB_P
# define zE PB_Q
# define xF PB_L
# define yF PB_P
# define zF PB_Q
# define xG PB_N
# define yG PB_M
# define zG PB_L
# define vG PB_P
# define xH PB_M
# define yH PB_L
# define zH PB_L
# define vH PB_P
# define xI PB_N
# define xJ PB_L
# define xK PB_M
# define xL PB_M
# define yL PB_L
# define zL PB_P
# define xM PB_M
# define yM PB_L
# define zM PB_P
# define vM PB_Q
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

