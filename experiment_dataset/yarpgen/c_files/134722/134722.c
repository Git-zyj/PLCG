/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] = (((!4832057251462426771) ? (((((min(126, var_10)) != (10 - var_4))))) : (~-4832057251462426771)));
        var_17 = (+(((arr_0 [i_0] [i_0 + 1]) ? var_8 : (arr_0 [i_0] [i_0 + 1]))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (var_0 ? (arr_3 [i_1]) : (~2147483647));
        /* LoopNest 3 */
        for (int i_2 = 4; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        arr_15 [i_1] [i_1] [i_2 + 1] [15] [i_1] [15] = (arr_13 [i_1] [i_2] [i_3 - 2] [i_3 - 2] [i_3] [i_4]);
                        arr_16 [i_2] = (var_11 + var_6);
                        var_18 = (~var_4);
                    }
                }
            }
        }
        var_19 |= ((!(-11 / 5)));
        arr_17 [i_1] [i_1] = ((var_15 << (((arr_13 [4] [5] [5] [5] [i_1] [5]) - 2716625713141546994))));
        var_20 = -var_1;
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_21 |= ((+((((min((arr_20 [i_5]), (arr_12 [i_5])))) ? (arr_12 [i_5]) : (arr_4 [i_5])))));
        arr_21 [i_5] [i_5] |= ((arr_19 [i_5]) ^ (((((min((arr_14 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]), -10)) <= (~65531))))));
    }
    var_22 = ((var_6 ? var_14 : var_0));
    #pragma endscop
}
