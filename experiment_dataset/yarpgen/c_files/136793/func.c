/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136793
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
    var_19 = ((/* implicit */long long int) (short)-1395);
    var_20 = ((/* implicit */unsigned char) var_0);
    var_21 = ((/* implicit */short) max((2628187694236406675ULL), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_0)), (((((/* implicit */_Bool) 4071205216U)) ? (((/* implicit */int) (unsigned short)9813)) : (((/* implicit */int) (unsigned short)55727)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned long long int) var_0);
                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_1 + 2])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_2 [i_0 + 1] [i_1 + 1]))))) ? ((~(var_13))) : (((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_1 + 1])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 2] [i_1 + 2])))))));
                var_24 = ((/* implicit */short) (+(((/* implicit */int) var_7))));
            }
        } 
    } 
}
