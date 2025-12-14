#ifndef _4414252313_00_H
#define _4414252313_00_H
/* params start */
# define PB_N 9
# define PB_M 9
# define PB_L 8
# define PB_P 10
# define PB_Q 10
/* params end */
# define xA PB_M
# define yA PB_M
# define zA PB_L
# define xB PB_N
# define yB PB_N
# define xC PB_L
# define xD PB_N
# define yD PB_M
# define zD PB_L
# define vD PB_P
# define xE PB_M
# define yE PB_L
# define zE PB_P
# define xF PB_L
# define yF PB_L
# define xG PB_L
# define yG PB_L
# define zG PB_P
# define vG PB_Q
# define xH PB_M
# define xI PB_L
# define yI PB_P
# define xJ PB_L
# define xK PB_M
# define yK PB_M
# define zK PB_M
# define vK PB_L
# define wK PB_P
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

