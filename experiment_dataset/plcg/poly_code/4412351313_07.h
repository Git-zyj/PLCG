#ifndef _4412351313_07_H
#define _4412351313_07_H
/* params start */
# define PB_N 9
# define PB_M 8
# define PB_L 9
# define PB_P 10
# define PB_Q 9
/* params end */
# define xB PB_L
# define xC PB_M
# define yC PB_Q
# define zC PB_Q
# define vC PB_Q
# define xD PB_M
# define yD PB_P
# define zD PB_Q
# define xE PB_L
# define xF PB_M
# define xG PB_M
# define yG PB_L
# define xH PB_M
# define yH PB_L
# define xI PB_M
# define yI PB_P
# define xJ PB_M
# define xK PB_M
# define yK PB_M
# define zK PB_L
# define xL PB_N
# define yL PB_M
# define zL PB_L
# define vL PB_P
# define xM PB_M
# define yM PB_L
# define zM PB_P
# define vM PB_Q
# define xN PB_M
# define yN PB_L
# define zN PB_P
# define xO PB_L
# define yO PB_P
# define zO PB_Q
# define vO PB_Q
# define xP PB_L
# define yP PB_P
# define zP PB_Q
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

