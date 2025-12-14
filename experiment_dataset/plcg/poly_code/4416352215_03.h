#ifndef _4416352215_03_H
#define _4416352215_03_H
/* params start */
# define PB_N 9
# define PB_M 9
# define PB_L 10
# define PB_P 8
# define PB_Q 9
/* params end */
# define xB PB_M
# define yB PB_L
# define zB PB_P
# define vB PB_Q
# define xC PB_N
# define yC PB_M
# define zC PB_L
# define vC PB_P
# define xD PB_M
# define xE PB_M
# define yE PB_L
# define zE PB_P
# define xF PB_M
# define yF PB_P
# define xG PB_M
# define yG PB_L
# define zG PB_P
# define xH PB_M
# define yH PB_P
# define zH PB_Q
# define xI PB_M
# define yI PB_L
# define zI PB_Q
# define vI PB_Q
# define xJ PB_N
# define yJ PB_M
# define zJ PB_L
# define vJ PB_P
# define wJ PB_Q
# define xK PB_N
# define yK PB_M
# define zK PB_L
# define vK PB_Q
# define xL PB_L
# define yL PB_L
# define zL PB_P
# define vL PB_Q
# define xM PB_M
# define xN PB_M
# define xO PB_M
# define yO PB_M
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

