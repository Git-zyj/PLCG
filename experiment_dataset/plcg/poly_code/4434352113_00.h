#ifndef _4434352113_00_H
#define _4434352113_00_H
/* params start */
# define PB_M 30
# define PB_L 50
# define PB_P 40
# define PB_Q 50
/* params end */
# define xA PB_M
# define xB PB_M
# define yB PB_L
# define zB PB_P
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define xE PB_M
# define xF PB_M
# define xG PB_M
# define yG PB_P
# define zG PB_Q
# define xH PB_M
# define yH PB_P
# define zH PB_Q
# define xI PB_M
# define yI PB_L
# define xJ PB_M
# define yJ PB_L
# define zJ PB_L
# define vJ PB_P
# define xK PB_M
# define yK PB_L
# define zK PB_P
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

