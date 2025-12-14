/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_0] [i_1] = ((!(((var_9 ? (arr_3 [i_1] [i_1] [i_1]) : (arr_1 [i_0] [i_1 - 2]))))));
                arr_8 [i_1] = ((6701479582195023709 | 127) << var_3);
            }
        }
    }

    for (int i_2 = 4; i_2 < 12;i_2 += 1)
    {
        var_11 = 18446744073709551615;
        var_12 = ((max((arr_3 [i_2 + 1] [i_2] [i_2]), (arr_0 [i_2]))));
    }
    var_13 = (var_10 <= var_2);
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            {
                arr_15 [i_4] [i_4] [i_4] = ((var_7 >> (14033024379185909964 - 14033024379185909955)));
                /* LoopNest 3 */
                for (int i_5 = 2; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_14 = (((5409901631841274272 ^ 0) | ((((max((arr_20 [12] [11] [i_4] [13] [11]), var_10))) ? (arr_13 [i_3 + 1] [i_5] [i_4]) : 19815))));
                                var_15 = ((((((arr_13 [i_4] [12] [i_4]) ? 18446744073709551615 : (arr_13 [i_4] [i_6] [i_4])))) && ((((arr_13 [i_4] [i_5 - 1] [i_4]) - (arr_13 [i_4] [i_5] [i_4]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
