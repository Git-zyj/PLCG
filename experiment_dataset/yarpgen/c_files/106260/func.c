/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106260
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
    for (signed char i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_1 - 2])) <= (arr_3 [i_0])))), (max((var_7), (((/* implicit */unsigned long long int) arr_1 [i_0])))))), (((/* implicit */unsigned long long int) max((max((arr_1 [i_1 - 2]), (arr_1 [i_0]))), (((/* implicit */unsigned short) var_0)))))));
                var_11 = max((((/* implicit */int) (!(((/* implicit */_Bool) max((arr_3 [i_0]), (((/* implicit */int) arr_1 [i_0])))))))), (((((/* implicit */int) arr_1 [i_1 - 3])) - (((/* implicit */int) ((_Bool) var_1))))));
                var_12 = ((((/* implicit */int) ((_Bool) arr_0 [i_0 - 2] [i_0]))) ^ (max(((+(arr_5 [i_0] [4] [i_1 - 1]))), (arr_0 [i_1 + 1] [i_0 - 1]))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) max((((/* implicit */int) var_10)), ((+(((int) var_4))))));
    var_14 = ((((var_1) + (2147483647))) << (((((/* implicit */int) max((var_5), (((/* implicit */unsigned short) max((var_8), (((/* implicit */short) var_9)))))))) - (15884))));
}
