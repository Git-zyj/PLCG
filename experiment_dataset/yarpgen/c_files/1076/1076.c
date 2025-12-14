/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_11 > ((var_13 ? (var_6 - var_4) : var_16))));
    var_20 = var_3;

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 12;i_1 += 1) /* same iter space */
        {
            arr_5 [8] [i_1 - 1] = (((arr_3 [11] [i_1]) | (((arr_2 [i_1]) + ((((var_10 || (arr_4 [0] [i_0])))))))));
            var_21 += var_9;
        }
        for (int i_2 = 2; i_2 < 12;i_2 += 1) /* same iter space */
        {
            arr_9 [i_0] [1] = ((((((((arr_8 [i_0 - 1] [i_0 - 1] [i_0]) + (arr_3 [i_0] [i_2]))) & (-976 & 976)))) ? var_4 : ((max((arr_7 [0] [0] [i_2 - 1]), (((arr_3 [i_2] [i_0]) ? -976 : var_9)))))));

            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                var_22 += (min(var_5, -30));
                var_23 = (max(var_23, ((((((((~(arr_3 [i_2 - 1] [i_3])))) ^ var_3)) > (arr_8 [i_0] [i_2] [i_3]))))));
            }
            for (int i_4 = 2; i_4 < 11;i_4 += 1)
            {
                var_24 = (min(var_24, (arr_4 [i_0] [i_2])));
                arr_14 [i_0] [i_0] [12] = ((+(((arr_4 [i_4 - 1] [i_2 + 1]) ? var_10 : (arr_4 [i_4 + 2] [i_2 - 2])))));
                arr_15 [i_0] [i_2] [12] [i_4] &= ((~(arr_0 [1])));
                arr_16 [i_0 - 3] [i_2] [i_4] [i_0] = ((var_10 | ((max(var_12, 18)))));
            }
            var_25 = (((arr_11 [i_2 - 1] [i_0 + 1]) | (min(var_8, (arr_4 [i_2 - 1] [i_0 - 2])))));
        }
        var_26 += ((((((arr_13 [i_0 - 2]) ? 2147483647 : var_3))) ? -7769455005570996877 : var_3));
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        var_27 = (975 | -977);
        var_28 = (min(var_28, (((((((arr_18 [i_5] [2]) != (max(68, (arr_17 [1] [i_5])))))) | (max((arr_17 [i_5] [i_5]), (arr_17 [i_5] [i_5]))))))));
    }
    #pragma endscop
}
