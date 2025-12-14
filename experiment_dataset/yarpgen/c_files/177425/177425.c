/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_3] [i_2] [i_3] [i_3] = (((-94 | (min(4045057120, -123)))));
                                var_13 *= ((~((~(arr_11 [i_0] [i_1] [i_2] [i_0] [i_4] [i_2 + 4])))));
                                arr_14 [i_0] [i_1] [i_2] [i_0] [i_4] [i_4] = (max(((((((arr_6 [i_0] [3] [i_0] [i_0]) / (arr_2 [i_0] [i_1])))) || ((!(arr_10 [i_0] [i_1] [i_0] [i_4]))))), (((arr_2 [i_2 - 1] [i_2 + 1]) && -94))));
                            }
                        }
                    }
                }
                var_14 -= (min((min(var_10, (arr_9 [i_0]))), (((~(min(-84, 4294967295)))))));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                arr_26 [i_5] [i_1] = 7;
                                var_15 &= var_9;
                                var_16 = var_8;
                            }
                        }
                    }
                }
                arr_27 [i_0] [18] = (var_1 && -51);
                var_17 = (((!(arr_25 [i_0] [i_0] [24] [i_0] [0]))));
            }
        }
    }
    var_18 = (-32333 & 1);
    var_19 = ((min(var_0, (!4))));
    #pragma endscop
}
