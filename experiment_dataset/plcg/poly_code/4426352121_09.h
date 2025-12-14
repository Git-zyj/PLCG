#ifndef _4426352121_09_H
#define _4426352121_09_H
/* params start */
# define PB_N 8
# define PB_M 9
# define PB_L 9
# define PB_P 9
# define PB_Q 10
/* params end */
# define xD PB_N
# define yD PB_M
# define xB PB_M
# define yB PB_L
# define zB PB_P
# define vB PB_Q
# define xC PB_N
# define yC PB_M
# define zC PB_M
# define xE PB_L
# define yE PB_L
# define xF PB_M
# define yF PB_L
# define xG PB_N
# define xH PB_N
# define yH PB_M
# define zH PB_M
# define vH PB_M
# define xI PB_M
# define yI PB_L
# define zI PB_P
# define xJ PB_M
# define yJ PB_L
# define zJ PB_P
# define vJ PB_Q
# define xK PB_M
# define yK PB_P
# define zK PB_Q
# define vK PB_Q
# define xL PB_N
# define yL PB_M
# define zL PB_L
# define xM PB_M
# define yM PB_P
# define zM PB_Q
# define xN PB_M
# define xO PB_M
# define yO PB_L
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

