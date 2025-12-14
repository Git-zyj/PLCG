/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [21] [i_0] = (((arr_0 [i_0] [i_0]) - (-7255240705636039822 * 1)));
        var_20 ^= (arr_0 [i_0] [i_0]);
        arr_3 [i_0] = -4;
        arr_4 [i_0] = 126;
        var_21 = ((126 ? 243 : (arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    {
                        var_22 = ((~(((arr_5 [i_1]) ? ((((arr_0 [i_1] [i_4]) == 2))) : 4095))));
                        var_23 |= (((arr_0 [i_4] [i_3]) ? ((min((arr_0 [i_1] [i_4]), (arr_0 [i_1] [i_2])))) : (arr_0 [i_1] [i_3])));

                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            arr_16 [i_2] [i_2] [i_3] [i_4] [i_5] = 4159847901;
                            var_24 ^= ((((max(29, (arr_13 [i_4] [i_2] [i_3] [i_4])))) > ((((arr_13 [i_1] [i_2] [i_2] [5]) == (arr_13 [i_1] [i_3] [i_4] [i_5]))))));
                        }
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_25 = -14202;
                            arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = (arr_18 [i_3] [i_4]);
                        }
                        arr_20 [i_1] [i_2] [i_1] [i_4] = (~8488091821350643284);
                    }
                }
            }
        }
        arr_21 [i_1] = (56559 < 40589);
        arr_22 [i_1] = (((arr_12 [i_1] [i_1]) ? 238 : ((var_14 + (arr_12 [i_1] [i_1])))));
        arr_23 [i_1] [i_1] &= ((min(214, var_9)));
        arr_24 [i_1] = (max((65535 << 1), (~88)));
    }

    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        arr_28 [i_7] [i_7] = (min(((min(65535, (arr_27 [i_7] [i_7])))), ((42192 ? (arr_10 [2]) : var_16))));
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 11;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    {
                        arr_37 [i_8] = (max(((min((arr_11 [i_7] [i_9 - 1] [i_9 - 1]), (arr_11 [i_8] [i_9 + 1] [i_9 + 1])))), (((arr_11 [i_7] [i_9 + 1] [i_9 - 1]) * (arr_11 [i_7] [i_9 + 1] [i_9 + 1])))));
                        var_26 = (((((max(var_1, 1)))) & (42 && 14)));
                    }
                }
            }
        }
        arr_38 [i_7] [i_7] = (max((arr_5 [i_7]), (4072085815 != 0)));
        arr_39 [i_7] = ((27 ? 398648568 : 1023));
    }
    var_27 = 2065716535;
    var_28 = (max(((6 ? ((min(var_2, var_12))) : var_13)), (~3)));
    #pragma endscop
}
