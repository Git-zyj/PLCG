/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, var_7));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = 18424;

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        arr_8 [i_2] [i_1] [i_2] [i_3] [i_3] = ((var_16 | (arr_6 [i_3] [i_1] [i_0 - 2] [i_0 + 3])));
                        arr_9 [i_2] [i_1] [i_2 - 1] [i_3] = ((var_12 ? 8388607 : 21548));
                        arr_10 [i_2] [i_1] [i_2 - 1] [i_3 + 1] = -var_13;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        var_19 = ((var_10 / (arr_11 [i_0 + 3])));
                        var_20 = (min(var_20, (((-(arr_11 [i_2 - 1]))))));
                        arr_14 [i_2] [1] [i_1] [10] [i_1] = (((1 << (-21540 + 21564))));
                        var_21 *= ((arr_11 [i_2 - 1]) < 17179869183);
                    }
                    var_22 = (arr_4 [i_2] [21]);
                    arr_15 [i_0] [i_2] [i_0] [i_1] = -7048130594667398048;
                    var_23 = 1;
                }
            }
        }
    }
    var_24 = (((((var_13 ? (!-17) : var_7))) ? 7 : ((((-21537 < (~-17)))))));
    #pragma endscop
}
