#ifndef _4424352321_09_H
#define _4424352321_09_H
/* params start */
# define PB_N 10
# define PB_M 8
# define PB_L 9
# define PB_P 8
# define PB_Q 9
/* params end */
# define xA PB_N
# define yA PB_M
# define xB PB_L
# define yB PB_L
# define zB PB_Q
# define vB PB_Q
# define xD PB_M
# define xE PB_L
# define yE PB_P
# define xF PB_L
# define yF PB_Q
# define xG PB_L
# define xH PB_L
# define yH PB_P
# define zH PB_P
# define xI PB_M
# define yI PB_M
# define zI PB_L
# define xJ PB_M
# define yJ PB_P
# define zJ PB_Q
# define vJ PB_Q
# define xK PB_M
# define yK PB_P
# define zK PB_P
# define xL PB_M
# define xM PB_M
# define xN PB_M
# define yN PB_M
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

