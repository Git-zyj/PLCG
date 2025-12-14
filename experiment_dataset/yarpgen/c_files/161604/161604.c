/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= var_11;
    var_15 = (((var_12 < (((var_4 ? var_5 : var_6))))));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {

            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                var_16 = (~(arr_6 [i_0 - 2] [i_0 + 2] [i_2 + 2] [i_2 - 2]));
                var_17 = 189;
                var_18 |= ((112 << ((((((-(arr_3 [i_0] [i_1] [i_0]))) + 2014446446)) - 17))));
            }
            for (int i_3 = 1; i_3 < 13;i_3 += 1)
            {
                var_19 = (arr_8 [8] [i_1] [9]);
                var_20 = ((-112 + 2147483647) >> (var_5 != 112));
            }
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                arr_12 [i_0 + 2] [i_4] [i_4] = (((arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 1]) * (arr_8 [i_0 + 2] [i_0 - 2] [i_0 - 1])));
                var_21 = (min(var_21, (arr_1 [i_0 - 2])));
                var_22 = (!var_9);
            }
            var_23 = (min(var_23, (((var_9 <= (arr_9 [i_0] [i_0 - 1] [i_0] [0]))))));
        }
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            arr_17 [i_0] [i_5] = var_13;
            var_24 = (min(var_24, ((((arr_1 [10]) % (((arr_1 [i_5]) + (arr_1 [i_5]))))))));
            arr_18 [i_0] [i_0] [i_5] |= (arr_9 [i_0 + 1] [i_0 - 2] [i_0] [i_0 + 2]);
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            var_25 |= (((arr_4 [i_0]) * ((-(arr_11 [9])))));
            arr_21 [1] |= -18;
        }
        for (int i_7 = 3; i_7 < 12;i_7 += 1)
        {
            arr_26 [10] [10] |= (((var_2 ^ var_2) ^ ((var_9 ? var_3 : (~-2083464731929670768)))));
            var_26 = (max(var_26, ((((~var_5) ? (max((arr_9 [i_0 + 2] [i_7 + 2] [7] [i_7 - 3]), var_7)) : var_6)))));
            arr_27 [i_7] [i_0] [i_7] = var_5;
        }
        arr_28 [i_0 - 1] = var_0;
    }
    var_27 = var_12;
    #pragma endscop
}
