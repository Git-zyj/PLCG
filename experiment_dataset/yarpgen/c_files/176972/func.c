/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176972
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
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) var_15))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [12LL] [i_2] [i_2] = arr_1 [i_0];
                    arr_10 [i_2] [i_1 - 2] [i_1] [i_2 - 1] = ((/* implicit */unsigned short) arr_8 [i_2 + 1] [i_2] [i_2]);
                }
            } 
        } 
    } 
    var_18 |= ((/* implicit */unsigned short) var_15);
}
