/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_1;

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_21 = ((((arr_4 [i_0]) ? (((arr_4 [i_1]) ? 1 : var_10)) : (arr_0 [4]))));
            var_22 = ((((2265965141 && (arr_2 [i_0 + 1] [i_0 + 1] [i_1]))) ? (arr_3 [i_1] [i_0]) : (14033295224519122833 <= var_14)));
            arr_6 [i_0 + 1] [i_0 + 1] |= var_11;
        }

        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            arr_10 [i_2] = var_15;

            /* vectorizable */
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                arr_13 [i_3] [i_2] [i_2] [i_3] = ((227 ? (arr_5 [i_3]) : (arr_4 [i_0])));
                var_23 = (((arr_12 [i_0 + 1] [i_0 + 1] [i_2 + 1]) ? (arr_2 [i_0] [i_2 + 1] [i_2 + 1]) : var_7));
                var_24 ^= (((arr_12 [i_0] [i_0] [14]) << (((arr_12 [i_3] [i_3] [i_3]) - 2350049769))));
                arr_14 [i_2] [2] [i_2] [5] = (var_1 * 14563729231863325703);
            }
        }
        var_25 = (max(var_25, 48));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        arr_17 [i_4] [i_4] = ((var_11 < (arr_3 [i_4] [i_4])));
        arr_18 [i_4] = (var_0 ? (arr_12 [i_4] [i_4] [i_4]) : (arr_12 [4] [i_4] [i_4]));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 9;i_6 += 1)
            {
                {
                    arr_23 [i_4] [i_4] = ((((~(arr_9 [i_5]))) >> (((arr_11 [i_4] [i_4] [10]) + 8007))));
                    arr_24 [7] [i_5] [3] = (((arr_8 [i_6 - 1]) ? (arr_8 [i_6 - 4]) : (arr_8 [i_6 - 4])));
                    arr_25 [i_4] [i_5] [i_6] = (((arr_20 [i_6 + 1] [i_6 - 3] [i_6 + 1]) ? var_17 : (arr_5 [i_6 + 2])));
                    var_26 = (1 > 14563729231863325703);
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        arr_28 [i_7] [i_7] = (((((arr_1 [i_7] [i_7]) ? -5350 : (arr_9 [20]))) > (arr_12 [i_7] [i_7] [13])));

        /* vectorizable */
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            var_27 = (max(var_27, ((((var_7 ? var_14 : -1))))));
            var_28 = (min(var_28, (arr_8 [i_7])));
        }
        var_29 = (min(var_29, (arr_30 [i_7] [4])));
        var_30 = var_2;
    }
    #pragma endscop
}
