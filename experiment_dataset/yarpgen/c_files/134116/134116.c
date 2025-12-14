/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_17 -= (((((!((max(3, var_11)))))) / var_10));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] = (((max(-417241884, (arr_2 [i_0]))) + ((((28 ? 3 : var_7))))));
                                arr_17 [i_0] [i_0] [i_0] = ((18 | ((-(min((arr_0 [i_0]), var_6))))));
                                var_18 = (min(var_18, (((28 / ((((max(253, 3))) ^ 38606)))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        {
                            var_19 -= ((142 ? 5730024451540744350 : 446939235904499644));

                            for (int i_7 = 0; i_7 < 22;i_7 += 1)
                            {
                                arr_26 [i_0] [i_0] [i_5] [i_6] [i_7] = (arr_8 [i_0] [i_5 - 1] [i_6]);
                                var_20 = (arr_6 [i_0] [i_6] [i_5 - 1] [i_0]);
                                arr_27 [i_0] [i_0] [i_0] [i_5] [i_6] [i_6] = var_0;
                            }
                            arr_28 [4] [i_1 + 2] [4] [i_0] = max(0, 8761733283840);
                            var_21 = (min(var_21, (((~(((((21 ? var_13 : var_11)) > (((var_5 + 2147483647) >> (((arr_19 [i_1]) - 18505))))))))))));
                        }
                    }
                }
            }
        }
    }
    var_22 = ((-var_0 ? ((max(23752, -7332632066996976512))) : (((~((min(181, 226))))))));
    #pragma endscop
}
