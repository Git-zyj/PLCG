/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107434
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
    var_18 &= ((/* implicit */int) var_1);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 4; i_1 < 9; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 7; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) max(((short)18036), (((/* implicit */short) (unsigned char)157))));
                    arr_7 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */short) arr_3 [i_1]);
                }
            } 
        } 
    } 
    var_20 -= ((/* implicit */unsigned char) var_3);
}
