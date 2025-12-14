#ifndef _4424351313_04_H
#define _4424351313_04_H
/* params start */
# define PB_N 10
# define PB_M 10
# define PB_L 8
# define PB_P 9
# define PB_Q 8
/* params end */
# define xA PB_M
# define yA PB_P
# define zA PB_Q
# define vA PB_Q
# define xB PB_N
# define xD PB_L
# define xE PB_M
# define yE PB_L
# define zE PB_P
# define xF PB_N
# define yF PB_N
# define zF PB_P
# define vF PB_Q
# define xG PB_L
# define yG PB_L
# define zG PB_P
# define vG PB_Q
# define xH PB_L
# define yH PB_P
# define xI PB_M
# define xJ PB_N
# define yJ PB_M
# define xK PB_N
# define yK PB_M
# define zK PB_M
# define xL PB_N
# define yL PB_L
# define xM PB_M
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

