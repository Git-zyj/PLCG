#ifndef _3422251111_05_H
#define _3422251111_05_H
/* params start */
# define PB_N 30
# define PB_M 50
# define PB_L 50
# define PB_P 30
# define PB_Q 30
/* params end */
# define xA PB_L
# define yA PB_P
# define zA PB_P
# define xB PB_M
# define xC PB_L
# define yC PB_Q
# define zC PB_Q
# define xD PB_L
# define yD PB_P
# define xE PB_N
# define yE PB_L
# define zE PB_L
# define vE PB_P
# define xF PB_M
# define yF PB_L
# define zF PB_P
# define xG PB_M
# define xH PB_N
# define xI PB_M
# define yI PB_L
# define zI PB_L
# define xJ PB_M
# define yJ PB_L
# define xK PB_M
# define yK PB_M
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

