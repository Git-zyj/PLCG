#ifndef _4434252221_05_H
#define _4434252221_05_H
/* params start */
# define PB_N 10
# define PB_M 9
# define PB_L 8
# define PB_P 8
# define PB_Q 10
/* params end */
# define xA PB_M
# define xB PB_M
# define xC PB_L
# define yC PB_P
# define zC PB_Q
# define vC PB_Q
# define xD PB_N
# define yD PB_M
# define xE PB_N
# define xF PB_L
# define xG PB_N
# define yG PB_M
# define zG PB_L
# define vG PB_P
# define xH PB_L
# define yH PB_L
# define zH PB_Q
# define xI PB_N
# define yI PB_M
# define zI PB_L
# define xJ PB_N
# define yJ PB_N
# define zJ PB_L
# define vJ PB_P
# define xK PB_M
# define yK PB_P
# define xL PB_N
# define yL PB_M
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

