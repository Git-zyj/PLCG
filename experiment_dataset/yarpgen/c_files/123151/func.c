/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123151
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
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) var_8);
                    arr_8 [i_0] [i_0] [i_1] [i_2] = ((unsigned int) (-(((/* implicit */int) var_8))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)25672))));
}
