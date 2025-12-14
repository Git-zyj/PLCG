#ifndef _4416352111_06_H
#define _4416352111_06_H
/* params start */
# define PB_N 10
# define PB_M 8
# define PB_L 9
# define PB_P 9
# define PB_Q 10
/* params end */
# define xA PB_M
# define xB PB_M
# define yB PB_L
# define zB PB_P
# define vB PB_Q
# define xC PB_M
# define yC PB_L
# define zC PB_L
# define vC PB_P
# define xD PB_M
# define yD PB_P
# define zD PB_Q
# define vD PB_Q
# define xE PB_M
# define xF PB_M
# define xG PB_M
# define xH PB_M
# define yH PB_M
# define zH PB_L
# define vH PB_L
# define xI PB_M
# define yI PB_P
# define zI PB_Q
# define xJ PB_M
# define yJ PB_M
# define zJ PB_P
# define vJ PB_Q
# define xK PB_N
# define yK PB_M
# define zK PB_M
# define vK PB_L
# define xL PB_M
# define yL PB_L
# define zL PB_P
# define xM PB_L
# define yM PB_P
# define zM PB_Q
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

