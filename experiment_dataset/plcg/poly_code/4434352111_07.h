#ifndef _4434352111_07_H
#define _4434352111_07_H
/* params start */
# define PB_M 10
# define PB_L 10
# define PB_P 9
# define PB_Q 8
/* params end */
# define xA PB_M
# define yA PB_L
# define xB PB_L
# define yB PB_P
# define zB PB_Q
# define vB PB_Q
# define xC PB_M
# define yC PB_M
# define zC PB_P
# define xE PB_M
# define xF PB_L
# define yF PB_L
# define xG PB_M
# define yG PB_L
# define xH PB_M
# define yH PB_M
# define xI PB_M
# define yI PB_L
# define zI PB_L
# define vI PB_P
# define wI PB_Q
# define xJ PB_M
# define yJ PB_L
# define zJ PB_Q
# define vJ PB_Q
# define xK PB_M
# define yK PB_P
# define zK PB_Q
# define vK PB_Q
# define xL PB_M
# define yL PB_P
# define zL PB_P
# define vL PB_Q
# define xM PB_L
# define yM PB_P
# define zM PB_Q
# define xN PB_M
# define yN PB_L
# define zN PB_P
# define xO PB_M
# define yO PB_L
# define zO PB_Q
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

