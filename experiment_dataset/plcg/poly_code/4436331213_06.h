#ifndef _4436331213_06_H
#define _4436331213_06_H
/* params start */
# define PB_N 30
# define PB_M 30
# define PB_L 30
# define PB_P 40
# define PB_Q 30
/* params end */
# define xA PB_M
# define yA PB_L
# define xB PB_M
# define yB PB_L
# define xC PB_M
# define xD PB_L
# define yD PB_Q
# define xE PB_M
# define yE PB_M
# define xF PB_N
# define yF PB_M
# define xG PB_L
# define yG PB_Q
# define xH PB_M
# define xI PB_M
# define xJ PB_M
# define xK PB_M
# define yK PB_L
# define zK PB_Q
# define xL PB_L
# define yL PB_P
# define zL PB_Q
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

