#ifndef _3416351323_08_H
#define _3416351323_08_H
/* params start */
# define PB_N 50
# define PB_M 50
# define PB_L 50
# define PB_P 30
# define PB_Q 50
/* params end */
# define xD PB_N
# define yD PB_M
# define xC PB_N
# define yC PB_M
# define xE PB_M
# define xF PB_N
# define yF PB_M
# define xG PB_M
# define yG PB_L
# define xH PB_M
# define xI PB_N
# define yI PB_L
# define xJ PB_M
# define yJ PB_L
# define zJ PB_P
# define xK PB_L
# define yK PB_L
# define zK PB_P
# define xL PB_M
# define yL PB_L
# define zL PB_P
# define xM PB_M
# define yM PB_L
# define zM PB_P
# define vM PB_Q
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

