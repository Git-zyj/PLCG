#ifndef _4422352323_05_H
#define _4422352323_05_H
/* params start */
# define PB_N 8
# define PB_M 9
# define PB_L 8
# define PB_P 8
# define PB_Q 8
/* params end */
# define xA PB_M
# define yA PB_L
# define zA PB_Q
# define xB PB_M
# define xC PB_L
# define yC PB_P
# define zC PB_Q
# define vC PB_Q
# define xD PB_N
# define yD PB_M
# define xE PB_M
# define yE PB_L
# define zE PB_P
# define xF PB_M
# define yF PB_L
# define xG PB_M
# define xH PB_M
# define xI PB_N
# define xJ PB_M
# define yJ PB_L
# define zJ PB_P
# define xK PB_L
# define yK PB_L
# define zK PB_P
# define xL PB_M
# define yL PB_P
# define zL PB_Q
# define vL PB_Q
# define xM PB_L
# define yM PB_P
# define zM PB_Q
# define vM PB_Q
# define wM PB_Q
# define xN PB_N
# define yN PB_M
# define xO PB_L
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

