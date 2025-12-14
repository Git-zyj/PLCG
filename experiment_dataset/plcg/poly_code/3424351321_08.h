#ifndef _3424351321_08_H
#define _3424351321_08_H
/* params start */
# define PB_N 40
# define PB_M 50
# define PB_L 30
# define PB_P 50
# define PB_Q 40
/* params end */
# define xA PB_L
# define xB PB_M
# define yB PB_L
# define zB PB_P
# define xC PB_M
# define yC PB_P
# define zC PB_Q
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define xE PB_M
# define xF PB_M
# define xG PB_N
# define yG PB_N
# define zG PB_L
# define xH PB_N
# define yH PB_M
# define zH PB_P
# define xI PB_N
# define yI PB_M
# define zI PB_L
# define xJ PB_M
# define yJ PB_M
# define xK PB_M
# define yK PB_L
# define xL PB_L
# define yL PB_L
# define zL PB_Q
# define vL PB_Q
# define xM PB_M
# define yM PB_L
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

