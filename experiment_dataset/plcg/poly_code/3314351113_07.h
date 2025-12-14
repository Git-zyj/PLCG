#ifndef _3314351113_07_H
#define _3314351113_07_H
/* params start */
# define PB_N 50
# define PB_M 50
# define PB_L 50
# define PB_P 40
# define PB_Q 50
/* params end */
# define xA PB_M
# define yA PB_M
# define xB PB_N
# define xC PB_M
# define yC PB_L
# define zC PB_L
# define xD PB_M
# define yD PB_P
# define xE PB_N
# define yE PB_M
# define xF PB_M
# define xG PB_L
# define xH PB_M
# define xI PB_N
# define yI PB_M
# define zI PB_L
# define xJ PB_M
# define yJ PB_L
# define zJ PB_Q
# define xK PB_M
# define yK PB_L
# define zK PB_L
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

