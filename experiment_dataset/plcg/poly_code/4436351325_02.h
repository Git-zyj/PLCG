#ifndef _4436351325_02_H
#define _4436351325_02_H
/* params start */
# define PB_N 10
# define PB_M 10
# define PB_L 10
# define PB_P 10
# define PB_Q 8
/* params end */
# define xA PB_M
# define xD PB_M
# define yD PB_L
# define zD PB_Q
# define vD PB_Q
# define xE PB_M
# define yE PB_L
# define xF PB_N
# define yF PB_M
# define xG PB_M
# define xH PB_L
# define yH PB_P
# define zH PB_P
# define xI PB_M
# define yI PB_P
# define zI PB_P
# define xJ PB_M
# define yJ PB_L
# define xK PB_M
# define yK PB_M
# define zK PB_P
# define xL PB_M
# define yL PB_L
# define zL PB_P
# define vL PB_Q
# define xM PB_N
# define yM PB_M
# define zM PB_L
# define vM PB_P
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

