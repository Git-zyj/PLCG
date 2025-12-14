/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] = var_2;
                    var_17 = 3767841719882038565;
                }
            }
        }

        for (int i_3 = 2; i_3 < 8;i_3 += 1)
        {
            var_18 = ((374629688175362945 ^ (0 - 255)));
            arr_11 [i_0 + 4] [i_0 + 4] [i_0 + 4] |= 374629688175362945;
            var_19 = ((-((var_6 ? var_11 : (arr_4 [i_0 + 4])))));
            var_20 += 4294967276;
            var_21 = (max(var_21, (arr_6 [i_0] [i_0] [i_3 + 2])));
        }
        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            var_22 = ((~(((arr_13 [i_0]) / var_5))));

            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                var_23 = ((!((((arr_0 [i_4]) ^ 1481345379)))));
                var_24 = (min(var_24, (!var_14)));
                var_25 = 175;
            }
        }
        var_26 = 1481345379;

        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            arr_21 [i_0] [i_0] [i_6] = ((((((arr_10 [i_0] [i_6]) ? var_2 : var_11))) ^ var_12));
            arr_22 [i_6] = 64;
            var_27 = var_7;
        }
        for (int i_7 = 3; i_7 < 8;i_7 += 1)
        {
            var_28 = (arr_5 [i_0 + 3] [i_0 + 3] [i_7]);

            for (int i_8 = 1; i_8 < 9;i_8 += 1)
            {
                var_29 &= ((arr_19 [i_8 - 1] [i_8] [i_8]) - (4294967284 + var_4));
                var_30 = 36011204832919552;
            }
        }
    }
    var_31 = (((((max(var_16, 2712013652)))) ? ((var_2 ? (((max(-77, var_11)))) : (~36011204832919553))) : ((max(((var_10 ? 22860 : 0)), 1481345379)))));
    #pragma endscop
}
