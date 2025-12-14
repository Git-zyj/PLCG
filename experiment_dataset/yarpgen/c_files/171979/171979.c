/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_0] = (((((-(arr_3 [i_0 + 1] [i_1 + 2] [i_1 - 3])))) ? (arr_0 [i_0 - 1]) : (((min((arr_1 [i_1]), (arr_0 [i_1 + 2])))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_15 [0] [i_0] [i_2] [i_0] [i_0 - 1] = (((max((var_11 >= var_0), (((arr_8 [i_3]) ? 2 : (arr_7 [i_0]))))) / ((max(var_5, ((min(254, var_5))))))));
                                var_14 = (max(((-11 ? 112 : 233)), ((min((arr_2 [i_1 - 3]), 25427)))));
                                var_15 += ((!((((arr_13 [i_0] [i_1] [i_2] [i_3 + 2] [i_4]) ? ((((!(arr_13 [i_0] [i_1 + 2] [i_2] [i_4] [i_0]))))) : (min(var_4, (arr_8 [i_0]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 14;i_7 += 1)
            {
                {
                    arr_23 [i_5] [i_6] [i_6] [i_6] = var_10;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 12;i_9 += 1)
                        {
                            {
                                var_16 = (max((((!(arr_19 [i_5 + 1] [i_9 + 3] [i_7])))), var_4));
                                var_17 *= (((25442 == 25433) ? ((var_5 ? ((var_6 ? 6992633477440631721 : var_1)) : 6992633477440631724)) : 40113));
                            }
                        }
                    }

                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        arr_34 [i_6] = ((+(((~40112) | ((min(var_9, var_9)))))));

                        for (int i_11 = 0; i_11 < 16;i_11 += 1)
                        {
                            arr_37 [i_5] [i_6] [i_5] [i_10] [i_11] = ((-6992633477440631721 ? (4 > 6992633477440631721) : 6992633477440631705));
                            var_18 -= ((~((((max(var_2, (arr_35 [i_5] [i_6] [i_7] [i_10] [i_10] [i_11])))) | (arr_33 [i_10] [i_7] [i_7 - 3] [i_7] [i_7] [i_7])))));
                        }
                        var_19 -= var_0;
                    }
                }
            }
        }
    }
    var_20 = var_10;
    #pragma endscop
}
