/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((!(var_5 * -var_17)));
    var_19 = (max(var_19, -var_16));
    var_20 *= (((((var_8 ? -var_10 : var_12))) ? (((-var_9 + 2147483647) << ((((var_15 ? var_7 : var_5)) - 3199081767)))) : (!var_17)));
    var_21 = ((!((((!var_14) >> (var_6 + 5461461188362465105))))));

    for (int i_0 = 2; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((((((~(arr_0 [i_0]))) ? (((arr_0 [i_0 - 2]) ? (arr_1 [i_0 + 3]) : (arr_0 [i_0]))) : ((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))))))));
        var_22 -= (((arr_1 [i_0]) > ((((!(arr_0 [i_0]))) ? (arr_0 [i_0]) : (arr_0 [13])))));

        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        {
                            var_23 = ((((((arr_9 [i_0] [i_0] [13] [21]) ? (((arr_4 [i_3] [i_2] [8]) ? (arr_1 [13]) : (arr_0 [i_3]))) : (((-(arr_1 [17]))))))) ? (((((-(arr_8 [i_1 - 1] [i_1 + 1])))) ? (arr_10 [i_0 + 2] [i_0 + 2]) : (arr_7 [i_2 + 1] [i_1] [i_2] [i_3]))) : (((-((((arr_3 [i_0] [4] [i_1]) == (arr_3 [10] [i_3] [i_1])))))))));
                            arr_12 [i_4] [i_1] [i_4] [i_3] [13] [i_1] [12] = ((((((((arr_6 [18] [14]) ? (arr_8 [i_1] [i_1]) : (arr_0 [i_0]))) >> (((arr_7 [i_3] [i_1] [i_2 + 3] [i_3]) - 8959230812894735426))))) ? (arr_3 [4] [i_3] [i_1]) : (((arr_4 [i_1] [i_3] [i_4]) ? (((arr_1 [i_0]) ? (arr_3 [i_0 - 1] [i_4] [i_1]) : (arr_6 [i_3] [i_0 + 1]))) : (((arr_11 [i_3] [i_0 - 1] [i_0 + 1] [i_0] [10] [i_4]) ? (arr_9 [i_0] [20] [i_2] [i_0]) : (arr_0 [i_0])))))));
                            var_24 = ((((!(arr_4 [0] [17] [17])))));
                            var_25 = (arr_5 [i_0 - 1] [i_0] [i_0] [3]);
                        }
                    }
                }
            }
            var_26 = (max(var_26, (((((((((-(arr_9 [i_0] [8] [16] [i_0])))) ? (((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0 + 3]))) : (arr_11 [i_0] [i_1] [i_0] [i_0 - 1] [i_0] [i_1])))) ? (((((-(arr_0 [i_0])))) ? (((arr_1 [i_0]) + (arr_6 [12] [i_1]))) : ((((!(arr_4 [i_0] [10] [i_1]))))))) : ((-(((arr_6 [i_0] [8]) ? (arr_0 [i_0]) : (arr_6 [i_1] [i_1 - 2]))))))))));
            arr_13 [i_1] = (((((-(arr_9 [11] [11] [i_0] [11])))) ? (((arr_5 [i_0] [i_1] [i_0] [i_1]) ? (((-(arr_8 [4] [i_1])))) : (((arr_8 [11] [i_0 + 1]) / (arr_9 [i_0] [i_0] [i_0] [i_0]))))) : (arr_1 [5])));
        }
    }
    for (int i_5 = 2; i_5 < 19;i_5 += 1) /* same iter space */
    {
        var_27 = (((((!(((~(arr_4 [i_5] [i_5] [i_5]))))))) * (arr_1 [i_5])));
        var_28 = (max(var_28, ((((((-(((arr_10 [11] [14]) ? (arr_3 [i_5 + 2] [i_5] [i_5]) : (arr_6 [i_5 - 1] [i_5])))))) ? ((((!((((arr_16 [i_5]) ? (arr_16 [i_5]) : (arr_8 [i_5] [i_5 + 1])))))))) : (arr_7 [1] [i_5 + 2] [i_5] [i_5]))))));
        var_29 = (arr_9 [i_5] [21] [i_5] [i_5 + 3]);
    }
    #pragma endscop
}
