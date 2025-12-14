/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_4;

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                arr_8 [i_0] [6] [i_0] [i_0] &= 1;
                var_10 += var_8;
                var_11 = (max(var_11, (((var_8 & (min((var_0 - -63), 65535)))))));
            }
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                var_12 = ((((~((6635419636338696901 & (arr_4 [i_0] [7]))))) & (((min(11811324437370854715, var_2)) & (32527 && 6635419636338696900)))));
                var_13 = (max(var_13, (((var_6 & (((arr_6 [i_0] [i_0 + 1] [i_0 - 3] [10]) & (arr_5 [i_0]))))))));
            }
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                arr_15 [i_4] = (max((((arr_11 [i_0 - 2] [i_1]) & -7231508119230861507)), ((max(-51, var_4)))));
                var_14 = ((var_3 ? (((arr_12 [i_0 - 3] [i_4] [i_4 - 1]) - (((1 ? 1 : var_4))))) : var_6));
                var_15 = (~52);
                var_16 -= 988392362;
            }
            arr_16 [i_0] [i_0 - 1] [i_0] = 1;
        }
        for (int i_5 = 2; i_5 < 12;i_5 += 1)
        {
            var_17 = (((max(240, ((11811324437370854695 | (arr_2 [i_0 - 3])))))) ? var_9 : 12490);

            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                var_18 = (min(var_18, 255));
                var_19 = (((max(var_3, (arr_20 [i_6] [i_5 - 1]))) * ((-36 / (arr_20 [i_6] [i_5 + 1])))));
                arr_22 [i_6] = ((~(((arr_0 [i_0 - 1]) + (arr_21 [i_6] [i_5] [i_0 - 3])))));
                var_20 = var_7;
            }
        }
        var_21 = var_4;

        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            arr_25 [4] = ((((((arr_10 [i_0 + 1]) & (arr_10 [i_0 - 1])))) & ((var_4 ? (arr_2 [i_0 - 4]) : 26797))));
            arr_26 [i_0] = (((var_2 & var_5) & ((((arr_21 [6] [i_0 - 1] [i_0 - 1]) & (arr_21 [14] [i_0 + 1] [i_0 - 2]))))));
        }
        var_22 = ((((2097151 & (((max(var_3, var_3)))))) & ((min((max(var_0, 4294967293)), var_4)))));
    }
    var_23 = ((var_8 & ((var_7 ? ((var_1 ? -124 : var_5)) : ((var_0 ? 26816 : 65))))));
    #pragma endscop
}
