/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [1] [4] [1] = arr_3 [i_0];

                /* vectorizable */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [i_2] [i_2] = (+((((arr_7 [i_0] [4] [i_1] [i_2]) || 0))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_15 = (min(var_15, (arr_9 [i_0] [i_0] [4] [i_0] [10] [i_4])));
                                var_16 *= (((-127 - 1) ? 16 : 16));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 10;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [i_1] [11] [i_5] [i_6 - 3] = -102;
                                var_17 = (min(var_17, var_6));
                                var_18 = var_13;
                                arr_20 [i_0] [i_1] [i_2] [i_2] [i_5] [i_6] = ((~(!65523)));
                                arr_21 [i_2] [i_1] [i_5] = ((~(((29 || (arr_10 [i_0] [0] [i_5] [i_6]))))));
                            }
                        }
                    }
                    arr_22 [i_0] [i_1] [2] [9] = (((arr_16 [i_0] [4] [i_0] [8] [i_0]) || (arr_16 [i_0] [6] [i_2] [10] [i_0])));
                }
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    arr_26 [i_0] [11] [4] [i_7] = (!1017983008);
                    arr_27 [i_0] [i_1] [i_7] = (max((max(65535, (((-1017983021 + 2147483647) << (29 - 29))))), (min(-259047208, var_9))));
                }
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    arr_30 [i_0] [i_1] = (arr_7 [2] [i_1] [i_1] [i_8]);
                    var_19 = (((arr_1 [i_0]) || 35));
                    arr_31 [i_8] [i_1] [i_0] = (arr_14 [i_0] [7] [i_1] [i_8] [i_8]);
                }
                var_20 = var_14;
                arr_32 [i_0] [i_0] = ((+((((((arr_25 [i_0] [6] [8] [i_0]) ? var_10 : var_12))) % (max((arr_2 [i_0] [i_0] [i_1]), 18446744073709551615))))));
            }
        }
    }
    var_21 = (max(65535, -7));
    #pragma endscop
}
