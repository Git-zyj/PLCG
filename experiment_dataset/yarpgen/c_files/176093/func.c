/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176093
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */short) 836984615);
                var_13 = ((/* implicit */unsigned char) arr_2 [i_1] [i_0]);
                var_14 = ((/* implicit */unsigned int) arr_0 [i_0]);
                var_15 = ((/* implicit */int) min((((/* implicit */long long int) arr_5 [(short)8] [(short)8] [8])), (((((((/* implicit */_Bool) 1069339211082348380LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (5644127652404202904LL))) % (arr_4 [i_1] [i_0] [i_0])))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) var_7);
    var_17 *= ((/* implicit */unsigned long long int) ((((long long int) var_10)) >> (((/* implicit */int) ((((unsigned long long int) var_1)) >= (((/* implicit */unsigned long long int) -1LL)))))));
    var_18 = var_6;
}
