#ifndef _4414351215_04_H
#define _4414351215_04_H
/* params start */
# define PB_N 8
# define PB_M 9
# define PB_L 8
# define PB_P 10
# define PB_Q 9
/* params end */
# define xA PB_L
# define xB PB_M
# define yB PB_L
# define zB PB_Q
# define vB PB_Q
# define xE PB_M
# define xF PB_M
# define xG PB_M
# define yG PB_P
# define zG PB_Q
# define xH PB_M
# define yH PB_L
# define zH PB_P
# define vH PB_Q
# define xI PB_N
# define yI PB_M
# define zI PB_P
# define vI PB_Q
# define wI PB_Q
# define xJ PB_L
# define yJ PB_L
# define zJ PB_P
# define vJ PB_Q
# define xK PB_M
# define xL PB_L
# define yL PB_P
# define xM PB_N
# define yM PB_N
# define xN PB_N
# define yN PB_M
# define xO PB_L
# define yO PB_P
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

