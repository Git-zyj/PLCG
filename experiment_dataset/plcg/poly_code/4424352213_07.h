#ifndef _4424352213_07_H
#define _4424352213_07_H
/* params start */
# define PB_N 10
# define PB_M 8
# define PB_L 10
# define PB_P 8
# define PB_Q 9
/* params end */
# define xA PB_M
# define xB PB_M
# define yB PB_L
# define zB PB_P
# define vB PB_Q
# define xC PB_M
# define yC PB_P
# define zC PB_Q
# define vC PB_Q
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define vD PB_Q
# define xE PB_M
# define xF PB_M
# define xG PB_N
# define yG PB_L
# define xH PB_N
# define xI PB_L
# define yI PB_Q
# define zI PB_Q
# define xJ PB_L
# define yJ PB_P
# define zJ PB_Q
# define xK PB_M
# define yK PB_M
# define zK PB_P
# define vK PB_P
# define xL PB_M
# define yL PB_M
# define zL PB_L
# define vL PB_L
# define xM PB_L
# define yM PB_P
# define xN PB_M
# define yN PB_L
# define zN PB_Q
# define xO PB_M
# define yO PB_L
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

