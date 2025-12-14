#ifndef _4422331113_07_H
#define _4422331113_07_H
/* params start */
# define PB_N 10
# define PB_M 8
# define PB_L 9
# define PB_P 9
# define PB_Q 9
/* params end */
# define xA PB_L
# define yA PB_P
# define zA PB_Q
# define xB PB_M
# define yB PB_P
# define xC PB_L
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define vD PB_P
# define xE PB_N
# define yE PB_N
# define zE PB_N
# define xF PB_M
# define yF PB_P
# define zF PB_Q
# define xG PB_M
# define yG PB_P
# define zG PB_Q
# define xH PB_M
# define yH PB_L
# define xI PB_M
# define xJ PB_M
# define xK PB_L
# define xL PB_M
# define yL PB_M
# define zL PB_L
# define vL PB_P
# define xM PB_M
# define yM PB_P
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

