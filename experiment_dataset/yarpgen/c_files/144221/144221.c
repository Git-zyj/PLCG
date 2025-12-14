/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (min(var_0, var_0))));
    var_11 *= var_1;

    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_12 = ((((max((arr_4 [i_2 - 1] [i_2 + 1] [i_2 + 1]), (arr_4 [i_2 - 1] [i_2 + 1] [i_2 + 1])))) ? ((min(var_3, (arr_2 [i_0 - 1])))) : ((min((max(var_7, -27949)), (var_8 == var_5))))));

                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        arr_11 [i_1] [9] = max((~1), (((27954 | 27974) | ((~(arr_5 [12] [12]))))));
                        var_13 = (min(((((arr_6 [i_0] [i_2 - 2]) | (arr_6 [i_0 - 1] [i_2 + 1])))), (((min((arr_6 [i_0] [i_1]), (arr_3 [i_0 - 1]))) + (0 % 288230376151711743)))));
                        var_14 = (min(((max((min((-32767 - 1), -27964)), var_3))), ((((max(var_5, 32767))) * ((max((arr_2 [i_0 - 1]), var_1)))))));
                    }
                }
            }
        }
        var_15 = (!((max(((1 ? (arr_5 [i_0] [i_0]) : (arr_2 [10]))), ((max((arr_8 [i_0] [i_0 - 1]), 20)))))));
        arr_12 [i_0 - 1] = (((((((min((arr_7 [i_0] [i_0 - 1] [i_0 - 1] [i_0]), (arr_9 [i_0 - 1] [9] [1] [1] [i_0])))) + (arr_10 [5] [i_0])))) ? (--1400092666) : ((((max(18209, (arr_5 [12] [7]))) - -15797)))));
    }
    for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
    {
        arr_15 [i_4 - 1] = (min((((arr_0 [i_4 - 1]) ? -288230376151711737 : (arr_0 [i_4 - 1]))), ((((arr_0 [i_4 - 1]) ? var_9 : (arr_0 [i_4 - 1]))))));
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                {
                    var_16 = (arr_10 [i_5 + 1] [i_4 - 1]);
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_17 = ((((((arr_21 [i_5] [i_5 + 1] [i_7]) ? (arr_21 [i_5] [i_5 - 2] [i_7 + 2]) : var_7))) > ((3581093958 ? (max(1, 288230376151711737)) : 1))));
                                arr_29 [i_5] = 61731;
                                arr_30 [i_8] [i_8] [i_8] [i_5] [i_5] = (((~1) <= (arr_21 [i_5] [i_7] [i_8])));
                                var_18 = (min(var_18, (min((((arr_13 [i_4 - 1]) ? (arr_16 [i_4 - 1] [i_8]) : (arr_13 [i_4 - 1]))), (max(((max(1, 6239))), ((1 ? -27964 : -27975))))))));
                            }
                        }
                    }
                    arr_31 [i_5] = ((-((0 ? var_1 : (min((arr_17 [i_6]), (arr_3 [i_5])))))));
                    var_19 = (max((((max(-7844907457479558905, 10767)))), (arr_6 [i_4] [0])));
                }
            }
        }
    }
    var_20 = ((var_6 ? var_5 : (min(((min(var_2, 54790))), (var_3 * var_8)))));
    var_21 = ((-14917 ? -6240 : 144));
    #pragma endscop
}
