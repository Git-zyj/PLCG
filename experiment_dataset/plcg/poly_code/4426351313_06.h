#ifndef _4426351313_06_H
#define _4426351313_06_H
/* params start */
# define PB_N 8
# define PB_M 8
# define PB_L 10
# define PB_P 10
# define PB_Q 8
/* params end */
# define xA PB_L
# define yA PB_L
# define zA PB_L
# define vA PB_L
# define xB PB_N
# define xC PB_M
# define yC PB_P
# define zC PB_Q
# define vC PB_Q
# define xD PB_M
# define yD PB_P
# define xE PB_N
# define yE PB_M
# define zE PB_L
# define xF PB_M
# define yF PB_L
# define zF PB_P
# define vF PB_P
# define xG PB_L
# define xH PB_N
# define xI PB_M
# define xJ PB_M
# define yJ PB_L
# define xK PB_M
# define yK PB_L
# define zK PB_P
# define vK PB_Q
# define xL PB_M
# define yL PB_L
# define zL PB_L
# define vL PB_P
# define xM PB_N
# define yM PB_M
# define xN PB_M
# define yN PB_L
# define zN PB_Q
# define xO PB_M
# define yO PB_L
# define zO PB_P
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

