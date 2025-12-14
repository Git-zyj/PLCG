#ifndef _4422352315_07_H
#define _4422352315_07_H
/* params start */
# define PB_N 9
# define PB_M 9
# define PB_L 8
# define PB_P 9
# define PB_Q 9
/* params end */
# define xA PB_M
# define yA PB_L
# define xB PB_M
# define yB PB_L
# define zB PB_P
# define xC PB_N
# define yC PB_M
# define zC PB_L
# define xE PB_M
# define xF PB_M
# define yF PB_L
# define xG PB_L
# define yG PB_P
# define xH PB_M
# define yH PB_L
# define xI PB_M
# define yI PB_M
# define zI PB_L
# define vI PB_L
# define xJ PB_N
# define yJ PB_M
# define zJ PB_L
# define xK PB_M
# define yK PB_M
# define zK PB_L
# define xL PB_L
# define yL PB_P
# define zL PB_Q
# define xM PB_M
# define yM PB_L
# define zM PB_P
# define vM PB_Q
# define wM PB_Q
# define xN PB_M
# define yN PB_M
# define zN PB_L
# define vN PB_P
# define xO PB_M
# define yO PB_P
# define zO PB_Q
# define vO PB_Q
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

