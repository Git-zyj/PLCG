#ifndef _4326352325_07_H
#define _4326352325_07_H
/* params start */
# define PB_N 9
# define PB_M 9
# define PB_L 9
# define PB_P 8
# define PB_Q 8
/* params end */
# define xA PB_L
# define yA PB_L
# define xB PB_M
# define yB PB_L
# define zB PB_P
# define xC PB_N
# define yC PB_L
# define zC PB_P
# define xD PB_L
# define yD PB_P
# define zD PB_Q
# define xE PB_M
# define yE PB_L
# define xF PB_M
# define yF PB_L
# define zF PB_L
# define xG PB_M
# define yG PB_L
# define zG PB_Q
# define xH PB_M
# define yH PB_L
# define zH PB_P
# define vH PB_Q
# define xI PB_L
# define yI PB_P
# define zI PB_Q
# define vI PB_Q
# define xJ PB_M
# define yJ PB_L
# define zJ PB_P
# define vJ PB_Q
# define xK PB_M
# define yK PB_L
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

