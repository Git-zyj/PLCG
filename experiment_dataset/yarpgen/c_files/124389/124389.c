/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((((((var_0 ? (!var_3) : var_12))) ? (max(var_12, (1375019647 & var_9))) : var_12)))));
    var_14 = (!4078);

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_15 = ((var_1 ? ((((var_3 - (arr_0 [i_0]))))) : (min((arr_1 [i_0]), (arr_2 [i_0] [i_0])))));
        var_16 = (min(((((max(4096, var_0))) ? ((((!(arr_1 [i_0]))))) : var_1)), (((((max((arr_2 [i_0] [i_0]), (arr_0 [i_0])))) ? (((arr_1 [i_0]) ? var_9 : (arr_0 [i_0]))) : (((!(arr_0 [i_0])))))))));
    }
    for (int i_1 = 3; i_1 < 17;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            arr_8 [i_1] [i_1] = (((((var_0 ? (arr_3 [i_2]) : (((arr_7 [i_2] [i_2 + 1]) ? 4076 : var_3))))) ? (arr_3 [i_2]) : (((arr_4 [i_2 + 1] [i_1 + 1]) << (((arr_4 [i_2 + 3] [i_1 - 2]) - 71))))));
            var_17 += ((!((!(arr_4 [i_2 - 1] [i_2 - 1])))));
        }
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            arr_11 [i_1] [i_1] = (((arr_6 [i_1]) ? (max(1, (arr_7 [i_1] [i_1 - 1]))) : ((((arr_5 [1] [1] [i_1 - 1]) << (((arr_3 [i_1 - 3]) - 5207)))))));

            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                arr_16 [i_1] [16] [i_1] [i_1] = (arr_14 [i_1] [i_3] [8] [i_4]);
                var_18 = (arr_7 [i_4] [i_3]);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_19 = var_6;
                            var_20 = (max((((-(arr_20 [6] [6] [16] [16] [16])))), ((max(-4096, (arr_18 [i_1 - 3] [i_1 - 3] [i_6] [i_1 - 3] [i_4] [i_1]))))));
                            var_21 ^= (min(((18286568828213197246 ? (arr_4 [i_3] [i_3]) : ((min(var_1, var_10))))), (((!(((6190 ? (arr_10 [i_5]) : (arr_15 [i_5] [i_6])))))))));
                            var_22 = ((+(((arr_13 [i_1 + 1] [i_1 - 3] [i_1] [i_5]) ? var_8 : (arr_3 [i_1])))));
                        }
                    }
                }
            }
            for (int i_7 = 1; i_7 < 14;i_7 += 1)
            {
                var_23 = (max(var_23, var_2));
                var_24 = (min((min(var_10, (arr_15 [i_1] [i_7 + 2]))), ((((((!(arr_23 [i_1] [i_1] [i_7])))) >= (arr_12 [i_1]))))));
            }
        }
        for (int i_8 = 3; i_8 < 17;i_8 += 1)
        {
            var_25 = (max((max((min((arr_4 [i_8] [8]), (arr_15 [i_1] [i_1]))), -var_6)), var_4));
            var_26 = (min((max(var_11, ((~(arr_13 [i_1] [i_1] [i_1] [i_1]))))), (min(((var_11 ? (arr_23 [i_1] [i_1] [i_1]) : var_6)), (((12 == (arr_9 [i_1] [i_8]))))))));

            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                arr_29 [i_1] [i_8] [i_8] = ((max((((!(arr_13 [i_1] [i_1] [i_1] [i_1])))), (arr_23 [i_1 - 2] [i_1] [i_1]))));
                arr_30 [i_1] [i_1] [6] = ((!((min(1899892052139800653, var_11)))));
                arr_31 [i_1] = var_11;
            }
            var_27 *= max(2919947667, (arr_3 [i_8]));
        }
        var_28 = (((((var_5 ? (min(160175245496354369, (arr_21 [i_1] [i_1 + 1]))) : (!1)))) || (!18286568828213197247)));
        var_29 = (min((((arr_9 [i_1 - 1] [i_1 - 1]) ? (arr_10 [i_1 - 3]) : 15)), 1));
    }
    #pragma endscop
}
