/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_14 = (var_1 ? 3829424007577470173 : var_13);
                    arr_9 [i_2] [11] [i_0] = ((((var_11 ? ((-102 ? (arr_5 [i_0] [i_1]) : 17014950851739307351)) : (arr_7 [i_0] [i_1] [i_0] [i_0]))) < (((((var_6 & 876424801547868457) != (((66 << (((((arr_7 [i_0] [i_1] [i_1] [i_0]) + 1124780563)) - 5)))))))))));
                    arr_10 [i_0] [i_1] [i_1] [9] = (max((arr_1 [i_0]), (((arr_3 [i_1] [i_0]) << (((1 < (arr_3 [i_1] [i_0]))))))));
                    var_15 = ((-((max((arr_3 [i_1] [i_1]), (arr_0 [i_0] [i_0]))))));
                    var_16 = var_11;
                }
            }
        }
    }
    var_17 *= (min((max(-var_7, var_4)), -783122972));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            {
                var_18 = ((((max((108 & -8606673565935420458), 55))) ? (~2253359484478859831) : (((-((min(var_9, -71))))))));
                arr_17 [i_3] = (-(!-83));
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        {
                            var_19 -= (arr_16 [i_3] [i_3] [i_3]);
                            arr_22 [i_5] [i_4] [i_5] [i_6] [i_6] = min(((~(max(8946550216936257356, -663128974)))), 12604394061521178417);

                            for (int i_7 = 0; i_7 < 20;i_7 += 1)
                            {
                                arr_25 [i_5] [i_6] [i_5] [4] [i_5] = (max(((1 ? var_12 : (arr_18 [i_5] [14] [4] [i_6]))), (((var_8 & (arr_11 [i_5 - 2]))))));
                                arr_26 [i_3] [i_5] [5] [i_5] = ((((min((var_3 | 546451089), var_0))) ? ((~(arr_19 [i_3] [i_3] [i_5 - 2] [i_6]))) : (arr_14 [i_4] [i_5] [i_7])));
                            }
                            for (int i_8 = 0; i_8 < 20;i_8 += 1)
                            {
                                arr_29 [i_5] [i_6] [i_3] [i_3] [i_5] = 353989614;
                                arr_30 [i_3] [i_6] [i_3] [i_3] [i_5] [i_3] = max(((max((max(6578, -9076193525357196381)), 89))), ((~(arr_27 [i_3] [i_5] [i_5 + 1]))));
                            }
                            arr_31 [i_6] [i_5] [i_5] [i_3] = 1489462848;
                        }
                    }
                }
            }
        }
    }
    var_20 = min((max((max(var_1, var_11)), (~var_4))), var_13);
    var_21 = var_10;
    #pragma endscop
}
