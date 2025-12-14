/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_13 ? 2944679767 : var_7));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_15 = var_5;
        arr_3 [i_0] [i_0] &= (((((2944679761 ? 2944679758 : 2944679776))) ? 2944679768 : var_13));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_16 &= ((var_7 >= ((2944679786 ? var_9 : (-32767 - 1)))));
        var_17 = 1;
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_18 = 2944679781;
        arr_10 [i_2] = (56 >= var_3);
        var_19 = var_11;
        var_20 = var_13;
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        var_21 = ((var_5 + ((var_6 ? var_3 : (1 | 1)))));
        arr_13 [i_3] = 1350287522;
        var_22 = ((1 ? var_2 : var_7));

        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            var_23 = var_6;
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        {
                            var_24 = var_12;
                            var_25 = var_1;
                            var_26 |= var_0;
                        }
                    }
                }
            }
            var_27 = 1073741824;
        }
        var_28 = var_7;
    }
    var_29 = var_2;
    var_30 *= var_5;
    #pragma endscop
}
