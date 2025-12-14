#ifndef _4424332123_06_H
#define _4424332123_06_H
/* params start */
# define PB_M 40
# define PB_L 50
# define PB_P 50
# define PB_Q 30
/* params end */
# define xA PB_L
# define yA PB_P
# define xB PB_L
# define xC PB_M
# define yC PB_L
# define zC PB_P
# define xE PB_L
# define yE PB_P
# define xF PB_M
# define yF PB_M
# define xG PB_M
# define xH PB_M
# define xI PB_M
# define yI PB_L
# define zI PB_P
# define vI PB_Q
# define xJ PB_M
# define yJ PB_L
# define zJ PB_P
# define xK PB_M
# define yK PB_M
# define zK PB_L
# define xL PB_M
# define yL PB_P
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

