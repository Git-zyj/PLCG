/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124938
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
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((var_11) / (var_8))))));
    var_17 = ((/* implicit */unsigned long long int) var_1);
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */signed char) min((((long long int) arr_7 [i_0 - 1] [i_1] [i_2])), ((+(arr_6 [i_0] [i_2] [i_1 + 1] [i_0])))));
                    var_19 = ((/* implicit */short) max((min((max((((/* implicit */long long int) var_13)), (arr_6 [i_0] [i_1 + 2] [i_0] [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_4 [i_2] [i_1] [i_1 + 2] [i_0])) : (((/* implicit */int) arr_3 [i_0]))))))), (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_0])))))));
                }
            } 
        } 
    } 
    var_20 = max((((/* implicit */long long int) var_13)), (((((var_10) / (((/* implicit */long long int) ((/* implicit */int) var_2))))) % (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_6))))));
}
