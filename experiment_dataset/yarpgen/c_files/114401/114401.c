/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -1354716827;
    var_21 = (~var_1);
    var_22 = var_6;

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_2 [i_0] = var_19;
        arr_3 [i_0] = (min((max(4206775500, 198)), (~34)));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_12 [i_1] [i_1] = ((((arr_1 [i_0 + 1]) / (arr_1 [i_0 + 1]))));
                        var_23 |= ((((arr_4 [i_0 + 1] [i_2]) ^ (arr_4 [i_0 + 1] [i_2]))) << ((((arr_10 [i_0] [i_0] [i_0 + 1] [i_0]) || (arr_5 [i_3])))));

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            var_24 = (max(var_24, (((((min(62, -9882))) ? (arr_13 [i_3] [i_1] [i_0]) : (min(((max(191, 58))), (((arr_13 [i_0] [i_4] [i_2]) ? var_19 : (arr_0 [i_4] [i_2]))))))))));
                            arr_16 [i_0] [i_1] [i_1] [i_2] [i_3] [14] &= ((38128 ? ((max((65527 <= var_19), -var_16))) : ((~(min((arr_13 [i_0] [i_1] [12]), var_11))))));
                            arr_17 [i_4] [i_2] = ((((min((arr_4 [i_0 + 1] [i_0]), var_10))) ? (~27404) : (min((arr_13 [i_0 + 1] [i_0 + 1] [i_0 + 1]), (arr_7 [i_0 + 1] [0] [i_0 + 1])))));
                        }
                        var_25 = ((min(27415, (arr_15 [i_0 + 1]))));
                    }
                }
            }
            arr_18 [i_0 + 1] [i_0 + 1] [i_0 + 1] = (((((-var_4 & (~-7818)))) && (((41 ? 9746 : var_0)))));
        }

        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            arr_21 [i_5] [i_5] = ((((!(arr_13 [i_5] [i_5] [i_0 + 1]))) ? (!var_4) : (((!(!var_7))))));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        {
                            var_26 ^= (((arr_15 [i_0]) - ((((var_0 ? (arr_0 [i_5] [i_8]) : var_15))))));
                            arr_29 [i_5] [i_5] [i_5] [i_6] [i_6] [i_7] [i_8] = (((((((arr_1 [i_8]) ? 2 : var_8)))) > (((!((((arr_19 [i_8] [10] [i_5]) ^ 32758))))))));
                            arr_30 [i_0] [i_5] [i_0] [i_6] [i_0] [i_7] [i_8] = (69 % var_11);
                        }
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        var_27 = (max(var_27, ((max(65529, 360266179)))));
        var_28 = ((((var_7 ? var_4 : var_9))));
    }
    var_29 = (min(var_29, (((~((var_19 ? var_9 : (!41))))))));
    #pragma endscop
}
