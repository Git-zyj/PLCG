/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((max(1, 16777216))) ? (max(((min(var_2, var_0))), (~var_4))) : ((min(var_0, (~var_5)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_15 = ((min((arr_0 [i_0 + 2]), var_0)));
                    var_16 = (arr_1 [i_0 + 1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_16 [i_3] [11] = (arr_5 [i_2] [i_4]);
                                var_17 ^= (max(var_1, (arr_12 [i_4 - 1] [i_1 + 1] [i_0 + 2])));
                                var_18 = (arr_8 [i_0] [i_2 + 1] [13] [1]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 10;i_6 += 1)
                        {
                            {
                                arr_23 [i_0 + 1] [1] [8] [i_1] = ((arr_14 [i_0 - 1] [i_2 + 1]) ? (arr_12 [i_0 + 1] [i_1] [i_2 + 1]) : (arr_7 [i_2 - 1] [i_2 - 1] [i_2 - 1]));
                                arr_24 [i_2] [i_2] = ((((max(var_10, (arr_6 [i_0])))) ? (arr_13 [i_6 + 1] [i_5] [i_2 - 1] [3] [i_0 - 2]) : (max(((var_8 | (arr_1 [10]))), (~1)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 *= var_6;
    #pragma endscop
}
