/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_7, (((var_13 ? 1348231632 : 1435692418)))));
    var_21 = var_13;
    var_22 = var_18;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    arr_10 [i_0] [i_2] [i_0] = ((-(max(-3627764807575669959, var_3))));
                    arr_11 [i_0] [i_0] [i_0] = var_12;
                    var_23 ^= (((((1435692411 ? var_8 : var_16))) ? (((max(1435692411, var_8)) | var_14)) : (max(1, var_19))));
                }
                var_24 = (max(var_24, var_3));
                var_25 = (min(var_25, (-var_2 < var_16)));
                arr_12 [i_0] [i_1 - 2] [i_1] = (max(var_4, var_17));
                var_26 += (((var_0 ? 352559291700111304 : var_11)));
            }
        }
    }
    #pragma endscop
}
