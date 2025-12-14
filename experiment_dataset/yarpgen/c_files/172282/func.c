/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172282
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
    var_10 = ((/* implicit */signed char) 15872U);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) min((arr_1 [i_2 - 1] [i_2 - 1]), (((/* implicit */unsigned short) arr_5 [i_0] [i_2 - 1] [i_2]))))) & (((/* implicit */int) arr_5 [i_2] [i_2 + 2] [i_2]))));
                    var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) var_6))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) var_1))));
}
