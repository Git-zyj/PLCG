#ifndef _4436351125_02_H
#define _4436351125_02_H
/* params start */
# define PB_N 8
# define PB_M 8
# define PB_L 10
# define PB_P 9
# define PB_Q 9
/* params end */
# define xA PB_M
# define xB PB_L
# define xD PB_M
# define yD PB_L
# define zD PB_Q
# define vD PB_Q
# define xE PB_M
# define xF PB_L
# define xG PB_L
# define xH PB_M
# define yH PB_L
# define xI PB_M
# define yI PB_P
# define xJ PB_N
# define yJ PB_M
# define zJ PB_L
# define vJ PB_L
# define xK PB_L
# define yK PB_P
# define zK PB_Q
# define vK PB_Q
# define xL PB_M
# define yL PB_L
# define zL PB_P
# define xM PB_M
# define yM PB_M
# define zM PB_M
# define vM PB_L
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

