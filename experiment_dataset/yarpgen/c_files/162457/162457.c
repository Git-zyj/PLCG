/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_16 |= ((!(((-(min(var_11, (arr_3 [i_0] [2]))))))));
                    var_17 ^= min(0, -3);
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_18 ^= ((((((1805076403816497268 ? 14038379020489488318 : var_3)) >> (((min(2665169577, (arr_12 [i_0]))) - 2665169541)))) * ((min(0, (1 | 1636315511138696360))))));
                                var_19 ^= (min(((13929238628435587655 == (!1))), (!7997709713569546944)));
                                arr_14 [i_1] = (min(((min(var_5, (~1)))), (min(14946618062720202669, ((-1636315511138696361 ? 14038379020489488318 : var_12))))));
                                var_20 ^= 12640440248495470397;
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 ^= (min(2147483631, var_9));
    var_22 = (min(14038379020489488318, 711978865));
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 16;i_6 += 1)
        {
            {
                var_23 = var_4;
                var_24 = (min((min(976932370, 2147483631)), 163085373));
                var_25 = (max(var_25, ((((!var_0) << (((var_1 == (min(0, -1774774828))))))))));
            }
        }
    }
    var_26 = var_15;
    #pragma endscop
}
