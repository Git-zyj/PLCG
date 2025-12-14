/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((!(!0)));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0 + 1] [i_0 - 1] [i_0] = var_7;
                    arr_7 [i_1] = (((var_9 ? -560 : var_9)));
                }
            }
        }
        arr_8 [i_0] [i_0] |= -119;
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 11;i_3 += 1)
    {
        arr_12 [i_3] [i_3] = -119;
        arr_13 [i_3] &= 119;
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        arr_17 [i_4] [i_4] = -17634;

        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            arr_21 [i_4] = ((~((119 ? 11135 : var_11))));

            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                arr_24 [i_6] &= ((!(!var_10)));
                arr_25 [i_4] [18] [i_5] = (var_7 & var_10);
                arr_26 [i_4] [i_5] [i_4] = (~var_12);
            }
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    arr_32 [i_4] [i_4] = (~var_8);
                    arr_33 [i_8] [i_7] [i_7] [i_5] [i_4] [i_4] |= (~119);
                }
                arr_34 [4] [i_5] [i_5] [i_4] = ((0 / (~var_9)));
            }
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                arr_37 [i_4] [i_4] [i_5] [i_4] = 11135;
                arr_38 [i_4] = ((11135 ? var_10 : (~var_1)));
            }
            arr_39 [i_4] = var_4;
        }
    }
    var_15 = -7630984387461336377;
    var_16 |= -119;
    #pragma endscop
}
