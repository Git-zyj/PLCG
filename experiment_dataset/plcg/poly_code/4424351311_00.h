#ifndef _4424351311_00_H
#define _4424351311_00_H
/* params start */
# define PB_N 10
# define PB_M 8
# define PB_L 9
# define PB_P 9
# define PB_Q 10
/* params end */
# define xA PB_M
# define yA PB_L
# define xB PB_M
# define yB PB_P
# define zB PB_Q
# define vB PB_Q
# define xC PB_L
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define vD PB_Q
# define xE PB_M
# define yE PB_M
# define xF PB_N
# define yF PB_N
# define xG PB_M
# define yG PB_L
# define xH PB_M
# define yH PB_M
# define zH PB_L
# define vH PB_P
# define xI PB_L
# define yI PB_P
# define zI PB_P
# define vI PB_P
# define xJ PB_L
# define yJ PB_P
# define zJ PB_P
# define vJ PB_Q
# define wJ PB_Q
# define xK PB_N
# define yK PB_M
# define zK PB_L
# define xL PB_M
# define xM PB_N
# define xN PB_N
# define yN PB_M
# define zN PB_L
# define vN PB_P
# define xO PB_M
# define yO PB_L
# define zO PB_L
# define vO PB_P
# define wO PB_P
# define xP PB_M
# define yP PB_L
# define zP PB_L
# define vP PB_L
# define wP PB_Q
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

