/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109983
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
    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) var_5))));
    var_16 *= ((/* implicit */unsigned char) min((((/* implicit */int) var_2)), (var_3)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */int) ((unsigned int) arr_0 [i_0]));
                arr_5 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (_Bool)1)), ((~(((arr_2 [i_0]) >> (((arr_1 [i_1] [i_0]) - (1619723918U)))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) (_Bool)1))) > (min((((((/* implicit */int) var_11)) ^ (var_3))), (((/* implicit */int) var_6)))))))));
}
