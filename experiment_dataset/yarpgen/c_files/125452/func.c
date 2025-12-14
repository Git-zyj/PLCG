/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125452
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
    for (unsigned short i_0 = 2; i_0 < 6; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_1] [i_0 - 1] [i_0 + 2])) && (((/* implicit */_Bool) arr_3 [i_1] [i_0 - 1] [i_0 + 2]))))), (((unsigned short) ((arr_4 [i_0]) && (((/* implicit */_Bool) var_12)))))));
                var_13 = ((/* implicit */signed char) min((var_3), (var_0)));
                arr_6 [6U] [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) var_6)) / (var_8))), (((/* implicit */unsigned long long int) arr_1 [i_1 - 1] [i_1 - 3])))))));
                var_14 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) var_2)) * (((/* implicit */int) arr_4 [i_0 + 1]))))) ^ ((+(((arr_3 [i_1] [i_1] [(_Bool)1]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0])))))))));
                var_15 = var_0;
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) var_9);
    var_17 = var_12;
}
