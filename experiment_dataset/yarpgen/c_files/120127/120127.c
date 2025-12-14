/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_16 = (((((max((arr_1 [i_0] [i_1]), var_6)))) << (((13316 < (arr_3 [i_0] [i_0] [12]))))));
                arr_4 [9] [i_1] = (max((arr_0 [i_1]), (max((arr_1 [i_0] [i_1]), ((((arr_1 [13] [i_1]) > var_0)))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {

                        for (int i_6 = 2; i_6 < 14;i_6 += 1)
                        {
                            arr_18 [i_2] [i_3] [i_3] = (((arr_5 [i_2]) ? (arr_5 [i_4]) : (arr_5 [i_2 + 3])));
                            var_17 = (max(var_17, var_6));
                            arr_19 [i_3] [i_3] [0] [11] [i_6] [i_6] [i_6] = (var_8 < 63);
                        }
                        var_18 = (arr_5 [i_2 + 2]);
                        var_19 = ((((var_12 < (arr_16 [i_3] [i_3] [i_4] [i_5] [i_4]))) ? ((13316 ? (arr_13 [i_2] [1] [1] [9] [i_5]) : 3245632132)) : (arr_17 [10] [12] [11] [i_4] [12])));

                        for (int i_7 = 1; i_7 < 13;i_7 += 1)
                        {
                            arr_22 [i_2] [i_3] [i_4] [i_3] [i_7] = var_13;
                            var_20 = (((((arr_6 [i_3]) ? (arr_2 [i_2] [1]) : 3828162283)) < var_13));
                            var_21 = ((arr_16 [i_3] [i_7] [i_7] [i_7 + 1] [i_3]) <= var_0);
                            arr_23 [i_2] [i_3] [i_3] [i_5] [i_2] = (((~(arr_10 [i_7] [i_4]))));
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_22 = (385930999 != 126);
                            var_23 = (arr_9 [i_5]);
                            arr_28 [i_2] [i_3] [i_3] [i_8] [i_3] [i_3] = (arr_14 [i_2] [i_3] [i_3] [i_5]);
                        }
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            arr_31 [i_2] [i_3] = ((0 ? 9223372036854775807 : 65535));
                            arr_32 [i_2] [i_2] [i_2] [1] [0] [i_3] = -57106;
                            var_24 = (min(var_24, 2147483647));
                        }
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_25 = (((((((18446744073709551615 & (arr_29 [i_2] [i_3] [1] [i_4] [i_10])))) ? 1049335140 : 18446744073709551613)) > ((max((min(var_13, 65535)), ((max(22, (arr_34 [i_3] [i_4])))))))));
                        var_26 = ((((min((8429 < 0), (arr_16 [i_3] [12] [i_2] [i_2] [i_3])))) ? (((3245632137 ? 8429 : 3425815270))) : var_4));

                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            var_27 += (max((arr_5 [i_2]), ((((!(arr_16 [i_4] [8] [i_4] [i_4] [i_4])))))));
                            arr_37 [i_3] = var_13;
                            arr_38 [i_3] = (arr_12 [i_3] [i_10]);
                        }
                        for (int i_12 = 0; i_12 < 15;i_12 += 1)
                        {
                            var_28 -= (min(((var_7 ^ (!var_13))), (((!((min(var_9, (arr_9 [i_3])))))))));
                            arr_43 [i_3] [i_10] [i_4] [i_2] [i_3] = (arr_7 [i_4] [i_12]);
                        }
                    }
                    arr_44 [2] [i_3] [i_3] [i_3] = (arr_36 [i_3] [i_4] [i_3] [i_4] [i_4]);
                    var_29 = -1;
                }
            }
        }
    }
    var_30 = (~var_10);
    #pragma endscop
}
