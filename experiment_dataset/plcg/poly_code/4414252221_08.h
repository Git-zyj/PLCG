#ifndef _4414252221_08_H
#define _4414252221_08_H
/* params start */
# define PB_N 9
# define PB_M 10
# define PB_L 10
# define PB_P 10
# define PB_Q 10
/* params end */
# define xA PB_N
# define yA PB_M
# define xB PB_M
# define yB PB_P
# define zB PB_Q
# define vB PB_Q
# define xC PB_M
# define xD PB_M
# define yD PB_P
# define zD PB_Q
# define xE PB_M
# define xF PB_M
# define yF PB_L
# define xG PB_L
# define yG PB_P
# define xH PB_L
# define yH PB_P
# define zH PB_Q
# define vH PB_Q
# define wH PB_Q
# define xI PB_M
# define yI PB_M
# define zI PB_M
# define vI PB_M
# define xJ PB_M
# define yJ PB_L
# define zJ PB_P
# define vJ PB_Q
# define xK PB_M
# define xL PB_M
# define yL PB_L
# define zL PB_L
# define xM PB_M
# define yM PB_L
# define zM PB_P
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

