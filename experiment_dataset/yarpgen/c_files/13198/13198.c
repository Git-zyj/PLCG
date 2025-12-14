/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    var_10 = ((~((max(205, 31980)))));
                    var_11 = (min(var_11, ((min(7930548097506355125, (~2147483647))))));
                    arr_10 [i_1] [i_1 + 1] [i_1 + 1] [i_2 - 1] = (+-1);
                }
                for (int i_3 = 1; i_3 < 9;i_3 += 1)
                {
                    var_12 = (((var_4 ? 0 : var_7)));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                var_13 += ((-(max(((min(11688, var_2))), (min(17845561607271610165, var_7))))));
                                var_14 = (min(var_14, 12938));
                                var_15 -= ((+((min((!31994), var_8)))));
                                arr_20 [i_0] [i_0] [i_1] [i_0] [i_5] = (min((((var_4 ? 87 : -15))), 4294967281));
                                var_16 &= -7194124976559652327;
                            }
                        }
                    }
                    arr_21 [i_0] [i_1] [i_1] [i_1] = (!var_7);
                }
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    var_17 = -30;

                    for (int i_7 = 1; i_7 < 11;i_7 += 1)
                    {
                        var_18 = (!205);
                        arr_28 [i_1] [i_7] [i_1] [i_1] [i_0] [i_0] = ((-((37818 ? 4768443086129525790 : var_4))));
                    }
                }
                /* vectorizable */
                for (int i_8 = 4; i_8 < 11;i_8 += 1)
                {
                    var_19 = var_8;
                    var_20 = -9223372036854775780;
                }
                /* LoopNest 3 */
                for (int i_9 = 1; i_9 < 9;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 10;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 12;i_11 += 1)
                        {
                            {
                                arr_39 [i_0] [i_1 - 2] [i_0 - 1] [i_0] [i_11] [i_1] [i_0] = -1449873811;
                                arr_40 [i_0 + 1] [i_1] [10] [i_10] [2] = (max(((var_8 ? 4294967282 : 19)), 27061));
                            }
                        }
                    }
                }
                var_21 = -2147483647;
            }
        }
    }
    var_22 = (min(var_22, 15174650217043722206));
    var_23 = (max(var_23, (((~(((((-31998 ? -4768443086129525791 : 9533213986467361364))) ? 1704899967 : (~831838146))))))));
    var_24 = (max(-8450432678309296571, ((min((min(5775425, 32015)), ((50729 ? var_8 : 3885850952)))))));
    #pragma endscop
}
