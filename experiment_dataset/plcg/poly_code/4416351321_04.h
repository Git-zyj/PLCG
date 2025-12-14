#ifndef _4416351321_04_H
#define _4416351321_04_H
/* params start */
# define PB_N 10
# define PB_M 9
# define PB_L 8
# define PB_P 9
# define PB_Q 8
/* params end */
# define xA PB_M
# define xC PB_M
# define yC PB_P
# define xD PB_M
# define yD PB_P
# define zD PB_Q
# define vD PB_Q
# define xE PB_N
# define xF PB_M
# define xG PB_M
# define xH PB_M
# define yH PB_P
# define zH PB_Q
# define xI PB_L
# define yI PB_P
# define zI PB_Q
# define vI PB_Q
# define xJ PB_M
# define yJ PB_L
# define zJ PB_P
# define xK PB_L
# define yK PB_P
# define zK PB_Q
# define xL PB_M
# define yL PB_M
# define xM PB_M
# define yM PB_L
# define xN PB_M
# define yN PB_P
# define zN PB_P
# define vN PB_Q
# define xO PB_M
# define yO PB_P
# define zO PB_Q
# define vO PB_Q
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

