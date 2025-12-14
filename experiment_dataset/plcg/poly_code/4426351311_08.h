#ifndef _4426351311_08_H
#define _4426351311_08_H
/* params start */
# define PB_N 8
# define PB_M 10
# define PB_L 10
# define PB_P 10
# define PB_Q 9
/* params end */
# define xA PB_M
# define yA PB_M
# define xB PB_N
# define xC PB_L
# define xD PB_N
# define yD PB_M
# define zD PB_L
# define xE PB_M
# define yE PB_L
# define xF PB_L
# define yF PB_P
# define xG PB_M
# define yG PB_L
# define xH PB_M
# define xI PB_M
# define xJ PB_L
# define xK PB_M
# define yK PB_P
# define zK PB_Q
# define vK PB_Q
# define xL PB_L
# define yL PB_P
# define zL PB_Q
# define xM PB_M
# define yM PB_M
# define zM PB_L
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

