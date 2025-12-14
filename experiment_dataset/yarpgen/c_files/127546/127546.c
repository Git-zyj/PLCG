/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((min(var_3, ((var_12 ? var_2 : var_14)))), ((((!6440284382335930350) ? var_10 : var_4)))));
    var_20 = (max(var_20, (((var_3 ? 32 : (min((~59), var_0)))))));
    var_21 = (((var_13 ? var_3 : ((var_3 ? var_15 : var_17)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_22 = arr_4 [i_0] [17] [17];
                    arr_8 [i_0] [i_2] [i_2 + 4] = arr_3 [i_1];
                }
            }
        }

        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            arr_12 [i_0] [i_3] = (arr_7 [i_0]);
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        arr_18 [i_3] [i_3] [i_3] [12] [12] = ((((18002639133731025714 || (arr_2 [i_0]))) ? var_11 : var_14));
                        var_23 &= (arr_4 [i_0] [i_4] [i_0]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
