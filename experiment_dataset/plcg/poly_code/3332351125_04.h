#ifndef _3332351125_04_H
#define _3332351125_04_H
/* params start */
# define PB_N 50
# define PB_M 40
# define PB_L 30
# define PB_P 30
# define PB_Q 30
/* params end */
# define xA PB_M
# define yA PB_M
# define xC PB_N
# define xD PB_M
# define yD PB_M
# define zD PB_L
# define xE PB_M
# define yE PB_L
# define zE PB_P
# define vE PB_P
# define xF PB_M
# define yF PB_L
# define xG PB_M
# define yG PB_L
# define xH PB_M
# define yH PB_L
# define zH PB_Q
# define xI PB_M
# define xJ PB_L
# define xK PB_M
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

