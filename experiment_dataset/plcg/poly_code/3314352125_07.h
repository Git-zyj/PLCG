#ifndef _3314352125_07_H
#define _3314352125_07_H
/* params start */
# define PB_N 40
# define PB_M 50
# define PB_L 30
# define PB_P 30
# define PB_Q 30
/* params end */
# define xA PB_M
# define yA PB_L
# define xB PB_L
# define yB PB_P
# define zB PB_Q
# define xD PB_N
# define yD PB_L
# define xE PB_N
# define yE PB_M
# define xF PB_N
# define yF PB_L
# define xG PB_N
# define xH PB_N
# define yH PB_M
# define zH PB_L
# define xI PB_M
# define xJ PB_M
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

