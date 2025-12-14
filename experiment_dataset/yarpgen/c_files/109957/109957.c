/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_2;
    var_19 -= (((((min(71, -71)) ? (max(89, -1)) : -67))));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            var_20 = (max(var_20, (min(var_2, var_16))));
            var_21 = (((arr_3 [i_0] [i_0 + 1] [i_1 + 2]) ? ((((var_0 || (arr_2 [i_0] [3] [9]))) ? (arr_2 [i_1] [i_1 + 1] [i_0]) : (min(var_15, var_17)))) : 1));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_22 = 3907787669005056820;

            for (int i_3 = 2; i_3 < 10;i_3 += 1)
            {
                arr_11 [i_0] [i_3 + 2] [i_3] [i_0] = (((arr_2 [i_0 + 2] [i_3 - 2] [i_3]) > (((arr_8 [i_3] [i_3 + 2] [i_3] [i_3]) ? (arr_8 [i_3] [i_3 - 1] [6] [i_3]) : (arr_3 [0] [i_3 + 1] [i_3])))));
                arr_12 [i_0] [i_0] [i_0] [i_0] = ((((((-81798272518401533 ? -6446621143119883577 : 20517)))) ? var_10 : (((((var_6 ? 20539 : var_17))) ? (((var_0 ? (arr_6 [11]) : (arr_5 [9] [i_3])))) : var_0))));
            }
            arr_13 [i_0 + 1] [i_0 + 1] [i_0] |= (arr_7 [i_0] [i_2] [i_0 - 1]);
        }

        for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
        {
            var_23 = ((max((arr_7 [i_4] [i_4] [i_4]), (arr_7 [5] [i_4] [i_0]))));
            arr_17 [i_0] [i_4] = (min((arr_9 [i_0 + 1]), (((var_13 == (arr_0 [i_0 - 1]))))));
        }
        for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
        {
            var_24 = ((min(((max(108, (arr_7 [i_0] [i_0] [i_0 + 1]))), ((var_16 ? (arr_14 [8] [i_0 + 2]) : var_3))))));
            var_25 = 1;

            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                arr_23 [i_6] &= (max(-8, (max(var_12, (arr_1 [i_5])))));
                arr_24 [i_0 + 1] [i_0 + 1] [i_6] [5] &= ((((var_7 ? (arr_10 [i_5]) : ((max(var_3, (arr_15 [i_6])))))) == (arr_9 [i_5])));
                var_26 ^= (((arr_9 [i_0 - 1]) ? var_1 : -7125));
                var_27 = (max(var_27, ((min(((((arr_8 [7] [i_0 + 2] [i_0] [i_0 - 1]) ? (arr_4 [i_0] [i_0 - 1]) : var_3))), (min(((((arr_22 [i_0 + 1] [i_5] [i_6]) ? 1 : var_6))), -21)))))));
                var_28 = (116 > 81798272518401562);
            }
        }
        arr_25 [i_0 + 2] = ((((max(var_11, (((arr_16 [i_0] [1]) ? (arr_10 [i_0 + 1]) : (arr_10 [i_0])))))) / (max(3907787669005056804, 81798272518401533))));
    }
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 3; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 12;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 3; i_11 < 13;i_11 += 1)
                        {
                            {
                                arr_40 [i_8] = (((max(var_12, ((min((arr_36 [i_7] [i_8] [i_9] [i_7] [i_9]), -655143423))))) > ((min((arr_34 [i_8]), 81798272518401533)))));
                                var_29 = -20520;
                                var_30 = 255;
                            }
                        }
                    }
                    arr_41 [i_7] [i_8] [i_9 + 1] [i_9] &= (min((max(3907787669005056820, 11)), (arr_37 [i_8 - 3] [i_7])));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_12 = 2; i_12 < 12;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 14;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 11;i_14 += 1)
                {
                    {

                        for (int i_15 = 3; i_15 < 13;i_15 += 1)
                        {
                            arr_52 [i_7] [i_15] = (max(1631891622, ((max(-3907787669005056824, (arr_35 [i_14]))))));
                            arr_53 [i_14] [i_15] [i_13] [i_15] [i_7] = ((((((min(var_17, var_12)) | ((((arr_26 [i_15]) ? var_8 : var_3)))))) ? (max(var_1, var_10)) : (arr_32 [1] [i_14] [i_13])));
                        }
                        var_31 = (min(var_31, ((((((((var_1 ? var_15 : var_16)) < (arr_43 [i_7] [1])))) * ((~(var_13 * var_2))))))));
                        var_32 = var_10;
                    }
                }
            }
        }
    }
    #pragma endscop
}
