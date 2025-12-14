#ifndef _4426351111_00_H
#define _4426351111_00_H
/* params start */
# define PB_M 8
# define PB_L 8
# define PB_P 10
# define PB_Q 9
/* params end */
# define xA PB_L
# define yA PB_Q
# define zA PB_Q
# define vA PB_Q
# define xB PB_M
# define xC PB_M
# define yC PB_L
# define zC PB_P
# define xD PB_M
# define yD PB_L
# define xE PB_M
# define yE PB_L
# define zE PB_P
# define vE PB_Q
# define xF PB_M
# define yF PB_L
# define zF PB_Q
# define xG PB_M
# define yG PB_Q
# define zG PB_Q
# define vG PB_Q
# define xH PB_L
# define yH PB_L
# define zH PB_P
# define vH PB_Q
# define xI PB_M
# define yI PB_L
# define zI PB_L
# define vI PB_P
# define wI PB_Q
# define xJ PB_M
# define xK PB_M
# define xL PB_M
# define xM PB_M
# define yM PB_L
# define zM PB_L
# define xN PB_L
# define yN PB_Q
# define zN PB_Q
# define xO PB_M
# define yO PB_L
# define xP PB_M
# define yP PB_L
# define xQ PB_L
# define yQ PB_P
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

