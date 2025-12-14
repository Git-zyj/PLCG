#ifndef _4412331321_03_H
#define _4412331321_03_H
/* params start */
# define PB_N 9
# define PB_M 9
# define PB_L 10
# define PB_P 10
# define PB_Q 10
/* params end */
# define xB PB_L
# define yB PB_P
# define zB PB_Q
# define xC PB_M
# define yC PB_M
# define zC PB_L
# define vC PB_P
# define xD PB_L
# define yD PB_Q
# define zD PB_Q
# define vD PB_Q
# define xE PB_M
# define yE PB_P
# define xF PB_M
# define yF PB_P
# define xG PB_N
# define yG PB_M
# define xH PB_M
# define yH PB_L
# define zH PB_L
# define vH PB_P
# define xI PB_M
# define yI PB_L
# define zI PB_P
# define vI PB_Q
# define xJ PB_N
# define yJ PB_N
# define zJ PB_M
# define xK PB_L
# define yK PB_P
# define zK PB_Q
# define vK PB_Q
# define wK PB_Q
# define xL PB_L
# define yL PB_P
# define zL PB_Q
# define vL PB_Q
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

