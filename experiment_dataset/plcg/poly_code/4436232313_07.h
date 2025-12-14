#ifndef _4436232313_07_H
#define _4436232313_07_H
/* params start */
# define PB_N 9
# define PB_M 8
# define PB_L 10
# define PB_P 9
# define PB_Q 8
/* params end */
# define xA PB_M
# define yA PB_L
# define xB PB_M
# define yB PB_L
# define zB PB_Q
# define xC PB_L
# define yC PB_L
# define zC PB_P
# define vC PB_Q
# define xD PB_L
# define xE PB_N
# define yE PB_M
# define zE PB_L
# define xF PB_L
# define yF PB_P
# define zF PB_Q
# define xG PB_M
# define yG PB_L
# define xH PB_L
# define yH PB_P
# define xI PB_L
# define xJ PB_L
# define yJ PB_P
# define zJ PB_P
# define vJ PB_Q
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

