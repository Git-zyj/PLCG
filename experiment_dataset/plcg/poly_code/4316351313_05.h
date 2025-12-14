#ifndef _4316351313_05_H
#define _4316351313_05_H
/* params start */
# define PB_N 8
# define PB_M 10
# define PB_L 8
# define PB_P 10
# define PB_Q 10
/* params end */
# define xA PB_M
# define yA PB_L
# define xB PB_N
# define yB PB_N
# define zB PB_M
# define vB PB_L
# define xD PB_M
# define yD PB_L
# define xE PB_M
# define yE PB_L
# define zE PB_P
# define xF PB_M
# define yF PB_L
# define xG PB_N
# define yG PB_M
# define zG PB_L
# define vG PB_P
# define xH PB_M
# define yH PB_L
# define zH PB_P
# define xI PB_M
# define yI PB_M
# define zI PB_L
# define vI PB_P
# define xJ PB_M
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

