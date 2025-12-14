/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 76;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_4 [i_0] [i_1] &= (max((((((~(arr_2 [i_1] [i_0] [i_0])))) ? (((arr_2 [17] [20] [14]) ? (arr_2 [i_0] [7] [19]) : (arr_1 [11] [i_1]))) : (arr_0 [i_0]))), (max((arr_1 [i_0] [i_1]), (-28661 / var_9)))));
            var_20 += (arr_3 [17] [i_1] [i_1]);
            var_21 -= 28660;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            arr_8 [i_0] [i_2] = (~65535);
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    {
                        arr_14 [i_2] [i_2] [8] [i_2] = (((arr_7 [10] [i_2 + 1] [2]) ? -7028237572101755009 : (arr_12 [i_2] [7] [i_2 + 1] [i_2])));
                        arr_15 [i_4] |= (((arr_3 [i_0] [1] [i_3]) ? -35 : 114));

                        for (int i_5 = 2; i_5 < 20;i_5 += 1)
                        {
                            var_22 += (((arr_9 [i_4] [i_2 + 1]) | (arr_9 [i_4] [i_2 + 1])));
                            var_23 = (max(var_23, 28631));
                        }
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            arr_23 [i_2] [i_2] = (arr_16 [i_2]);
                            arr_24 [i_0] [i_2] [i_2] [i_2] [i_6] = (((arr_6 [i_2 + 1] [i_2 + 1] [i_3]) ? (arr_6 [i_2 + 1] [5] [9]) : (arr_6 [i_2 + 1] [i_0] [17])));
                            var_24 = ((~(((arr_1 [i_0] [8]) ? -7028237572101755009 : var_17))));
                        }
                    }
                }
            }
            var_25 = ((((var_4 == (arr_19 [17] [10] [i_2] [i_2] [i_2]))) ? (((arr_0 [3]) & 52133)) : (~var_3)));
            var_26 = (max(var_26, (((~(arr_1 [i_0] [i_0]))))));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 20;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 19;i_9 += 1)
                    {
                        {
                            arr_34 [i_0] [i_2] [i_7] [i_0] [i_2] [i_9] = ((6325164409080479726 << (18446744073709551615 + 53)));
                            var_27 = (max(var_27, (~var_14)));
                            var_28 -= (((arr_22 [i_9 - 1] [i_8 + 1] [i_7] [15] [i_0]) / var_12));
                        }
                    }
                }
            }
        }
        var_29 = (max(var_29, (arr_18 [i_0] [17] [16] [17] [i_0] [i_0])));
        arr_35 [i_0] [i_0] = (((~var_7) ? ((((arr_21 [i_0] [i_0] [0] [i_0] [i_0] [i_0]) ? (-28660 >= 2534194042887977604) : (((arr_5 [i_0] [14]) ^ (arr_28 [4])))))) : (((arr_29 [0]) ? (arr_29 [10]) : (arr_13 [1] [1] [i_0] [1])))));
    }
    #pragma endscop
}
