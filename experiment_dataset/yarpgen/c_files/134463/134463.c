/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_12 ^= (min(((((min(-64, (arr_3 [i_0])))) ? 3571015322778897669 : 3583621351)), (((((min(var_11, (arr_6 [6])))) ? (arr_4 [i_1] [i_1 + 1] [i_1 - 1]) : (max(55826, (arr_2 [i_0] [i_0]))))))));
                var_13 ^= (!var_7);
                var_14 = ((0 / (min(711345944, 1851987517013667519))));

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_15 = (arr_8 [i_1] [i_1] [i_1] [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_2] [6] [i_4] &= ((+(max((arr_9 [10] [10] [i_1 + 2] [i_4 + 1]), (arr_9 [6] [i_0] [i_1 + 2] [i_4 + 2])))));
                                arr_16 [i_0] [i_1] [i_2] [i_1] [i_4] = (((arr_12 [i_3] [i_3] [i_3] [i_3] [i_1]) ? (min(((var_0 ? var_4 : var_2)), var_9)) : (max((((var_8 ? 2815705182 : var_9))), var_7))));
                                arr_17 [i_0] [i_1] [i_1] [i_3] [i_3] [3] [i_4] = (-32767 - 1);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 4; i_6 < 19;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        {
                            var_16 *= var_6;
                            var_17 = (var_1 - ((((max((arr_23 [i_5] [i_5]), var_7))) ? ((((arr_22 [i_5]) ? (arr_24 [i_7] [10] [i_5]) : 38142))) : 1851987517013667519)));
                        }
                    }
                }
                arr_29 [i_5] [i_5] [i_6] = (max(((((arr_28 [i_5] [i_6 - 1] [i_6] [i_5 + 2] [i_5] [i_5]) ? (arr_21 [i_5] [i_6 - 2] [i_6 - 2]) : var_6))), var_2));
                arr_30 [i_5] [i_5] [i_5] = ((+((((arr_24 [i_5 + 2] [i_5] [i_5 + 2]) || ((min((arr_19 [i_5]), 205))))))));
                arr_31 [i_5] [i_5] = 45159;
            }
        }
    }
    var_18 = (min(var_7, ((((45159 + 127) * ((2380579063081099623 ? 85 : var_9)))))));
    #pragma endscop
}
