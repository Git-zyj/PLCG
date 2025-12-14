#ifndef _4414352121_01_H
#define _4414352121_01_H
/* params start */
# define PB_N 8
# define PB_M 10
# define PB_L 10
# define PB_P 8
# define PB_Q 9
/* params end */
# define xA PB_L
# define yA PB_P
# define zA PB_Q
# define vA PB_Q
# define xB PB_M
# define xC PB_M
# define yC PB_L
# define zC PB_P
# define xD PB_L
# define yD PB_P
# define xE PB_N
# define yE PB_M
# define zE PB_L
# define vE PB_L
# define xF PB_M
# define yF PB_L
# define zF PB_P
# define vF PB_P
# define xG PB_M
# define yG PB_L
# define zG PB_P
# define vG PB_Q
# define xH PB_N
# define xI PB_M
# define xJ PB_M
# define xK PB_N
# define yK PB_M
# define zK PB_P
# define xL PB_M
# define yL PB_M
# define xM PB_N
# define yM PB_M
# define zM PB_L
# define xN PB_M
# define yN PB_L
# define zN PB_P
# define xO PB_M
# define yO PB_L
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

