#ifndef _4424332221_00_H
#define _4424332221_00_H
/* params start */
# define PB_N 40
# define PB_M 40
# define PB_L 30
# define PB_P 40
# define PB_Q 50
/* params end */
# define xA PB_M
# define yA PB_L
# define xB PB_N
# define yB PB_M
# define zB PB_L
# define xC PB_M
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define xE PB_M
# define yE PB_M
# define zE PB_L
# define xF PB_M
# define yF PB_L
# define zF PB_Q
# define xG PB_N
# define yG PB_M
# define xH PB_N
# define yH PB_N
# define zH PB_M
# define xI PB_N
# define xJ PB_L
# define yJ PB_L
# define xK PB_M
# define xL PB_M
# define xM PB_M
# define yM PB_P
# define zM PB_Q
# define vM PB_Q
# define xN PB_M
# define yN PB_L
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

