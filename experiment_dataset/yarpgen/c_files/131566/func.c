/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131566
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
    var_17 = (-(((/* implicit */int) var_7)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (long long int i_2 = 4; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [18LL] [i_0] = ((/* implicit */_Bool) var_6);
                    arr_9 [i_0] [(signed char)0] [i_2] = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) var_5)), (var_15))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_2 - 2] [i_2 - 4] [i_2 + 1])) ? (arr_6 [i_2 - 2] [i_2 - 4] [i_2 + 1]) : (var_14))))));
                }
            } 
        } 
    } 
}
