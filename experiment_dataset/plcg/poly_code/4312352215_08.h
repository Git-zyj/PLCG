#ifndef _4312352215_08_H
#define _4312352215_08_H
/* params start */
# define PB_N 8
# define PB_M 8
# define PB_L 10
# define PB_P 10
# define PB_Q 9
/* params end */
# define xA PB_M
# define xC PB_N
# define yC PB_M
# define zC PB_L
# define vC PB_Q
# define xD PB_L
# define yD PB_P
# define xE PB_M
# define yE PB_P
# define xF PB_M
# define yF PB_L
# define xG PB_M
# define xH PB_N
# define xI PB_M
# define xJ PB_M
# define yJ PB_L
# define zJ PB_Q
# define vJ PB_Q
# define xK PB_M
# define yK PB_L
# define zK PB_Q
# define vK PB_Q
# define xL PB_L
# define yL PB_P
# define zL PB_Q
# define xM PB_P
# define yM PB_Q
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

