/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_18 = 594157970;
                    var_19 = ((((((arr_1 [3]) ? (arr_5 [i_1] [i_1]) : ((~(arr_5 [i_0] [i_0 - 1])))))) ? (((arr_6 [i_1 + 1] [i_1] [i_2] [i_0]) ? 54 : (arr_6 [i_1 - 1] [i_1 - 1] [i_2] [i_1 + 1]))) : ((5452873565098161927 ? 253 : 594157970))));
                }

                for (int i_3 = 1; i_3 < 19;i_3 += 1) /* same iter space */
                {
                    var_20 = ((-1998081452 ? (((7964029581312570362 ? (arr_3 [i_1] [i_1 - 1]) : (arr_3 [i_1] [i_1 - 1])))) : -2637640813));
                    var_21 = (max(var_21, (((3137649864 ? 1657326482 : 12993870508611389689)))));
                }
                for (int i_4 = 1; i_4 < 19;i_4 += 1) /* same iter space */
                {

                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {

                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            arr_18 [i_0] [i_1] [i_0 + 1] [i_5] [i_6] = ((!((((arr_3 [i_0 - 1] [i_1]) ? 594157970 : (((arr_5 [i_4] [i_1]) ? (arr_15 [i_6] [i_6] [i_4] [i_6] [i_0]) : (arr_14 [i_0] [i_1] [i_4] [17] [i_5]))))))));
                            var_22 = 5452873565098161926;
                            var_23 = ((!(arr_0 [i_0])));
                            var_24 = 104;
                        }
                        var_25 = var_17;
                    }
                    arr_19 [i_0] [i_1] [i_4] [i_1] = 203;
                }
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    var_26 = (~3083831163);
                    var_27 = (max(var_27, (arr_15 [i_0] [i_1] [i_7] [14] [i_0 + 1])));
                    var_28 &= -104;
                    var_29 = (arr_10 [i_0] [i_0] [15]);
                    arr_22 [i_0] [i_7] = ((((((arr_11 [10] [i_1] [i_0 - 1] [i_1 - 1]) ? (arr_11 [17] [i_1] [i_0 + 1] [i_1 - 1]) : -76))) ? 2943850955716666571 : (arr_14 [18] [i_1] [i_7] [i_0 + 1] [i_0])));
                }
            }
        }
    }
    var_30 = (max(var_30, -3834906405));
    var_31 = var_14;
    var_32 = var_6;
    var_33 = ((((var_0 ? var_11 : 59311))) ? var_5 : var_11);
    #pragma endscop
}
