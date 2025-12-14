/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 8219;
    var_13 = (min(var_13, 8219));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_0 [i_0] [i_0]);
        var_14 = (max(var_14, (arr_1 [i_0])));
        arr_3 [i_0] = (arr_0 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] = -1819939302;
        var_15 = (max(var_15, ((((arr_5 [i_1]) * (arr_1 [i_1]))))));

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_16 = (((8219 ? var_10 : -26840)));

            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                var_17 = (max(var_17, -121));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_18 += (((-8219 ? 894503480 : 24576)));
                            arr_18 [10] [i_2] [i_2] [i_4] [i_5] = ((arr_0 [i_1] [i_2]) ? (0 || -9508) : (var_11 || 894503480));
                            var_19 = (min(var_19, (((-(((arr_4 [i_2] [i_2]) ? (arr_12 [i_1] [i_3] [i_4] [i_5]) : 24576)))))));
                            var_20 -= (2129032113 ? 861384200 : 4332139644629691602);
                        }
                    }
                }
            }
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    arr_26 [i_7] [i_7] [14] [i_7] [i_7] = ((arr_14 [i_1] [i_1] [i_1] [i_1] [i_1]) ^ var_6);
                    arr_27 [i_6] [i_1] [i_1] = -759486586;
                    var_21 = ((-117 ? (arr_8 [i_6] [i_7]) : 0));
                }
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    arr_31 [i_1] [i_1] [i_1] [i_1] [i_1] = (((((var_8 ? (arr_8 [i_2] [i_2]) : 4373665650589022915))) ? var_4 : (arr_10 [i_8] [11])));
                    arr_32 [i_1] [i_8] [i_2] = 1;
                    var_22 = (arr_1 [8]);
                }
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    var_23 |= (!-548575979);

                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        arr_41 [i_1] [i_1] [i_6] = 2122172207;
                        var_24 = (min(var_24, (arr_39 [i_1])));
                        arr_42 [i_10] [i_9] [i_9] [i_9] [i_6] [i_2] [i_1] |= (arr_28 [i_9]);
                    }
                    arr_43 [i_9] [i_6] [i_2] [i_1] = ((((((arr_35 [i_1] [i_2] [i_6] [i_6] [i_6]) >> (var_9 + 729048200)))) ? -81 : (((arr_8 [i_1] [i_2]) ? 4373665650589022926 : var_8))));
                    var_25 = (min(var_25, (arr_13 [i_1] [i_1] [i_1])));
                }
                arr_44 [i_1] [i_1] = 161;
                var_26 = 1;
            }
            for (int i_11 = 0; i_11 < 18;i_11 += 1)
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 18;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 18;i_13 += 1)
                    {
                        {
                            arr_52 [i_1] [i_2] [i_11] [i_2] [i_2] [i_12] [i_13] |= (((arr_11 [i_13] [i_2] [i_2]) == 894503477));
                            arr_53 [i_1] [i_1] [i_1] [i_1] [i_13] [i_1] |= 1;
                            var_27 = (min(var_27, 1));
                        }
                    }
                }
                var_28 += ((1 ? (arr_1 [i_11]) : (arr_5 [i_1])));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 18;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 18;i_15 += 1)
                    {
                        {
                            var_29 = (((arr_10 [i_2] [i_11]) ? var_0 : (arr_10 [i_11] [i_2])));
                            arr_58 [i_2] [i_11] [i_11] = 173;
                            var_30 = (max(var_30, (var_3 || var_3)));
                            var_31 = (!3400463836);
                        }
                    }
                }
            }
            var_32 *= ((!(arr_21 [i_1])));

            for (int i_16 = 0; i_16 < 18;i_16 += 1)
            {
                arr_61 [i_1] [13] = -8627131700840952188;
                var_33 = 3400463815;
            }
        }
        for (int i_17 = 0; i_17 < 18;i_17 += 1)
        {
            var_34 = (((26 == 1569079087) ? var_0 : (!var_11)));
            arr_64 [i_1] [i_17] [i_17] = ((~(arr_20 [i_1] [i_1] [i_17])));
        }
        var_35 = (max(var_35, 759486596));
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 12;i_18 += 1)
    {

        for (int i_19 = 0; i_19 < 12;i_19 += 1)
        {
            arr_71 [i_18] [i_18] = 122;
            var_36 = (arr_12 [i_18] [0] [i_18] [i_18]);
        }
        var_37 = (min(var_37, 126));
        arr_72 [i_18] = -103;
    }
    #pragma endscop
}
