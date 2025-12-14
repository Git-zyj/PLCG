/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 = (max((-8539 | 109), (arr_0 [8])));
                    var_13 = ((~((((arr_4 [i_1] [i_1] [i_2]) ? (arr_1 [i_2]) : -1796637385)))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_14 = (-(min(var_5, (min(-1, 8539)))));
                                var_15 += ((-(min(((((arr_11 [i_2] [i_3 - 2] [1]) ? (arr_9 [i_1] [i_1]) : (arr_3 [14] [i_3 + 1] [14])))), var_0))));
                                var_16 *= (min(var_10, -30083));
                                var_17 *= var_4;
                                var_18 += ((((!(arr_7 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 1]))) && ((!(arr_7 [12] [i_0] [i_0 - 1] [i_0] [i_0 - 1])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_19 ^= 255;
                                arr_18 [i_5] [i_5] [i_2] [i_1] [i_6] = var_11;
                            }
                        }
                    }
                    arr_19 [i_0] [i_1] [i_0] [i_2] = ((((min((((2468544838 ? (arr_13 [i_2] [i_2] [i_0] [i_0]) : 0))), ((var_3 ? 32119 : (arr_17 [i_2] [i_2] [i_1] [i_1] [i_1] [i_0] [14])))))) ? (arr_2 [i_2 - 1] [i_0 - 1]) : -var_7));
                }
            }
        }
    }
    var_20 = (!-var_9);
    var_21 = (var_2 | var_9);
    #pragma endscop
}
