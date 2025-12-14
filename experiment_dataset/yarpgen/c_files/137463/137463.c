/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 -= (((arr_0 [i_0]) << (67108863 - 67108803)));
        var_16 = (~var_4);

        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            var_17 = 15;
            var_18 = (max(var_18, ((!(((var_8 ? 607382262207639522 : 1394977529507989447)))))));
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_8 [i_0] = 0;
            var_19 = 3736271966014361695;
            var_20 -= (((((~(((arr_2 [i_2]) ? -15 : (arr_2 [i_0])))))) ? (27 || -15) : (max(((((arr_2 [i_0]) > 15692353381156252804))), (arr_2 [i_2])))));
        }
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_21 = (min(var_21, (((((max((arr_3 [i_0]), 12))) - ((var_7 ? 133 : 1)))))));
                        arr_18 [i_0] [i_0] [i_4] = min(50, (~2152471889));

                        for (int i_6 = 4; i_6 < 11;i_6 += 1) /* same iter space */
                        {
                            var_22 = (min(var_22, var_11));
                            var_23 = 16;
                            arr_23 [i_0] [i_3] [i_4] [i_5] [i_5] [i_5] [i_6] = (arr_0 [i_5]);
                            var_24 = (min(((min((((!(arr_16 [i_0] [i_0] [i_0] [i_0] [i_0])))), (min(64209, -512499519))))), var_11));
                            var_25 -= (arr_6 [i_4] [i_3] [i_0]);
                        }
                        /* vectorizable */
                        for (int i_7 = 4; i_7 < 11;i_7 += 1) /* same iter space */
                        {
                            var_26 = var_11;
                            arr_26 [i_0] [i_0] [i_0] [i_5] [i_5] [i_7] [i_0] = 102;
                            var_27 = (min(var_27, ((-(arr_5 [i_5] [i_4])))));
                        }
                    }
                }
            }
            var_28 = (((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ^ ((((var_8 || (arr_22 [i_0] [i_0] [i_0] [i_0] [i_3])))))));
        }
        var_29 -= (max(((-715157027423260672 ? var_4 : 236)), (((var_10 ? (arr_5 [2] [2]) : (arr_3 [i_0]))))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 4; i_9 < 10;i_9 += 1)
            {
                {
                    var_30 = (arr_21 [i_9] [i_9 - 2] [i_9 + 3] [i_9 - 4] [i_9 + 1]);
                    /* LoopNest 2 */
                    for (int i_10 = 4; i_10 < 10;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            {
                                var_31 = ((8389213019277327976 ? ((~(arr_14 [i_0]))) : ((min(-715157027423260657, 255)))));
                                arr_40 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 7581649862874833090;
                            }
                        }
                    }
                    var_32 = 25255;
                    arr_41 [i_0] = (min((min((arr_12 [i_8] [1] [i_8]), (((-13 || (arr_7 [i_8] [i_9])))))), 1));
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 16;i_12 += 1)
    {
        arr_45 [i_12] = (arr_43 [i_12]);
        arr_46 [i_12] = (arr_43 [i_12]);
    }
    var_33 = (-1 - 1);
    #pragma endscop
}
