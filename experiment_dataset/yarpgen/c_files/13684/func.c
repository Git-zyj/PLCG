/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13684
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
    var_19 = ((/* implicit */unsigned short) (unsigned char)83);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_8 [(unsigned char)8] [(unsigned char)8] &= ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0 + 3] [i_0] [i_0 - 1]))));
                arr_9 [i_1] [i_1] [i_0 + 1] = ((/* implicit */signed char) (unsigned char)83);
            }
        } 
    } 
}
