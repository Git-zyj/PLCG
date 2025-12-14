/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((2456326319999156869 ? -358132113 : ((39 ? 0 : 220))))) ? 2199023255551 : -358132113);
    var_16 = ((-(((((var_13 ? var_0 : 29680))) ? var_10 : var_4))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 2; i_1 < 17;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_0] = 29680;
            arr_7 [i_0] = ((358132111 ? -var_13 : ((8191 ? 321735356 : 358132102))));
            var_17 -= 2140788430;
            var_18 = (18592 >= -var_13);
        }
        for (int i_2 = 2; i_2 < 17;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    {
                        arr_15 [i_0] [i_0] [i_2 - 2] [i_0] [i_0] = ((var_1 + (arr_0 [i_2 - 2])));

                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            var_19 = -321735351;
                            arr_19 [i_4] [i_4] [i_3] [i_4] [i_5] [i_4] [i_5] = (((arr_18 [i_0] [i_2] [i_3] [i_2 - 2] [i_5] [i_5]) ? (arr_16 [i_2] [i_2 - 2] [i_2 - 2] [i_2 + 1] [i_2]) : (arr_16 [i_2] [i_2 + 1] [i_2] [i_2 + 1] [i_2])));
                            var_20 = 1048576;
                        }
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            arr_22 [i_0] [i_2] [i_3] [i_4] [i_6] &= (~var_8);
                            arr_23 [4] [3] [10] [10] [i_6] = arr_18 [i_2 - 1] [5] [i_2 - 1] [i_2] [i_2] [i_2];
                            var_21 += 35856;
                            var_22 = ((-(arr_13 [i_0] [i_3] [i_0])));
                        }
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            arr_28 [i_4] [17] [12] [i_4] [12] [i_4] [i_4] = 1;
                            arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] = (~(arr_9 [i_2 + 1] [i_2 + 1] [i_7]));
                        }
                        arr_30 [i_0] [i_2] [i_3] [i_0] [i_2 - 2] [i_2] = (arr_17 [i_0] [i_2] [i_0] [14]);
                        var_23 -= ((-((1 ? 45866377 : 1048576))));
                    }
                }
            }
            var_24 = 1454499194;
        }
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                {
                    var_25 -= (+-11799880891352970603);
                    arr_37 [i_0] = (arr_33 [i_0] [i_8] [i_0] [i_9]);
                    var_26 *= ((!(arr_18 [3] [3] [3] [i_8 - 1] [i_8] [i_8 + 1])));
                    var_27 -= 2140788427;
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
    {
        var_28 -= (max(((((arr_4 [i_10] [i_10] [i_10]) > (arr_4 [i_10] [i_10] [8])))), 5105254457802443549));
        arr_40 [i_10] = (((!11248101846566457584) ? ((3055938932 ? (arr_0 [i_10]) : ((~(arr_13 [i_10] [i_10] [i_10]))))) : (arr_38 [i_10])));
        var_29 -= (max(74, 1));
        var_30 *= ((max((arr_12 [i_10] [i_10] [i_10]), 1)));
    }
    for (int i_11 = 0; i_11 < 10;i_11 += 1)
    {
        arr_44 [i_11] = ((-((12 ? 2140788430 : (max((arr_38 [i_11]), (arr_26 [i_11] [i_11] [i_11] [i_11] [i_11])))))));
        arr_45 [4] = var_6;
    }
    #pragma endscop
}
