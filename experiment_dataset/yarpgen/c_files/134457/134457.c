/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_19 = ((-646604607951883570 > ((1 ? ((var_6 ? -18604 : (arr_2 [i_0]))) : ((((arr_0 [i_0]) ? (arr_1 [i_0]) : 939820156)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    var_20 = (((((var_6 ? (arr_4 [i_0] [i_1] [i_2]) : (arr_0 [i_0])))) ? -126 : (((!(arr_4 [i_0] [i_1] [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_21 = ((((((59681 ? 4016575996 : var_13)) - (min(var_8, (arr_11 [i_0 - 1] [i_4] [i_2] [i_0] [9] [i_3])))))));
                                var_22 = (max(var_22, ((((((max(var_3, (arr_11 [i_0] [i_0] [4] [i_4] [i_0] [i_0]))) * 120)) == (((max((arr_3 [i_4]), 1)))))))));
                                var_23 = var_18;
                                arr_16 [i_0] [i_4] [i_0] [i_3] [i_2 - 1] [i_1] [i_0] = var_5;
                                var_24 = ((((2147483647 ? 1 : 1604817139737837704))));
                            }
                        }
                    }
                    arr_17 [i_0] [i_1] [i_1] [i_0] = var_15;
                    var_25 = 1;
                }
            }
        }
        arr_18 [i_0] [i_0] = ((~((((((arr_8 [i_0] [i_0]) % var_8)) == ((((arr_13 [i_0] [5] [i_0] [1] [1]) / var_2))))))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 8;i_6 += 1)
            {
                {
                    arr_23 [i_0] [i_5] [i_0] [i_6] = var_1;
                    var_26 = (19603 - 1);
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        arr_26 [i_7] = -26568;
        var_27 = var_15;
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        arr_30 [i_8] = (((((max(-26574, var_16))) - (!1))));
        var_28 = (((arr_27 [i_8]) ? (arr_28 [i_8]) : ((var_15 ? (arr_29 [i_8]) : (arr_29 [i_8])))));
    }
    var_29 = -40851;
    var_30 = (-640 % 4294967287);
    var_31 = ((var_17 ? (var_5 % var_5) : (!var_13)));

    for (int i_9 = 1; i_9 < 10;i_9 += 1)
    {
        arr_34 [i_9] [i_9] = (!var_17);
        var_32 = 20;
    }
    #pragma endscop
}
