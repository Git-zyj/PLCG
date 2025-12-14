/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_18 ^= ((((var_12 ? (arr_1 [i_1 - 1]) : (arr_1 [i_1 + 2]))) > 1));

                /* vectorizable */
                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] [i_0] = ((-(arr_3 [i_0])));
                    var_19 = ((var_13 && (arr_2 [i_1 + 2])));
                }
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    var_20 = (arr_1 [i_0]);
                    var_21 = min(((27013 ? ((((arr_4 [i_1 + 2] [i_0]) ? 27014 : -93))) : (arr_2 [i_0]))), ((min((arr_1 [i_0]), var_0))));
                }
                arr_12 [10] [i_1] [i_0] = 27003;
                var_22 = (arr_9 [10] [i_1]);
            }
        }
    }
    var_23 = min((((((var_14 ? var_4 : -27014))) ? var_14 : var_3)), ((var_9 ? (((var_3 ? var_13 : 1))) : ((var_0 ? 838912038 : var_14)))));
    #pragma endscop
}
