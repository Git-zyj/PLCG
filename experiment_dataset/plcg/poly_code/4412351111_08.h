#ifndef _4412351111_08_H
#define _4412351111_08_H
/* params start */
# define PB_N 8
# define PB_M 8
# define PB_L 8
# define PB_P 10
# define PB_Q 10
/* params end */
# define xA PB_M
# define yA PB_P
# define xB PB_M
# define yB PB_L
# define zB PB_P
# define xC PB_M
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define xE PB_N
# define yE PB_N
# define xF PB_M
# define yF PB_L
# define xG PB_M
# define yG PB_M
# define xH PB_L
# define yH PB_Q
# define zH PB_Q
# define vH PB_Q
# define xI PB_L
# define yI PB_P
# define zI PB_Q
# define vI PB_Q
# define xJ PB_M
# define yJ PB_L
# define zJ PB_P
# define vJ PB_Q
# define xK PB_M
# define xL PB_N
# define xM PB_M
# define xN PB_M
# define yN PB_P
# define zN PB_Q
# define xO PB_M
# define yO PB_L
# define zO PB_P
# define xP PB_M
# define yP PB_M
# define zP PB_L
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

