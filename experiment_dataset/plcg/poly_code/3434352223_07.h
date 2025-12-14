#ifndef _3434352223_07_H
#define _3434352223_07_H
/* params start */
# define PB_N 40
# define PB_M 50
# define PB_L 50
# define PB_P 50
# define PB_Q 40
/* params end */
# define xC PB_M
# define xB PB_L
# define yB PB_P
# define zB PB_P
# define vB PB_Q
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define xE PB_M
# define xF PB_L
# define yF PB_P
# define zF PB_P
# define xG PB_M
# define yG PB_L
# define xH PB_M
# define yH PB_M
# define zH PB_L
# define xI PB_M
# define yI PB_M
# define zI PB_L
# define vI PB_P
# define xJ PB_M
# define yJ PB_L
# define zJ PB_P
# define vJ PB_Q
# define xK PB_N
# define xL PB_M
# define yL PB_L
# define zL PB_P
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

