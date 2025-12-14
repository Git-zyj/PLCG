#ifndef _3326251325_08_H
#define _3326251325_08_H
/* params start */
# define PB_N 50
# define PB_M 50
# define PB_L 50
# define PB_P 40
# define PB_Q 30
/* params end */
# define xA PB_N
# define yA PB_M
# define xB PB_M
# define yB PB_L
# define zB PB_P
# define vB PB_Q
# define xD PB_M
# define yD PB_L
# define xE PB_L
# define yE PB_P
# define xF PB_N
# define xG PB_L
# define xH PB_L
# define yH PB_L
# define zH PB_P
# define xI PB_N
# define yI PB_M
# define zI PB_M
# define xJ PB_L
# define yJ PB_P
# define zJ PB_Q
# define vJ PB_Q
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

