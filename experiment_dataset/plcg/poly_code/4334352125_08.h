#ifndef _4334352125_08_H
#define _4334352125_08_H
/* params start */
# define PB_M 9
# define PB_L 8
# define PB_P 8
# define PB_Q 10
/* params end */
# define xA PB_M
# define xB PB_M
# define yB PB_L
# define zB PB_P
# define vB PB_Q
# define xD PB_M
# define yD PB_M
# define xE PB_M
# define yE PB_L
# define zE PB_L
# define xF PB_M
# define yF PB_P
# define xG PB_M
# define yG PB_L
# define xH PB_M
# define xI PB_M
# define yI PB_L
# define zI PB_P
# define vI PB_Q
# define xJ PB_L
# define yJ PB_P
# define zJ PB_Q
# define vJ PB_Q
# define xK PB_L
# define yK PB_L
# define zK PB_Q
# define xL PB_M
# define yL PB_L
# define zL PB_P
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

