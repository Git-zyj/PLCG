/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_19 = var_15;
                    arr_7 [i_0] = ((~(min((((arr_1 [i_0]) ? (arr_1 [i_0]) : var_12)), (arr_6 [i_2 + 1] [i_0] [i_0] [i_1 + 1])))));
                    var_20 = ((((max(var_9, (((arr_5 [i_0] [i_0] [i_2] [i_2]) ? var_15 : (arr_3 [i_0] [i_0] [i_2])))))) - ((-((var_18 / (arr_1 [i_0])))))));
                }
            }
        }
    }
    var_21 = (!56705);
    var_22 &= ((((((var_13 ? 0 : var_17)))) ? (((var_17 - (1 - -14601)))) : var_16));
    #pragma endscop
}
