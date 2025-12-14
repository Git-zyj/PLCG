#ifndef _3316252325_05_H
#define _3316252325_05_H
/* params start */
# define PB_N 50
# define PB_M 40
# define PB_L 30
# define PB_P 50
# define PB_Q 30
/* params end */
# define xA PB_M
# define yA PB_P
# define zA PB_Q
# define xB PB_N
# define xC PB_M
# define yC PB_L
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define xE PB_M
# define yE PB_P
# define xF PB_M
# define xG PB_M
# define yG PB_L
# define xH PB_M
# define yH PB_L
# define zH PB_P
# define vH PB_Q
# define xI PB_M
# define yI PB_M
# define zI PB_L
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

