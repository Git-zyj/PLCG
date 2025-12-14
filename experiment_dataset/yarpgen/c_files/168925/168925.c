/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, ((((max((arr_1 [0]), (16 / 9037069862955913393))) << ((((-((1464235467032389447 ? (arr_0 [i_0]) : var_5)))) - 18446744073709534612)))))));
                    arr_6 [1] [i_1] [i_1] = ((((((30 - var_11) ? (arr_5 [i_0] [i_1] [i_0]) : var_6))) ? (arr_0 [i_0]) : (arr_0 [i_0])));

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_13 = (min((~var_7), (((!(arr_8 [i_3] [5] [13] [3] [i_0] [7]))))));
                        var_14 *= var_1;
                        arr_10 [i_0] [i_0] [i_0] = (arr_9 [i_0] [i_0] [11] [1]);
                        var_15 = (max(var_15, ((min((((arr_3 [i_1] [i_0]) ? (arr_1 [i_2]) : -38)), (max((((arr_1 [i_1]) ? var_9 : var_10)), ((max(var_4, -101))))))))));
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        var_16 += (arr_12 [i_4] [i_2] [i_0]);
                        arr_13 [i_1] = ((((((((0 ? (arr_4 [i_0] [8] [i_2]) : var_10))) ? (arr_3 [i_0] [i_0]) : ((min((arr_3 [5] [i_4]), (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))) ? (((((var_2 ? (arr_5 [i_1] [i_1] [i_1]) : 926788619))) ? var_7 : var_5)) : (((((arr_11 [i_0] [i_0] [i_0] [2] [i_0]) && 152))))));
                    }
                }
            }
        }
        arr_14 [5] = (!-26);
        arr_15 [i_0] = (((min(((max((arr_9 [i_0] [i_0] [i_0] [i_0]), (arr_8 [i_0] [11] [i_0] [i_0] [i_0] [i_0])))), ((14872 ? -78 : (arr_4 [i_0] [i_0] [i_0])))))) - (((max(7595403278878742054, -926788611)) / (((var_4 ? (arr_4 [0] [i_0] [i_0]) : var_6))))));
    }
    for (int i_5 = 2; i_5 < 9;i_5 += 1)
    {
        arr_18 [i_5] = ((~(((((max(-926788619, (arr_9 [i_5] [i_5] [13] [i_5])))) != -535573137751824619)))));
        arr_19 [i_5] = var_6;
    }
    var_17 *= -0;
    #pragma endscop
}
