/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_6, (!var_8)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_13 = (arr_6 [i_2]);
                    var_14 = (arr_0 [i_1]);
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_15 = (arr_9 [i_3]);

        for (int i_4 = 1; i_4 < 9;i_4 += 1)
        {
            var_16 ^= (-1712408904 / -942485743);
            var_17 ^= (arr_11 [i_4 + 1]);
        }
        for (int i_5 = 1; i_5 < 8;i_5 += 1)
        {
            arr_18 [i_5 + 1] [0] [i_5 - 1] = (arr_12 [i_5 - 1] [i_3]);
            var_18 += ((arr_16 [i_5 + 2] [1]) + (arr_16 [i_5 + 2] [1]));
        }
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            var_19 = (max(var_19, (((942485721 ? 1712408911 : -2136355579)))));

            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                arr_24 [i_7] = (((~var_4) || -1737949649));
                var_20 = (min(var_20, (((~(arr_23 [10] [i_7]))))));

                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    var_21 -= var_6;
                    arr_28 [i_3] [i_7] [i_7] [i_8] [i_3] = var_6;
                }
                var_22 = (max(var_22, (((((942485743 & (arr_11 [i_7]))) - ((942485745 ? var_0 : (arr_25 [i_7] [2] [i_3]))))))));
                arr_29 [3] [i_7] [i_3] = ((!(arr_15 [i_3])));
            }
        }
        var_23 -= (arr_26 [i_3] [6] [i_3] [i_3]);
    }
    var_24 = var_10;
    #pragma endscop
}
