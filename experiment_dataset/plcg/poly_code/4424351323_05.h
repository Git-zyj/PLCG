#ifndef _4424351323_05_H
#define _4424351323_05_H
/* params start */
# define PB_M 9
# define PB_L 10
# define PB_P 8
# define PB_Q 9
/* params end */
# define xD PB_M
# define yD PB_M
# define zD PB_L
# define xB PB_M
# define yB PB_L
# define zB PB_P
# define xC PB_M
# define xE PB_M
# define yE PB_P
# define zE PB_P
# define vE PB_Q
# define wE PB_Q
# define xF PB_L
# define yF PB_P
# define zF PB_Q
# define vF PB_Q
# define xG PB_M
# define yG PB_P
# define zG PB_Q
# define vG PB_Q
# define xH PB_M
# define yH PB_L
# define zH PB_P
# define xI PB_M
# define yI PB_L
# define zI PB_P
# define xJ PB_M
# define xK PB_L
# define yK PB_L
# define xL PB_M
# define yL PB_M
# define zL PB_L
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

