/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177402
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_3), (((/* implicit */long long int) var_4))))) ? ((~(((/* implicit */int) var_2)))) : (((/* implicit */int) var_4))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) arr_1 [i_1])))))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+((-(arr_3 [i_1])))));
                arr_6 [(signed char)5] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)20343)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (9223372036854775807LL)));
            }
        } 
    } 
    var_12 *= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) -72641215))))) ? (((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)139)))) : (((/* implicit */int) min((var_1), (var_8))))))));
}
