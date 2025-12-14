/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~(((28036 + var_0) ? ((var_11 ? var_14 : var_4)) : var_4))));

    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        var_16 = (((((~var_8) ? (arr_0 [i_0]) : var_14)) - ((var_10 / (arr_0 [i_0])))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                var_17 = (max(var_17, (min(((((((!(arr_3 [i_0]))))) + (arr_3 [1]))), (((!((((arr_1 [i_0]) ? (arr_0 [i_0]) : var_14))))))))));
                arr_7 [i_0] [i_1] [i_2] = (((arr_3 [i_1]) ? ((((arr_0 [i_2]) != (arr_0 [i_0])))) : ((min((min(-28043, -28034)), (!var_5))))));
                var_18 = max(((+(((arr_3 [i_2]) ? (arr_4 [i_1] [i_1]) : -4509076204787313003)))), ((+((var_2 ? (arr_4 [i_0] [i_1]) : -28028)))));
                var_19 = ((((min((arr_6 [i_0 - 4]), (((!(arr_5 [i_1] [i_1]))))))) ? 1186150932 : (((!(((arr_0 [i_0]) == (arr_1 [i_0]))))))));
            }
            for (int i_3 = 4; i_3 < 7;i_3 += 1)
            {
                var_20 -= ((~((~(!var_13)))));
                var_21 += (min(28020, ((~((~(arr_8 [i_3] [i_3] [0])))))));
                arr_10 [i_0] [i_1] [i_3] = (min(((((arr_6 [i_0 - 4]) && (arr_6 [i_0 + 3])))), (((arr_6 [i_0 + 2]) << (var_4 + 2096799273)))));
            }
            for (int i_4 = 1; i_4 < 9;i_4 += 1)
            {
                arr_14 [i_1] [i_1] [i_1] = (arr_2 [i_0 - 4] [i_4 + 1] [i_4 + 1]);
                var_22 = (arr_0 [i_1]);
                arr_15 [i_1] [i_4] [i_1] [i_1] = (arr_6 [i_1]);
            }
            var_23 = ((((((arr_3 [i_0 + 3]) ? (arr_3 [i_0 - 3]) : (arr_3 [i_0 - 2]))) + 9223372036854775807)) << (((-1186150916 + 1186150938) - 22)));
            var_24 = (var_5 > 1);
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            var_25 = (((arr_4 [8] [i_5]) && 1385715839));
            var_26 = (((arr_4 [i_0] [i_0 - 4]) ? (arr_12 [i_5] [i_5]) : (((arr_4 [i_0] [i_0 - 4]) ? (arr_12 [i_0] [i_5]) : (arr_12 [i_0] [i_5])))));
            var_27 = (min(var_6, (arr_3 [6])));
        }
        for (int i_6 = 2; i_6 < 9;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        {
                            arr_29 [i_0] [i_6] [i_6] [i_7] [4] [0] [i_7] = ((((arr_12 [4] [i_7]) > ((var_4 ? var_1 : 134)))));
                            var_28 ^= (((arr_8 [i_6] [i_7] [i_6 - 1]) ? (arr_13 [i_0] [8]) : -1510353692175595616));
                            var_29 ^= (min(((((~(arr_28 [1] [i_6] [i_7] [i_8] [i_8]))))), ((((min((arr_17 [9] [9] [9]), (arr_3 [i_9])))) ? 1510353692175595613 : ((((arr_19 [i_7]) ? 1 : (arr_12 [i_7] [i_9]))))))));
                            arr_30 [i_9] [i_7] = (max((((!((((arr_27 [i_0 + 1] [i_8] [5] [5] [i_8]) ? var_2 : var_4)))))), (arr_9 [i_0 + 2] [7] [i_7] [7])));
                            arr_31 [i_7] [i_7] [i_7] [1] [1] [i_7] = var_0;
                        }
                    }
                }
            }
            var_30 = ((!((max((arr_3 [i_0 - 2]), ((((arr_16 [i_0] [i_6]) && var_5))))))));
        }
    }
    #pragma endscop
}
