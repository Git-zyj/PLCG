/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~(((min(var_6, var_5)))));
    var_17 = ((var_13 ? 5001 : ((~(min(5311532535214854215, var_3))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_18 *= (((arr_1 [i_0]) < ((((arr_3 [0]) == var_14)))));
            arr_4 [i_0] [i_0] = 147;
            var_19 = var_5;
            arr_5 [i_1] = -27682;
        }

        for (int i_2 = 3; i_2 < 12;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                var_20 = (max(var_20, (((!(arr_2 [i_0] [i_2] [i_0 + 2]))))));
                arr_11 [i_0] [i_2] |= (arr_1 [i_0 - 1]);
                arr_12 [i_3 + 1] [i_3 + 1] [i_3 + 2] = ((-(arr_1 [i_2])));
                arr_13 [i_0 + 1] = (((arr_10 [i_2 - 3] [i_3 + 2] [i_3 + 2] [i_3]) * (arr_10 [i_2 - 3] [i_3 + 1] [i_3 + 1] [i_3 + 1])));
            }
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                var_21 = (arr_3 [i_0 + 2]);
                arr_16 [i_0] [i_2] [i_0] [11] = var_0;
                var_22 = ((~(arr_10 [i_0 + 2] [i_2] [i_0 + 2] [i_4 - 1])));
            }
            arr_17 [i_0] [i_2] = ((-(arr_0 [i_2 + 1])));
        }
        arr_18 [i_0] = (arr_7 [i_0 + 2]);
    }
    #pragma endscop
}
