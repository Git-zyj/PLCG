#ifndef _4436352215_05_H
#define _4436352215_05_H
/* params start */
# define PB_N 10
# define PB_M 9
# define PB_L 9
# define PB_P 8
# define PB_Q 8
/* params end */
# define xC PB_M
# define xE PB_M
# define yE PB_L
# define xF PB_L
# define yF PB_P
# define xG PB_N
# define yG PB_N
# define xH PB_M
# define yH PB_L
# define zH PB_P
# define xI PB_L
# define yI PB_P
# define zI PB_Q
# define xJ PB_M
# define xK PB_N
# define xL PB_M
# define xM PB_M
# define yM PB_L
# define zM PB_P
# define vM PB_Q
# define xN PB_M
# define yN PB_L
# define zN PB_P
# define vN PB_P
# define xO PB_M
# define yO PB_P
# define zO PB_Q
# define vO PB_Q
# define xP PB_M
# define yP PB_L
# define zP PB_P
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

