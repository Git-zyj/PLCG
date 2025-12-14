/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= var_7;
    var_13 = (((((((var_9 >> (var_5 - 71))) * ((max(32256, 32256)))))) >= (max(104, var_6))));
    var_14 = (((((max(var_0, var_11))) || ((max(var_2, var_9))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 14;i_4 += 1)
                            {
                                var_15 |= var_7;
                                var_16 = (min(var_16, ((((max(4139793216512288657, ((4 * (arr_6 [1] [i_1] [i_3] [i_1]))))) % (((((((var_2 ? var_11 : var_6))) || (arr_10 [i_1 + 1] [i_2 - 1] [i_1 + 1] [i_4]))))))))));
                            }
                            for (int i_5 = 0; i_5 < 14;i_5 += 1)
                            {
                                var_17 = (min(((var_8 ? var_5 : (arr_16 [i_0] [i_0] [i_2] [i_0] [i_3] [i_0]))), (((-((var_5 ? var_10 : var_7)))))));
                                arr_18 [i_2] [1] [i_3] [i_2 - 2] [i_1] [i_2] |= max((min(((max(32256, var_3))), (((arr_9 [i_0 - 1] [i_1] [i_2] [i_3] [1]) / (arr_10 [i_5] [i_2 + 2] [i_1 - 1] [i_0]))))), var_11);
                                arr_19 [i_5] [i_5] [i_3] [i_0] [i_1] [i_0] [i_0] = (max((((arr_10 [i_0] [i_0 - 1] [i_0] [i_1 - 1]) ? (arr_10 [i_0] [i_0 - 1] [6] [i_1 - 1]) : var_3)), 58));
                            }
                            var_18 -= ((((arr_11 [i_0] [i_1 - 1] [i_1 - 1] [i_2]) ? (arr_7 [1] [i_3] [i_2 - 2] [i_2 + 1]) : (arr_7 [i_0 - 1] [i_2] [i_0 - 1] [i_2 + 2]))));
                            var_19 -= 61808;
                        }
                    }
                }
                arr_20 [i_0] [i_0] = ((((-var_9 ? var_3 : ((46 ? var_4 : var_2)))) + (arr_17 [i_0 - 1] [i_0 - 1] [i_0] [i_1] [10])));
            }
        }
    }
    #pragma endscop
}
