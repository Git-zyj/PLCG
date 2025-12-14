#ifndef _4336352325_03_H
#define _4336352325_03_H
/* params start */
# define PB_N 9
# define PB_M 9
# define PB_L 9
# define PB_P 8
# define PB_Q 10
/* params end */
# define xA PB_M
# define yA PB_L
# define zA PB_P
# define vA PB_Q
# define xB PB_M
# define xC PB_M
# define yC PB_L
# define zC PB_P
# define xD PB_M
# define yD PB_M
# define zD PB_P
# define xE PB_L
# define yE PB_Q
# define zE PB_Q
# define xF PB_M
# define yF PB_L
# define zF PB_P
# define xG PB_M
# define yG PB_M
# define zG PB_P
# define vG PB_Q
# define xH PB_L
# define yH PB_Q
# define zH PB_Q
# define vH PB_Q
# define xI PB_M
# define xJ PB_M
# define xK PB_N
# define xL PB_M
# define yL PB_L
# define xM PB_M
# define yM PB_M
# define xN PB_L
# define yN PB_L
# define zN PB_P
# define vN PB_P
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

