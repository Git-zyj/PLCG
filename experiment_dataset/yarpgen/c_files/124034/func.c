/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124034
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
    var_12 = ((/* implicit */signed char) max((var_0), (var_1)));
    var_13 = ((/* implicit */unsigned char) (signed char)-1);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_5 [i_0 + 3] [i_0 + 3] = ((/* implicit */int) arr_2 [(signed char)3]);
                var_14 = ((/* implicit */unsigned char) ((var_10) << (((((/* implicit */int) arr_0 [i_0])) - (173)))));
                var_15 = ((/* implicit */int) arr_3 [(unsigned char)12] [i_1] [i_1]);
                arr_6 [i_0] [i_0] [i_0] &= ((/* implicit */int) arr_1 [i_0 + 2]);
            }
        } 
    } 
}
