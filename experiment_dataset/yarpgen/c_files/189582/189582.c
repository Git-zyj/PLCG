/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = min((arr_1 [i_0]), -70);
        var_14 ^= (((((arr_0 [i_0] [6]) ? ((-13 ? (arr_0 [i_0] [18]) : (arr_0 [12] [16]))) : (((!(arr_0 [2] [2])))))) < ((29950 ? (arr_1 [10]) : 82))));
        var_15 = (arr_0 [i_0] [i_0]);
        arr_3 [0] |= -54;
    }

    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            arr_9 [i_1] [i_2] = (arr_8 [i_1]);
            var_16 = arr_1 [i_1];
        }
        var_17 = (arr_7 [i_1 - 2] [i_1 - 2]);
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        arr_13 [i_3] = ((!(arr_11 [i_3])));

        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            var_18 = (min(var_18, (((~(((arr_12 [i_4] [i_4]) / (arr_14 [i_4]))))))));

            for (int i_5 = 2; i_5 < 18;i_5 += 1)
            {
                var_19 = 60;
                var_20 = (arr_10 [i_5]);
                var_21 = var_1;
            }
            for (int i_6 = 2; i_6 < 18;i_6 += 1)
            {
                var_22 = (max(var_22, (arr_16 [i_4] [i_6 + 1])));
                arr_22 [i_3] [i_3] [5] = (((-(arr_16 [i_3] [i_3]))));
            }
            for (int i_7 = 3; i_7 < 19;i_7 += 1)
            {
                var_23 -= ((!(((((((arr_14 [i_3]) ? (arr_18 [i_4]) : -81))) ? 81 : (arr_19 [i_4] [i_4] [i_4] [i_4]))))));
                arr_27 [i_3] [3] [1] [i_3] = ((((min((!var_1), (((arr_17 [i_3]) ? (arr_20 [i_3] [i_7 - 2]) : (arr_17 [i_3])))))) ? (arr_25 [i_3] [5] [6]) : (((arr_26 [i_3] [i_3]) ? (arr_26 [i_4] [i_3]) : 2477749440862822483))));
            }
        }
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            arr_32 [i_3] = (arr_29 [i_3] [i_3] [i_3]);
            var_24 = ((!(((((arr_30 [i_8]) ? (arr_26 [i_3] [i_3]) : (arr_20 [i_3] [i_3]))) != var_6))));
            var_25 ^= -var_6;
        }
        var_26 = (arr_30 [i_3]);
    }
    #pragma endscop
}
