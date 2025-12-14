/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103769
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
    var_18 = max((((int) (_Bool)1)), (((((/* implicit */_Bool) var_5)) ? ((~(((/* implicit */int) (short)-30403)))) : (((((/* implicit */int) var_4)) / (var_14))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0])), (var_6)))) ? (((arr_0 [i_1]) + (arr_0 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((min((arr_2 [i_0]), (var_8))) <= (((int) arr_3 [i_1] [i_1] [i_0]))))))));
                arr_4 [i_0] [(signed char)18] = max((((((((/* implicit */_Bool) var_17)) ? (arr_0 [i_1]) : (((/* implicit */unsigned int) arr_2 [i_0])))) - (((/* implicit */unsigned int) arr_2 [i_1])))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_9))) <= (((/* implicit */unsigned long long int) ((int) var_10)))))));
                var_20 *= ((/* implicit */short) var_0);
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) (_Bool)1);
}
