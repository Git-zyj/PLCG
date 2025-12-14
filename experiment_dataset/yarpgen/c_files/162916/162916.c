/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((var_6 ? (max(var_8, var_8)) : (((var_0 ? var_9 : var_0)))))) | (var_3 * var_8)));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [i_0] = 899972317;
            var_11 = ((((var_8 | ((max(var_6, var_9))))) + var_7));
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
            {
                var_12 += (arr_9 [i_0] [i_0] [i_0]);
                var_13 &= (arr_2 [i_0] [5] [i_3]);
                arr_11 [i_0] [22] [7] = ((((arr_8 [i_0] [i_0] [i_0]) / (arr_3 [i_0] [i_0] [i_0]))));
            }
            for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
            {
                var_14 &= max(9922392508040073334, 1);
                var_15 &= var_8;
                var_16 = (arr_10 [4] [i_2] [i_2] [i_4]);
                var_17 = (~1);
                var_18 = var_0;
            }
            arr_15 [7] [14] [9] = ((-((max(1, 1)))));
            var_19 ^= (arr_3 [i_0] [i_0] [i_2]);
            var_20 = ((+(((arr_7 [i_2] [i_0]) & var_2))));
        }
        for (int i_5 = 2; i_5 < 22;i_5 += 1)
        {
            var_21 = (arr_2 [i_0] [i_0] [i_5]);
            var_22 ^= var_4;
            var_23 = (!1);
            arr_19 [i_0] [7] [i_5] = (max((arr_2 [i_5] [i_5 + 2] [i_5 + 1]), var_6));
        }
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            arr_22 [1] [i_6] [i_0] = var_8;
            var_24 = var_7;
            arr_23 [i_0] &= (~-var_9);
            var_25 = ((((max(var_8, ((min(var_9, var_9)))))) ? (((((var_2 ? var_3 : 0))) | (arr_8 [i_0] [4] [i_0]))) : ((((max(var_7, 47411)))))));
            var_26 = ((1 ? 1 : 67));
        }
        arr_24 [i_0] [i_0] = ((3 / (((min(140, (arr_3 [3] [3] [1])))))));
        var_27 = ((-1 ? 8191 : ((max(1, -1087)))));
        arr_25 [i_0] = 249;
    }
    #pragma endscop
}
