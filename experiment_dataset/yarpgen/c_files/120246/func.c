/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120246
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
    var_18 = ((/* implicit */unsigned long long int) ((3303361810U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)50)))));
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) var_4))), (max((var_7), (((/* implicit */int) var_3))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (var_1) : (((/* implicit */long long int) max((var_4), (((/* implicit */unsigned int) var_15))))))) : (((/* implicit */long long int) var_0))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 18; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */signed char) ((arr_1 [i_0]) != (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_2 - 3] [i_2 - 2])) - (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1)))))))));
                    var_21 = ((/* implicit */unsigned short) max((min((-9223372036854775790LL), (((/* implicit */long long int) 66060288)))), (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_2 - 2] [i_1])) >> (((arr_0 [0LL] [i_2 + 1]) + (2889862111876257078LL))))))));
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_4 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2 - 3])))))));
                    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) 415933234U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2 - 3] [i_2 + 2] [i_2 + 1] [i_2 + 1]))) : (9223372036854775803LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) -8995075997883380280LL))) ? ((~(((/* implicit */int) arr_5 [i_1] [i_0] [i_1] [i_0])))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_3))))))))))));
                }
            } 
        } 
    } 
}
