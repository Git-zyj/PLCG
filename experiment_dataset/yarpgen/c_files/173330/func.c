/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173330
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
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */long long int) arr_4 [(signed char)2] [i_0] [i_1]);
                arr_6 [i_0] [i_1] = ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 8761450417311833785ULL)))))) >= (max((var_9), (((/* implicit */unsigned long long int) var_16)))))), (((0) <= (((/* implicit */int) (short)29802))))));
                arr_7 [i_1] = ((/* implicit */short) arr_3 [i_0] [i_1] [i_1]);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_8);
}
