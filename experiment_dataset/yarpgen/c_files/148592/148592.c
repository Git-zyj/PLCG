/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_10 = ((-(arr_1 [i_0] [i_0])));
        arr_4 [i_0] [i_0] = ((+(((arr_2 [i_0]) ? (arr_3 [i_0] [14]) : (arr_3 [i_0] [i_0])))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_7 [i_1] = (((var_9 ? (((arr_5 [i_1] [i_1] [i_1]) ? (arr_6 [i_0] [i_1] [i_0]) : (arr_5 [i_0] [i_0] [i_1]))) : (var_9 * var_6))));
            var_11 = (min(var_11, ((max(((((min((arr_3 [i_0] [i_1]), (arr_2 [i_0])))) ? ((min(var_7, var_5))) : (arr_6 [i_0] [i_0] [i_0]))), (!245))))));
            arr_8 [i_0] [i_1] = var_0;
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 1; i_3 < 20;i_3 += 1)
            {

                for (int i_4 = 3; i_4 < 21;i_4 += 1)
                {
                    var_12 = ((!(arr_13 [12] [i_3] [i_3 - 1] [i_3])));
                    arr_19 [i_0] [i_3] [14] [i_3] [16] = (((7375309382408781273 ? (arr_10 [i_0] [i_0]) : var_5)) * ((((!(arr_13 [i_3] [i_3] [i_2] [i_3]))))));
                }
                var_13 = (((arr_12 [i_0]) && (((var_7 ? (arr_0 [i_2]) : (arr_1 [i_0] [i_0]))))));
            }
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                var_14 = (max(var_14, ((min((arr_1 [i_0] [13]), ((((!(arr_18 [i_0] [i_2] [i_5] [i_5] [20]))) ? -var_7 : (((arr_1 [i_0] [9]) ? (arr_5 [i_0] [i_0] [i_0]) : var_2)))))))));
                var_15 = ((~(arr_3 [i_0] [i_5])));
            }
            arr_23 [i_2] = (min((max((((arr_14 [i_0] [0] [i_2] [i_2]) ? 7375309382408781284 : var_3)), var_5)), ((((arr_9 [i_0] [i_2] [i_2]) ? (arr_15 [i_0] [i_2]) : (((arr_5 [i_0] [i_0] [i_0]) / var_7)))))));
            var_16 = (min((min((min((arr_10 [i_2] [i_0]), var_5)), (arr_0 [i_0]))), (min((arr_2 [i_0]), (max(var_7, 12489671782081668951))))));
            var_17 = ((var_0 ? ((min(var_3, (arr_13 [6] [i_2] [i_2] [6])))) : var_9));
        }
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        arr_26 [i_6] = (((((min((arr_25 [i_6]), 37)))) - 140));
        arr_27 [i_6] [14] = ((-(((arr_25 [i_6]) | (~var_8)))));
        arr_28 [i_6] [i_6] = (min(((var_8 << (((!(arr_25 [i_6])))))), (max(((var_0 ? var_0 : (arr_24 [i_6]))), (((arr_25 [15]) ? (arr_25 [i_6]) : var_7))))));
    }
    var_18 = (min(var_18, var_4));
    var_19 = var_1;
    var_20 = (7854504024740003136 - 84);
    var_21 = (max(var_21, var_2));
    #pragma endscop
}
