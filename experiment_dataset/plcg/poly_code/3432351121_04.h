#ifndef _3432351121_04_H
#define _3432351121_04_H
/* params start */
# define PB_N 40
# define PB_M 40
# define PB_L 50
# define PB_P 50
# define PB_Q 50
/* params end */
# define xA PB_M
# define yA PB_L
# define zA PB_P
# define xB PB_L
# define xC PB_M
# define xD PB_N
# define yD PB_M
# define zD PB_L
# define xE PB_M
# define yE PB_L
# define zE PB_L
# define xF PB_M
# define yF PB_P
# define zF PB_Q
# define xG PB_M
# define yG PB_P
# define xH PB_M
# define xI PB_L
# define xJ PB_M
# define yJ PB_L
# define xK PB_L
# define xL PB_M
# define yL PB_M
# define zL PB_M
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

