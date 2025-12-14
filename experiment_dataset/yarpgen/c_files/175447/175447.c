/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175447
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
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_16 = 31045;
                                var_17 = (arr_0 [i_1]);
                                arr_11 [i_0] [i_1] [i_1] [i_2] [0] [i_4] [i_4] = (min(var_6, (((-23461 && ((0 > (arr_10 [i_1] [i_1]))))))));
                                var_18 = -52;
                            }
                        }
                    }
                    var_19 = ((((var_7 ? 1 : var_8))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 4; i_5 < 10;i_5 += 1)
    {
        arr_14 [i_5] = var_10;
        var_20 = (((0 / -107) >> (((arr_3 [6] [i_5] [6]) - 18354507112424830365))));
        var_21 -= ((var_12 && (~17)));
        arr_15 [i_5] = var_7;
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        arr_18 [i_6] = (arr_17 [i_6]);
        arr_19 [i_6] [14] = var_8;
    }
    var_22 = (max(var_22, (~var_13)));
    #pragma endscop
}
