#ifndef _4434352111_08_H
#define _4434352111_08_H
/* params start */
# define PB_N 9
# define PB_M 10
# define PB_L 8
# define PB_P 9
# define PB_Q 9
/* params end */
# define xA PB_M
# define yA PB_M
# define xB PB_M
# define yB PB_L
# define zB PB_Q
# define xD PB_M
# define yD PB_L
# define zD PB_L
# define vD PB_P
# define xE PB_M
# define yE PB_P
# define zE PB_Q
# define xF PB_M
# define xG PB_M
# define yG PB_M
# define xH PB_L
# define yH PB_P
# define xI PB_L
# define yI PB_L
# define zI PB_P
# define vI PB_Q
# define xJ PB_M
# define yJ PB_L
# define zJ PB_P
# define xK PB_N
# define yK PB_M
# define zK PB_P
# define xL PB_M
# define yL PB_M
# define zL PB_P
# define vL PB_Q
# define xM PB_M
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

