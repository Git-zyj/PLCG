#ifndef _4424351211_01_H
#define _4424351211_01_H
/* params start */
# define PB_N 8
# define PB_M 8
# define PB_L 9
# define PB_P 8
# define PB_Q 9
/* params end */
# define xA PB_L
# define yA PB_P
# define xB PB_M
# define yB PB_M
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define vD PB_Q
# define xE PB_M
# define xF PB_M
# define xG PB_M
# define yG PB_L
# define xH PB_M
# define yH PB_L
# define xI PB_M
# define yI PB_L
# define xJ PB_M
# define yJ PB_P
# define zJ PB_Q
# define vJ PB_Q
# define xK PB_N
# define yK PB_M
# define zK PB_L
# define vK PB_P
# define xL PB_L
# define yL PB_P
# define zL PB_Q
# define xM PB_N
# define yM PB_M
# define zM PB_M
# define xN PB_M
# define yN PB_L
# define zN PB_P
# define vN PB_Q
# define wN PB_Q
# define xO PB_N
# define yO PB_M
# define zO PB_P
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

