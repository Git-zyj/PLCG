/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_19 = (min(var_19, ((((((((var_18 <= (arr_2 [i_0] [i_0]))) && (((var_6 - (arr_2 [i_0] [i_0]))))))) != (~-var_17))))));
        var_20 = var_9;

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_0] = (arr_0 [i_0] [i_1]);
            arr_6 [i_0] = ((+(((arr_4 [i_0] [i_1] [i_1]) >> ((((var_1 ? var_3 : (arr_1 [i_1]))) + 23509))))));
            var_21 = ((((((max(var_11, (arr_4 [i_0] [i_1] [15])))) < var_3)) ? var_5 : var_8));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                var_22 += (arr_8 [1] [i_0] [i_1] [i_0]);

                for (int i_3 = 3; i_3 < 20;i_3 += 1)
                {
                    var_23 = (~var_10);
                    var_24 = (min(var_24, ((((var_8 ? var_11 : var_13))))));
                    var_25 += ((var_10 ? ((var_3 ? var_15 : var_12)) : (arr_2 [i_2] [i_3])));
                }
                for (int i_4 = 4; i_4 < 18;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        arr_17 [i_0] [i_1] [i_1] [i_5] = var_14;
                        arr_18 [i_0] [7] [i_0] [i_0] [i_0] [i_0] [i_0] = ((arr_15 [i_4 + 2] [i_4] [i_4 + 2] [i_4] [17] [i_4 - 1]) & (arr_15 [i_4 + 2] [i_4] [i_4] [i_4] [i_4] [i_4]));
                    }
                    var_26 = var_10;
                }
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    var_27 += (((arr_0 [i_0] [i_0]) * var_6));

                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        var_28 = (max(var_28, var_18));
                        var_29 += (((arr_0 [i_0] [i_0]) - (arr_0 [i_0] [i_2])));
                        var_30 = (max(var_30, (((var_6 ? var_17 : (arr_7 [i_2]))))));
                        var_31 += ((-(arr_10 [i_0] [i_2] [i_6] [7])));
                    }
                    for (int i_8 = 1; i_8 < 19;i_8 += 1)
                    {
                        var_32 += var_14;
                        var_33 = (arr_11 [i_1]);
                    }
                }
            }
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                var_34 = var_6;
                var_35 += var_1;
            }
            var_36 = (max(var_36, (((var_0 ? var_14 : var_16)))));
        }
        for (int i_10 = 4; i_10 < 18;i_10 += 1)
        {
            var_37 = (max(var_37, var_0));
            var_38 += (((arr_2 [i_0] [i_10 - 3]) / (arr_12 [i_0] [i_0] [i_0] [i_10])));
            var_39 = var_9;
        }
        var_40 += var_13;
    }
    var_41 = var_18;
    var_42 = var_9;
    #pragma endscop
}
