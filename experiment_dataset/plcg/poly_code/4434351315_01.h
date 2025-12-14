#ifndef _4434351315_01_H
#define _4434351315_01_H
/* params start */
# define PB_N 10
# define PB_M 8
# define PB_L 10
# define PB_P 8
# define PB_Q 9
/* params end */
# define xB PB_M
# define xC PB_M
# define yC PB_L
# define zC PB_P
# define xE PB_M
# define xF PB_M
# define yF PB_P
# define xG PB_M
# define yG PB_L
# define xH PB_L
# define yH PB_P
# define xI PB_N
# define xJ PB_L
# define yJ PB_L
# define zJ PB_P
# define xK PB_M
# define yK PB_M
# define zK PB_L
# define xL PB_M
# define yL PB_L
# define zL PB_L
# define xM PB_M
# define yM PB_P
# define zM PB_Q
# define vM PB_Q
# define xN PB_L
# define yN PB_Q
# define zN PB_Q
# define vN PB_Q
# define xO PB_M
# define yO PB_L
# define zO PB_P
# define vO PB_P
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

