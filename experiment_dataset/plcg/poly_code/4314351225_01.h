#ifndef _4314351225_01_H
#define _4314351225_01_H
/* params start */
# define PB_N 8
# define PB_M 8
# define PB_L 9
# define PB_P 8
# define PB_Q 9
/* params end */
# define xA PB_L
# define xB PB_M
# define yB PB_M
# define xC PB_M
# define yC PB_L
# define zC PB_Q
# define vC PB_Q
# define xD PB_M
# define yD PB_L
# define xE PB_M
# define yE PB_L
# define zE PB_P
# define xF PB_L
# define yF PB_Q
# define xG PB_M
# define yG PB_L
# define xH PB_M
# define yH PB_P
# define zH PB_Q
# define xI PB_M
# define yI PB_L
# define zI PB_P
# define xJ PB_M
# define yJ PB_P
# define zJ PB_Q
# define vJ PB_Q
# define xK PB_N
# define yK PB_M
# define zK PB_L
# define vK PB_P
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

