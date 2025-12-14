/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_17 *= min((arr_7 [i_1]), (max((arr_7 [1]), var_14)));
                var_18 = (min(var_18, (((((var_10 * ((min(var_5, var_7))))) | (((var_10 / var_7) * var_14)))))));
                var_19 = (min(var_19, ((max(((-(var_4 < var_1))), ((var_3 + ((min(var_2, var_11))))))))));
                var_20 |= (((min(var_6, var_12)) | var_3));
            }
        }
    }
    var_21 = (max(var_11, var_5));
    var_22 += var_9;
    #pragma endscop
}
