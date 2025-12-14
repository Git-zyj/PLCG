/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    arr_10 [i_2] = (arr_6 [i_2] [i_2] [i_2 + 1]);
                    var_17 = ((!(arr_2 [i_2 + 1])));
                    var_18 = (max(((-(((arr_2 [i_1]) ? (arr_9 [i_0] [i_1 - 1] [i_2 + 1]) : (arr_6 [i_0] [11] [11]))))), (min(var_1, (arr_9 [i_0 + 2] [i_0 + 2] [i_2 + 1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_19 [i_3] [i_3] [i_2] [i_2] [6] [i_0 + 3] = ((+((+(((arr_12 [i_0] [2] [i_2 - 2] [i_3 - 2]) ? var_10 : (arr_1 [i_4])))))));
                                var_19 = ((-(max(0, (((arr_14 [i_2] [i_2] [i_0 + 3]) & (arr_6 [0] [0] [1])))))));
                                var_20 = (((min((arr_8 [i_0 - 1] [i_2] [i_2]), (arr_8 [i_0] [i_2] [i_4 + 1])))) ? (arr_13 [i_0] [10] [i_0] [i_2] [i_3 + 2] [i_0]) : (((arr_7 [i_2 - 1] [i_3 + 4] [i_2 - 1]) ? (arr_7 [i_3] [i_3 + 1] [i_3]) : (arr_7 [i_3 - 3] [i_3 - 1] [i_3 - 3]))));
                                arr_20 [i_2] [i_2] [9] [i_2] [i_4 - 1] = (((max(((-20 ? -16686 : var_6)), (!84))) + (arr_4 [i_0] [i_0])));
                                var_21 = arr_16 [i_3] [i_3] [8] [i_3] [i_3] [i_3];
                            }
                        }
                    }
                    var_22 &= -1;
                }
            }
        }
    }
    var_23 = ((var_8 ? var_6 : (min(((59 ? var_2 : var_5)), ((2452324408812399255 >> (var_14 + 7484953059934503681)))))));
    #pragma endscop
}
