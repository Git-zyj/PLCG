/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_16 *= (-(var_11 != var_6));
                var_17 = (4329938355505665303 <= 20);
                arr_7 [i_1] [i_1] [i_0] = ((var_9 ? ((((var_9 ? (arr_6 [i_0] [i_0]) : var_5)) * (arr_1 [i_0]))) : (((((arr_2 [i_1] [i_1]) || (arr_2 [i_0] [i_1])))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_1] [i_2] [i_0] = var_10;
                            arr_15 [i_0] [i_1] [i_1] [i_0] = (arr_1 [i_0]);
                            arr_16 [i_0] [i_2] = (arr_9 [i_0] [i_3]);
                            var_18 = (var_15 >= var_4);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                {
                    var_19 = var_11;

                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        var_20 = ((var_9 ? 16003401009022998167 : (arr_28 [i_4] [i_4] [i_5] [i_5] [i_6] [i_7])));
                        var_21 = (((arr_8 [i_5 - 1] [i_5 - 1]) * (-4329938355505665302 && -1)));
                        var_22 = (min(var_22, var_0));
                        arr_29 [i_4] [i_7] [i_6] [i_5] = (min(((var_10 || (arr_23 [i_5 + 1] [i_5 - 1]))), ((4329938355505665279 || (arr_23 [i_5 + 1] [i_5 - 1])))));
                    }
                    var_23 = ((((((arr_18 [i_5 - 1]) ? var_1 : -4329938355505665304))) & (arr_11 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5])));
                }
            }
        }
    }
    var_24 = (min(var_11, 144115188075855872));
    #pragma endscop
}
