#ifndef _4332352321_04_H
#define _4332352321_04_H
/* params start */
# define PB_N 10
# define PB_M 8
# define PB_L 9
# define PB_P 8
# define PB_Q 8
/* params end */
# define xA PB_M
# define yA PB_M
# define xB PB_N
# define yB PB_M
# define zB PB_M
# define xC PB_M
# define yC PB_L
# define zC PB_P
# define vC PB_Q
# define xD PB_L
# define xE PB_M
# define yE PB_L
# define zE PB_P
# define xF PB_M
# define yF PB_M
# define xG PB_L
# define yG PB_P
# define xH PB_M
# define yH PB_L
# define xI PB_L
# define yI PB_Q
# define zI PB_Q
# define xJ PB_M
# define yJ PB_L
# define zJ PB_L
# define xK PB_M
# define yK PB_L
# define zK PB_P
# define vK PB_Q
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

