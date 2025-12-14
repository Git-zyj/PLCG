#ifndef _3332351113_05_H
#define _3332351113_05_H
/* params start */
# define PB_N 40
# define PB_M 40
# define PB_L 50
# define PB_P 40
# define PB_Q 40
/* params end */
# define xA PB_M
# define xB PB_M
# define yB PB_L
# define xC PB_M
# define yC PB_L
# define zC PB_P
# define vC PB_Q
# define xD PB_N
# define xE PB_L
# define yE PB_Q
# define zE PB_Q
# define xF PB_M
# define yF PB_L
# define zF PB_P
# define xG PB_M
# define yG PB_L
# define xH PB_M
# define yH PB_L
# define zH PB_Q
# define xI PB_P
# define yI PB_Q
# define zI PB_Q
# define vI PB_Q
# define xJ PB_M
# define yJ PB_L
# define zJ PB_L
# define vJ PB_P
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

