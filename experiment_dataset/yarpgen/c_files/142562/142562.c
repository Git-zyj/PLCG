/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_11 &= (max((var_5 ^ var_1), (((-6529367356527095663 ? (arr_9 [i_0] [i_2 - 1] [8]) : (arr_9 [i_2] [i_2 + 1] [1]))))));
                                var_12 = (max((((arr_8 [i_0] [i_4 + 1] [i_4 + 1] [i_4 - 1]) ? (arr_8 [i_0] [i_4 + 1] [i_4 + 1] [i_4]) : var_5)), (((-(max(var_7, 6529367356527095651)))))));
                            }
                        }
                    }
                }
                arr_13 [i_0] = (((~3806075403) & ((((max(6529367356527095637, (arr_12 [i_0] [0] [i_0])))) ? ((18446744073709551608 | (arr_11 [i_0] [i_0] [i_1 + 1]))) : (((arr_9 [i_0] [i_1 + 4] [i_0]) ^ var_2))))));
                var_13 = (((((max((arr_5 [i_0] [i_1 + 2] [i_1 + 2]), 1675032294303391152)))) != -var_9));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 14;i_7 += 1)
                        {
                            {
                                arr_22 [i_0] [i_1 + 3] [i_0] [i_0] [i_5] [i_6] [i_0] = ((+((((((arr_2 [i_0]) ? (arr_8 [i_0] [i_1] [15] [i_6]) : (arr_2 [i_0])))) ? var_1 : (arr_19 [i_7] [i_0] [i_6] [14] [i_0] [i_0] [i_0])))));
                                var_14 = -6529367356527095652;
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = ((+((var_3 ? (var_7 * var_5) : 6529367356527095651))));
    var_16 = (((var_4 && var_5) ? var_10 : var_8));
    var_17 = var_9;
    #pragma endscop
}
