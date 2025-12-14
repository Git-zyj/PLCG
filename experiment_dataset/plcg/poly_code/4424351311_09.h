#ifndef _4424351311_09_H
#define _4424351311_09_H
/* params start */
# define PB_N 8
# define PB_M 8
# define PB_L 9
# define PB_P 8
# define PB_Q 8
/* params end */
# define xA PB_M
# define yA PB_L
# define xB PB_L
# define yB PB_Q
# define zB PB_Q
# define vB PB_Q
# define xC PB_L
# define yC PB_P
# define zC PB_Q
# define vC PB_Q
# define xE PB_M
# define yE PB_L
# define zE PB_P
# define xF PB_L
# define yF PB_P
# define xG PB_M
# define yG PB_P
# define xH PB_N
# define yH PB_M
# define zH PB_L
# define xI PB_M
# define yI PB_L
# define zI PB_P
# define vI PB_P
# define xJ PB_N
# define yJ PB_M
# define zJ PB_L
# define vJ PB_P
# define xK PB_M
# define yK PB_M
# define zK PB_P
# define xL PB_N
# define yL PB_M
# define zL PB_L
# define vL PB_Q
# define wL PB_Q
# define xM PB_L
# define yM PB_P
# define zM PB_P
# define vM PB_Q
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

