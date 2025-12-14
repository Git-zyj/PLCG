/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127915
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_2] = ((/* implicit */unsigned int) ((231501945) / (-231501945)));
                    arr_7 [i_0] [i_2] [(short)8] [(short)8] = ((/* implicit */int) arr_5 [i_2] [i_2]);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */int) var_14);
}
