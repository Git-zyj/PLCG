#ifndef _4424231111_02_H
#define _4424231111_02_H
/* params start */
# define PB_N 9
# define PB_M 8
# define PB_L 8
# define PB_P 9
# define PB_Q 8
/* params end */
# define xC PB_N
# define xB PB_N
# define yB PB_M
# define xD PB_M
# define yD PB_P
# define zD PB_Q
# define vD PB_Q
# define wD PB_Q
# define xE PB_M
# define yE PB_P
# define xF PB_M
# define yF PB_L
# define xG PB_M
# define xH PB_L
# define xI PB_N
# define yI PB_M
# define zI PB_L
# define vI PB_Q
# define xJ PB_M
# define yJ PB_L
# define zJ PB_P
# define xK PB_N
# define yK PB_M
# define zK PB_L
# define vK PB_P
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

