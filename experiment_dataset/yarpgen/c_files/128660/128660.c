/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_15 = (((min((arr_2 [i_0 + 1] [i_0 - 2] [i_0 + 2]), -248899895585463932)) != (var_5 - var_8)));
                var_16 = ((7 >> (-248899895585463932 + 248899895585463938)));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_17 = max((~248899895585463942), (((1 ? (-2147483647 - 1) : var_13))));

                            for (int i_4 = 3; i_4 < 17;i_4 += 1)
                            {
                                arr_14 [14] [i_1] [17] [i_3] [i_4] = (min(((var_7 ? var_2 : -1)), (((var_1 ? var_14 : (arr_1 [i_2 + 1]))))));
                                var_18 = (((((arr_0 [i_2 - 1]) ? 32 : (arr_0 [i_2 - 2])))) ? ((((((var_12 ^ var_8) + 2147483647)) << ((((arr_1 [i_0]) >= -32)))))) : (min(((var_2 ? (arr_13 [i_0 - 1] [i_1]) : 62)), (~var_14))));
                                var_19 = (((96 + 45370) ? (min((-127 - 1), (max((arr_0 [12]), (arr_1 [i_0]))))) : ((~(1 < 0)))));
                                arr_15 [i_2 - 2] = (((((min(31612, 31621)))) - (((arr_7 [i_3] [i_3 - 1] [i_3 - 2] [i_3 + 1]) ? var_5 : (arr_7 [i_4] [i_3] [i_3 + 2] [i_2 - 1])))));
                                var_20 = ((1606047523 ? -var_3 : 2147483643));
                            }
                            var_21 = (max((((var_14 / (arr_13 [i_0 - 2] [i_2 + 1])))), -9462912906081832675));
                        }
                    }
                }
                arr_16 [i_0 - 1] [i_0 - 1] [i_1] = (-((-(arr_9 [i_0] [i_1]))));
                var_22 = (((((4632103478076987642 << (var_13 - 13691)))) && (var_14 < var_1)));
            }
        }
    }
    var_23 = ((((30232 ? ((86 ? -248899895585463932 : 13188971484700788519)) : var_12)) / var_10));
    var_24 = (11001110499298346305 || 96);
    var_25 = ((~(min(((4294967295 ? 5000584878392011731 : -2147483624)), ((20 ? -8339 : 34359738367))))));
    var_26 = var_3;
    #pragma endscop
}
