/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106314
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
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) min((min((((/* implicit */int) arr_5 [i_2 + 2])), (var_10))), (((((/* implicit */int) var_7)) / (((/* implicit */int) arr_5 [i_0 + 3])))))))));
                    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (~((-(((((/* implicit */_Bool) (signed char)-31)) ? (((/* implicit */int) arr_0 [i_2])) : (arr_4 [i_2] [(signed char)14] [(signed char)2]))))))))));
                    arr_8 [i_0] [i_1 + 1] [i_2] = var_2;
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) ((var_2) < ((-(((/* implicit */int) var_15))))));
}
