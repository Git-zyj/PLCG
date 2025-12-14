#ifndef _3436332123_05_H
#define _3436332123_05_H
/* params start */
# define PB_N 50
# define PB_M 50
# define PB_L 50
# define PB_P 40
# define PB_Q 50
/* params end */
# define xA PB_L
# define yA PB_P
# define xC PB_N
# define xE PB_M
# define xF PB_N
# define yF PB_M
# define xG PB_L
# define yG PB_P
# define xH PB_M
# define yH PB_L
# define zH PB_Q
# define xI PB_L
# define yI PB_Q
# define zI PB_Q
# define xJ PB_M
# define yJ PB_L
# define zJ PB_L
# define vJ PB_P
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

