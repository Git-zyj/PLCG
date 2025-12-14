/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!1);
    var_13 -= var_1;

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_1] = (((((var_11 / var_10) - (((max((arr_8 [i_0] [i_0] [i_0] [i_2]), (arr_5 [i_1]))))))) << (((((!(arr_1 [i_0] [i_1])))) % (arr_5 [i_1])))));
                    arr_10 [i_1] [i_1 + 3] [i_2] [i_1 + 3] = (arr_0 [i_0]);
                    var_14 = var_9;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_1] [i_1] [i_1] = 1;
                                var_15 = 1;
                                var_16 = ((~(~-133955584)));
                                var_17 = (max(var_17, 0));
                            }
                        }
                    }
                    var_18 -= min((max(((var_3 / (arr_2 [i_0]))), -1)), (((!(~var_10)))));
                }
            }
        }
        var_19 = (max(var_19, ((((((-(~1)))) ? (max(var_5, var_8)) : (((var_8 ? var_2 : (arr_3 [i_0])))))))));
        var_20 = (((((min(0, 250))))) - (min(-11, ((var_11 << (134217727 - 134217705))))));
    }
    var_21 = (1 != -var_1);
    #pragma endscop
}
