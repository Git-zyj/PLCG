/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188503
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
    var_10 = ((/* implicit */unsigned char) (-(((min((var_9), (((/* implicit */unsigned long long int) var_5)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */short) max((var_6), (((/* implicit */unsigned long long int) var_2))));
                var_11 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) ((arr_3 [(short)8] [(unsigned char)22] [i_0]) / (((/* implicit */int) arr_2 [i_0]))))) && (((/* implicit */_Bool) ((arr_4 [i_0] [i_0]) + (((/* implicit */int) (short)1309))))))));
                var_12 *= ((/* implicit */unsigned int) max((((/* implicit */int) arr_2 [i_1])), ((+(((int) var_2))))));
            }
        } 
    } 
}
