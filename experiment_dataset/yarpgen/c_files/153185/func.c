/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153185
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */int) var_13);
        var_18 = ((/* implicit */unsigned char) var_9);
        var_19 = ((/* implicit */int) var_6);
        arr_3 [i_0] = ((/* implicit */_Bool) var_9);
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                for (signed char i_3 = 2; i_3 < 23; i_3 += 1) 
                {
                    for (int i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        {
                            arr_17 [i_0] [i_1] [i_2] [i_4] [i_2] [i_0] = ((/* implicit */unsigned short) var_0);
                            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) var_15))));
                            var_21 |= ((/* implicit */_Bool) var_9);
                        }
                    } 
                } 
            } 
            arr_18 [i_0] [i_1] &= ((/* implicit */unsigned int) var_13);
            var_22 = ((/* implicit */int) var_3);
        }
        for (unsigned short i_5 = 3; i_5 < 23; i_5 += 1) 
        {
            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) var_0))));
            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) var_1))));
        }
    }
    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 2) 
    {
        arr_24 [i_6] &= ((/* implicit */int) var_1);
        var_25 = ((/* implicit */long long int) var_6);
    }
    var_26 &= ((/* implicit */unsigned int) var_16);
}
