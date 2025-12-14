/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_10 = (max(0, 0));
                                var_11 = 1;
                                var_12 = (((-6898483940297002254 + 9223372036854775807) << (((-2046135258 + 2046135265) - 7))));
                                var_13 = 152382285;
                            }
                        }
                    }
                    var_14 = (((((-2046135258 ? 19295 : 1))) - 1));
                }
            }
        }
    }
    var_15 = (var_8 ^ (max((min(-2046135256, 615735751)), ((min(var_4, var_4))))));
    var_16 = 227;
    var_17 = (((919732828 >= 4294967295) ? var_0 : (!-1181)));

    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        var_18 = var_6;
        var_19 += (min((min((arr_15 [i_5] [i_5]), -2046135279)), (max((arr_15 [i_5] [i_5]), 1))));
    }
    #pragma endscop
}
