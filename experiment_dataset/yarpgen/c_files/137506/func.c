/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137506
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) var_17);
                        var_19 -= ((/* implicit */unsigned short) 204098262U);
                        arr_11 [i_0] [i_0] [i_1] [i_0] = var_6;
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) var_9))));
        arr_12 [i_0] = ((/* implicit */int) arr_0 [i_0]);
    }
    var_21 = ((/* implicit */_Bool) min((var_21), (((_Bool) var_13))));
}
