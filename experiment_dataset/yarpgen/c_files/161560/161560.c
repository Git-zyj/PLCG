/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((max(((max((((var_13 ? var_1 : -1))), (max(var_15, var_19))))), (max(var_7, ((var_1 ? var_16 : var_17)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_21 = (max(var_21, ((((arr_6 [i_0] [i_2] [i_2] [i_1 - 1]) ? (arr_5 [i_2]) : (arr_5 [i_2]))))));
                    var_22 = (arr_6 [i_1 + 1] [i_0] [i_0] [i_1]);
                    arr_8 [i_0] [i_1] [i_0] = (arr_1 [i_0]);
                    arr_9 [i_0] = (((arr_4 [i_1]) ? (arr_5 [i_0]) : -10684));
                }
                var_23 = (max(var_23, var_15));
            }
        }
    }
    var_24 -= -var_12;
    var_25 += var_13;
    #pragma endscop
}
