/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~-16);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_21 = (-(min((arr_6 [i_0] [i_1] [i_1] [3]), var_0)));
                    var_22 = (min(var_22, var_5));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        var_23 = (max(var_23, (((arr_10 [i_3]) ? (arr_2 [i_3] [i_3]) : (arr_2 [i_3] [i_3])))));
        arr_12 [i_3] = (((arr_6 [i_3] [i_3] [i_3] [i_3]) || (arr_9 [i_3])));
    }
    /* vectorizable */
    for (int i_4 = 4; i_4 < 22;i_4 += 1)
    {
        arr_17 [i_4] = (~(((arr_13 [i_4] [23]) ^ var_2)));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                {
                    var_24 = var_11;
                    var_25 = (min(var_25, ((~(arr_21 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_4])))));
                    var_26 = arr_23 [i_4] [i_4] [i_4] [i_4];
                    var_27 = arr_22 [13] [i_5];
                }
            }
        }
    }
    var_28 = (min(var_28, -12762162033647160313));
    var_29 = (min(var_29, (min(((var_14 ? (!var_13) : var_6)), ((((!var_15) + (!var_17))))))));
    #pragma endscop
}
