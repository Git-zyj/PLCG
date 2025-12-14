/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_12 [10] [i_0] [i_1] [i_3 + 1] = ((~(arr_5 [13] [13])));
                        var_12 = ((65535 ? (arr_5 [i_0 + 3] [i_0 + 1]) : (arr_6 [i_3 + 1] [i_0 - 1] [i_0] [i_0])));

                        for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                        {
                            var_13 = (arr_14 [13]);
                            var_14 = (min(var_14, 0));
                        }
                        for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                        {
                            var_15 = (arr_15 [i_5] [i_0] [8]);
                            var_16 = -65536;
                            var_17 = 18446744073709551615;
                            arr_17 [i_0] [i_0] [i_0] [8] [i_0] = ((!(arr_16 [7] [7] [i_1] [i_1] [i_0 + 1])));
                        }
                        for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                        {
                            var_18 = ((1 ? (arr_16 [i_3] [i_3] [i_3] [i_3 - 1] [i_3 + 1]) : (!0)));
                            var_19 *= (arr_2 [i_0 + 1] [i_1]);
                            var_20 = ((!(arr_16 [i_3 + 1] [i_3 - 1] [12] [i_3 - 1] [i_3])));
                            var_21 += (~3638712236096176846);
                            arr_20 [i_6] [i_0] = 10;
                        }
                        var_22 = (65535 ? 3 : (arr_3 [i_0 + 4] [i_0] [i_2]));
                    }
                }
            }
            var_23 = 4294967273;

            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                var_24 = 4294967295;
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        {
                            arr_29 [i_1] [i_1] [9] [i_0] [i_1] = ((~(arr_8 [i_0] [i_0] [i_0 + 4] [i_0])));
                            var_25 = 26230;
                        }
                    }
                }
                arr_30 [i_0] = (1 ? (arr_11 [i_0 + 1]) : 2147483647);
            }
            var_26 = 0;
        }
        var_27 = -18446744073709551610;
        var_28 *= ((0 ? ((1 ? 65535 : (arr_27 [i_0] [6] [i_0] [10] [10] [6] [10]))) : (~201)));
        /* LoopNest 3 */
        for (int i_10 = 2; i_10 < 14;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 14;i_11 += 1)
            {
                for (int i_12 = 3; i_12 < 14;i_12 += 1)
                {
                    {
                        arr_39 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0] = (~(arr_3 [0] [i_0] [i_12]));
                        var_29 = (max(var_29, (((18446744073709551615 ? (((arr_16 [i_0] [i_0] [i_11 + 2] [9] [i_12 - 2]) ? -65536 : -3638712236096176859)) : 26816)))));
                    }
                }
            }
        }
        var_30 = (min(var_30, 2326179722));
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 25;i_13 += 1)
    {
        var_31 = (!(arr_41 [i_13]));
        var_32 = (!(arr_40 [i_13]));
    }
    for (int i_14 = 1; i_14 < 19;i_14 += 1)
    {
        arr_46 [i_14] = 63;
        var_33 = (max((!4294967295), 1));
        var_34 &= ((-65536 ? ((((!(arr_41 [i_14 + 1]))))) : ((1 ? (!4294967294) : 4294967289))));
    }
    var_35 |= (~36028797018963967);
    var_36 = 1;
    #pragma endscop
}
