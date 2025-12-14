/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11579
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
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */short) (-(((/* implicit */int) arr_1 [i_1] [i_0]))));
                arr_5 [i_0] [i_0] = ((/* implicit */short) (~(min((arr_4 [i_1]), ((~(arr_4 [4U])))))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) var_10);
}
