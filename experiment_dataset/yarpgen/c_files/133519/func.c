/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133519
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
    var_13 = ((/* implicit */unsigned long long int) var_3);
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (max((((/* implicit */unsigned long long int) ((var_12) / (((/* implicit */int) var_6))))), ((+(var_10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */short) ((_Bool) min((((var_9) - (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) min((var_3), (var_3)))))));
                var_15 = ((/* implicit */unsigned char) var_9);
                var_16 = ((/* implicit */signed char) ((max((arr_2 [i_0 - 1]), (arr_2 [i_1]))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [15] [i_1 + 3])) ? (arr_1 [i_0 - 1] [i_1 + 1]) : (arr_1 [i_0 - 1] [i_0 - 1])))) : (((unsigned int) min((((/* implicit */unsigned char) var_0)), (arr_3 [i_0 - 1]))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) var_1);
    var_18 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) < (max((((var_1) << (((var_7) - (1208108901))))), (((/* implicit */unsigned long long int) (~(var_12))))))));
}
