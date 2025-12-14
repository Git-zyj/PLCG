#ifndef _4424351123_07_H
#define _4424351123_07_H
/* params start */
# define PB_N 9
# define PB_M 8
# define PB_L 9
# define PB_P 9
# define PB_Q 9
/* params end */
# define xA PB_M
# define yA PB_P
# define zA PB_Q
# define xB PB_N
# define yB PB_M
# define zB PB_L
# define vB PB_P
# define xC PB_L
# define yC PB_P
# define zC PB_Q
# define xE PB_M
# define yE PB_M
# define zE PB_L
# define xF PB_M
# define yF PB_P
# define xG PB_M
# define yG PB_P
# define zG PB_P
# define xH PB_N
# define yH PB_M
# define zH PB_M
# define xI PB_M
# define yI PB_L
# define zI PB_P
# define vI PB_Q
# define xJ PB_L
# define yJ PB_L
# define zJ PB_P
# define vJ PB_Q
# define xK PB_N
# define yK PB_M
# define zK PB_L
# define vK PB_P
# define xL PB_M
# define yL PB_L
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

