/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_0 >> (1520273467 - 1520273442)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = (arr_3 [i_0]);

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_21 = var_3;

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            var_22 = ((-(arr_0 [i_4])));
                            arr_14 [i_0] [14] [i_0] [i_0] [i_1] = var_0;
                            var_23 = (arr_12 [i_4] [i_1] [i_2] [i_3 - 1] [i_4]);
                            var_24 = 122;
                            var_25 = arr_7 [i_0] [i_1] [i_3 + 1] [i_4];
                        }
                        arr_15 [i_0] [i_1] [i_2] [1] = (arr_2 [i_0] [i_0]);
                        var_26 = 2774693829;
                        var_27 = (min(var_27, 23705));
                        var_28 = ((-126 ? 7136420213325278732 : 7136420213325278736));
                    }
                    var_29 = (max(((136363280 ? var_18 : (arr_8 [i_0] [i_1] [i_2]))), (arr_8 [i_0] [9] [18])));
                }
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    var_30 = min((arr_18 [4]), (((~(arr_5 [i_0] [i_1])))));
                    arr_19 [i_1] [i_1] [i_1] = (max((min((var_6 * var_1), (arr_0 [i_0]))), ((max(((min(var_0, 1))), (((arr_13 [i_0] [9] [0] [i_0] [1]) ? var_9 : 1)))))));
                }

                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    arr_22 [i_0] [i_1] [i_6] = ((~((((((arr_7 [i_0] [i_0] [i_0] [i_0]) ? var_10 : var_14))) ? var_12 : (((~(arr_7 [i_6] [i_6] [i_0] [i_0]))))))));
                    var_31 = (!4158604015);
                    var_32 = (arr_16 [i_6]);
                    var_33 |= var_13;
                    arr_23 [i_1] = ((((((arr_20 [11] [1] [21] [21]) << (arr_2 [i_0] [i_1])))) || ((((arr_4 [i_1]) & (min((arr_0 [i_1]), (arr_5 [i_0] [15]))))))));
                }
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    var_34 = (((arr_5 [i_0] [16]) * (arr_5 [i_0] [i_0])));
                    var_35 = (max(var_35, 12627));
                }
                var_36 = (((((~(arr_0 [16])))) ? (((((((arr_12 [i_0] [i_0] [i_1] [i_0] [i_1]) > var_9))) << (var_19 - 61480)))) : (arr_4 [i_0])));
            }
        }
    }
    var_37 = var_10;
    var_38 = var_7;
    #pragma endscop
}
