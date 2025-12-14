#ifndef _3136252115_08_H
#define _3136252115_08_H
/* params start */
# define PB_M 40
# define PB_L 40
# define PB_P 50
# define PB_Q 50
/* params end */
# define xA PB_M
# define yA PB_P
# define zA PB_Q
# define xB PB_M
# define yB PB_M
# define zB PB_L
# define xC PB_M
# define yC PB_M
# define xD PB_M
# define yD PB_L
# define xE PB_M
# define yE PB_L
# define zE PB_P
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

