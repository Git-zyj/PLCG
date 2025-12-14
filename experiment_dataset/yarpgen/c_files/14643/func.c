/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14643
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)61001)) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)-48)), ((unsigned short)12153)))) ? (((/* implicit */unsigned long long int) ((long long int) (unsigned short)12153))) : (min((((/* implicit */unsigned long long int) (unsigned short)53382)), (2790747650821181958ULL))))) : (((/* implicit */unsigned long long int) ((var_2) ? (((/* implicit */int) (short)-14660)) : (((/* implicit */int) (unsigned short)53389)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_17 *= ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_6 [i_2])) >> (((((((/* implicit */int) (unsigned short)50796)) + (((/* implicit */int) var_14)))) - (50784)))))));
                    arr_7 [i_0] [i_1] &= ((/* implicit */unsigned char) max((1254165035U), (((/* implicit */unsigned int) (signed char)(-127 - 1)))));
                    var_18 &= ((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)12147)), (981236684U)));
                }
            } 
        } 
    } 
    var_19 = ((((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) (signed char)73)) % (((/* implicit */int) (unsigned short)53401)))) : (((/* implicit */int) var_1)))) >> (((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)48))))) ? (-7321912819524926808LL) : (min((-5600433332306957302LL), (((/* implicit */long long int) (_Bool)1)))))) + (7321912819524926824LL))));
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((unsigned int) (signed char)-48)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)53401)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53389))) : (var_12))))))))));
}
