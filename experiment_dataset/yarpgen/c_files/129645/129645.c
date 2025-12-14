/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_16 = (((((arr_1 [i_0]) >> (((arr_1 [i_0]) - 32))))) ? var_10 : ((min(((~(arr_2 [6] [6]))), (min((arr_1 [i_0]), (arr_2 [i_0] [i_0])))))));
        arr_3 [i_0] = ((!(arr_1 [i_0])));
    }
    for (int i_1 = 3; i_1 < 21;i_1 += 1)
    {
        arr_7 [i_1] = (min(((min((arr_6 [1] [1]), -var_0))), var_12));
        var_17 = ((-((-var_13 ? var_10 : ((min((arr_4 [i_1] [22]), (arr_6 [i_1 - 1] [i_1 + 3]))))))));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                var_18 ^= var_10;
                arr_15 [i_2] = (~(arr_12 [2] [i_2] [i_2]));
            }
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                var_19 = (((~var_11) & (~var_10)));
                var_20 = ((-(((!(arr_5 [i_2]))))));
            }
            for (int i_6 = 1; i_6 < 19;i_6 += 1)
            {
                var_21 = ((var_13 ? (!var_1) : (arr_4 [i_3] [i_6])));
                var_22 = ((!(((var_1 ? (arr_14 [i_2] [i_3] [2] [i_2]) : var_13)))));
                var_23 = (((((arr_5 [i_2]) ? var_9 : var_12)) | (!var_3)));
                arr_23 [i_3] [i_2] = ((var_7 ^ (arr_11 [1] [i_2] [i_6])));
            }
            var_24 = (max(var_24, (((~(((arr_6 [i_2] [i_2]) << (((arr_4 [i_2] [i_2]) + 7004336609211263921)))))))));
            var_25 = (((((-(arr_4 [14] [i_2 - 2])))) ? var_1 : -var_8));

            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                var_26 = ((-var_9 & ((-(arr_16 [0] [i_3] [i_7] [i_7])))));
                arr_26 [i_2] [i_2] [i_7] = (arr_6 [i_2 + 1] [i_2 + 1]);
            }
            for (int i_8 = 2; i_8 < 21;i_8 += 1)
            {
                arr_30 [i_2 - 2] [i_2] = (((var_12 ^ var_2) ? var_6 : (arr_11 [i_2] [i_2] [7])));
                var_27 |= (((~var_14) ? var_14 : (((arr_28 [i_2] [1]) ? var_12 : (arr_13 [18])))));
            }
            arr_31 [i_2] [i_3] = (((arr_9 [i_2] [i_2]) ^ var_0));
        }
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            var_28 = ((var_14 + (arr_4 [i_9] [i_9])));
            arr_34 [i_2] [i_2] = var_14;
        }
        arr_35 [i_2] = (arr_8 [i_2 + 1] [i_2 - 1]);
        var_29 = (min(var_29, ((var_9 ? var_15 : (arr_33 [i_2] [i_2 - 2])))));
    }
    var_30 ^= ((max((max(var_0, var_12)), var_14)) ^ var_5);
    #pragma endscop
}
