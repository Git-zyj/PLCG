#ifndef _4434351121_04_H
#define _4434351121_04_H
/* params start */
# define PB_M 10
# define PB_L 10
# define PB_P 10
# define PB_Q 8
/* params end */
# define xA PB_M
# define xB PB_M
# define yB PB_P
# define zB PB_P
# define vB PB_Q
# define xC PB_M
# define yC PB_L
# define zC PB_P
# define xD PB_M
# define yD PB_L
# define zD PB_Q
# define xE PB_L
# define xF PB_L
# define xG PB_L
# define xH PB_M
# define yH PB_L
# define zH PB_L
# define vH PB_P
# define xI PB_M
# define yI PB_L
# define zI PB_P
# define vI PB_Q
# define xJ PB_M
# define yJ PB_P
# define zJ PB_Q
# define vJ PB_Q
# define xK PB_M
# define yK PB_M
# define zK PB_M
# define xL PB_M
# define yL PB_L
# define zL PB_P
# define xM PB_M
# define yM PB_L
# define xN PB_M
# define yN PB_L
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

