/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, ((min((!var_11), (((((45915 ? var_11 : var_8))) & (arr_3 [6] [i_0] [6]))))))));

                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        var_14 = (min(var_14, ((max((max((var_2 <= 19649), (arr_0 [1] [1]))), ((((((arr_8 [i_0] [i_0]) / 24))) ? (arr_0 [i_0] [i_1 - 2]) : (42 * 119))))))));
                        arr_10 [1] [i_0] [i_2 + 1] [i_3] = var_11;
                        var_15 = (min(var_15, ((max(((143 ? 181627953 : 689448447643565351)), (!309606544597917951))))));
                        var_16 = (8967577 ? 7446530032890876329 : 1);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        arr_14 [i_0] [i_2] [i_0] = (arr_8 [i_4] [i_1 - 2]);
                        var_17 = ((3578599257360332519 ? 1 : 8967587));
                        var_18 = (-8967595 ? (arr_3 [i_1 + 1] [i_1 + 1] [i_0]) : var_2);
                        var_19 ^= ((var_3 ? var_4 : var_9));

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_20 = (min(var_20, ((((arr_17 [i_1] [i_1 - 1] [i_1 - 3] [i_1 - 1] [i_1] [i_1 - 1] [i_1 + 1]) ? (arr_13 [0] [16] [1] [16]) : (arr_4 [i_1 - 3] [i_2 + 2] [i_5]))))));
                            arr_19 [i_0] [14] [i_2] [i_0] [1] [0] [i_5] |= (!var_0);
                        }
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            arr_24 [i_0] [6] [i_2 - 2] [i_6] [6] [i_2 - 2] [i_4] |= ((((((arr_15 [i_4] [18] [i_0]) ? 14749660202698114127 : var_1))) ? (118 || 12288) : -3583));
                            arr_25 [i_0] [i_0] = (((arr_18 [i_6] [i_6] [i_6 - 1] [i_6] [i_6 + 2] [i_6 + 1] [i_0]) > (arr_18 [i_6] [i_6] [i_6 + 2] [i_6 + 1] [i_6 + 1] [i_6 + 2] [i_0])));
                        }
                    }
                    /* vectorizable */
                    for (int i_7 = 3; i_7 < 19;i_7 += 1)
                    {
                        var_21 = ((var_6 ? ((var_9 ? var_10 : (arr_12 [i_0] [i_1 - 2] [i_0] [i_1] [13] [i_0]))) : ((36754 ? 139 : 132))));
                        arr_28 [i_0] [i_0] [i_2] [i_7 + 1] = (arr_2 [i_0]);
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_22 = var_3;
                        var_23 = (arr_1 [i_0]);
                        var_24 = (min((-1975743476 & 28617), var_4));

                        for (int i_9 = 2; i_9 < 20;i_9 += 1)
                        {
                            arr_34 [i_9] [i_8] [i_0] [i_0] [i_1] [8] = (((((97270760 ? 9916 : 495997827))) & var_5));
                            arr_35 [i_0] [i_1 + 1] [14] [9] [i_1 - 3] = (arr_31 [i_1] [i_1] [i_1 - 1] [i_1 + 1] [i_1 - 3] [i_1]);
                            arr_36 [i_0] [12] [i_0] [20] [i_0] &= (min((((arr_4 [i_1] [i_1 + 1] [i_1]) ? (arr_4 [i_1] [i_1 - 2] [14]) : (arr_4 [i_1] [i_1 - 3] [i_1 - 3]))), (~8967586)));
                        }
                    }
                    var_25 = var_3;
                    arr_37 [i_0] [i_0] = -18454;
                }
            }
        }
    }
    var_26 = var_9;
    var_27 -= (((((((var_1 ? var_4 : var_2)) / -var_0))) ? var_0 : var_5));
    #pragma endscop
}
