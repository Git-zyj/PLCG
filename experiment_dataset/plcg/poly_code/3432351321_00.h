#ifndef _3432351321_00_H
#define _3432351321_00_H
/* params start */
# define PB_N 40
# define PB_M 50
# define PB_L 30
# define PB_P 50
# define PB_Q 40
/* params end */
# define xA PB_L
# define yA PB_P
# define zA PB_Q
# define xB PB_M
# define yB PB_M
# define xC PB_M
# define xD PB_N
# define xE PB_N
# define yE PB_L
# define zE PB_L
# define xF PB_L
# define yF PB_P
# define zF PB_Q
# define xG PB_M
# define yG PB_P
# define xH PB_L
# define yH PB_P
# define xI PB_M
# define yI PB_L
# define zI PB_P
# define xJ PB_M
# define yJ PB_L
# define xK PB_M
# define xL PB_M
# define xM PB_N
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

