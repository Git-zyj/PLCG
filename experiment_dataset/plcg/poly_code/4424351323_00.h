#ifndef _4424351323_00_H
#define _4424351323_00_H
/* params start */
# define PB_N 8
# define PB_M 10
# define PB_L 8
# define PB_Q 9
/* params end */
# define xA PB_N
# define xC PB_L
# define yC PB_Q
# define xD PB_M
# define yD PB_L
# define zD PB_Q
# define vD PB_Q
# define xE PB_M
# define xF PB_M
# define xG PB_L
# define xH PB_M
# define yH PB_L
# define xI PB_M
# define yI PB_L
# define xJ PB_N
# define yJ PB_N
# define zJ PB_N
# define vJ PB_M
# define xK PB_N
# define yK PB_M
# define zK PB_L
# define xL PB_M
# define yL PB_M
# define zL PB_L
# define xM PB_L
# define yM PB_Q
# define zM PB_Q
# define vM PB_Q
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

