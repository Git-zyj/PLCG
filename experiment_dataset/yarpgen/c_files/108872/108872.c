/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_18 = arr_2 [7];
                    arr_10 [i_0] [i_2] = var_11;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_17 [i_4] [i_1] [i_0] [i_1] [i_0] = max(((((min(var_10, var_10))))), (var_7 + var_6));
                                arr_18 [i_0] [i_0] [i_0] [i_3] [10] = (min((arr_9 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1]), (arr_5 [i_0])));
                                arr_19 [7] [i_0] [i_2] [i_2] [10] = ((+((min(252, (min((arr_3 [i_0] [i_1] [i_2]), 252)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = var_11;

    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        arr_22 [i_5] = (max((min(((27 ? (arr_20 [i_5]) : var_4)), var_2)), (max((arr_20 [i_5]), 245))));
        arr_23 [i_5] = var_3;
        arr_24 [i_5] = -508;
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        var_20 = ((((max((arr_5 [i_6]), -5437020774344676596))) ? (max((arr_5 [i_6]), (arr_5 [i_6]))) : (((arr_5 [i_6]) / (arr_5 [i_6])))));
        arr_27 [i_6] [i_6] = (4280892990 ^ 840073006);
    }
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        var_21 += (var_8 | -1107734325705552578);
        var_22 = (max(var_22, 238));

        for (int i_8 = 1; i_8 < 14;i_8 += 1)
        {
            arr_35 [i_8] = min((min(var_15, var_12)), ((min((((12173462937394545936 >= (arr_33 [i_7] [i_8])))), 123))));
            var_23 -= (max((max((arr_20 [i_7]), (((var_16 ? (arr_31 [4] [4] [i_8]) : var_6))))), (arr_31 [6] [6] [6])));
            arr_36 [i_7] [i_8] = max((min((max((arr_21 [i_7]), var_2)), (((5437020774344676599 ? (arr_28 [i_7]) : var_0))))), (arr_30 [i_8] [i_7]));
        }
        arr_37 [i_7] = var_15;
        var_24 = 21;
    }
    for (int i_9 = 0; i_9 < 25;i_9 += 1)
    {

        for (int i_10 = 3; i_10 < 22;i_10 += 1)
        {
            arr_43 [i_10] [i_10] [22] = ((var_16 != (arr_38 [i_10 + 1])));
            arr_44 [i_10] = (((((min((arr_40 [i_10] [i_10] [4]), (arr_41 [i_10])))) ? (12173462937394545921 + var_4) : (!-22201))));
        }
        for (int i_11 = 0; i_11 < 25;i_11 += 1)
        {
            arr_47 [i_9] [i_11] [i_11] = ((!(!4784411550826104429)));
            arr_48 [i_9] [i_9] = ((~((var_12 ? ((18445729300906269400 ? var_16 : var_10)) : (((min(var_17, var_4))))))));
        }
        var_25 *= ((max(var_16, (arr_41 [i_9]))));
    }
    #pragma endscop
}
