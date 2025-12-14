#ifndef _4424351325_05_H
#define _4424351325_05_H
/* params start */
# define PB_N 8
# define PB_M 9
# define PB_L 9
# define PB_P 10
# define PB_Q 10
/* params end */
# define xA PB_M
# define yA PB_P
# define zA PB_Q
# define vA PB_Q
# define xB PB_M
# define yB PB_P
# define zB PB_Q
# define xC PB_M
# define xE PB_L
# define yE PB_P
# define zE PB_Q
# define xF PB_L
# define yF PB_P
# define zF PB_Q
# define vF PB_Q
# define xG PB_M
# define yG PB_L
# define zG PB_P
# define vG PB_Q
# define xH PB_M
# define yH PB_M
# define zH PB_L
# define vH PB_Q
# define xI PB_N
# define yI PB_M
# define xJ PB_L
# define yJ PB_P
# define zJ PB_Q
# define xK PB_N
# define yK PB_M
# define xL PB_M
# define yL PB_L
# define zL PB_P
# define xM PB_N
# define yM PB_N
# define xN PB_N
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

