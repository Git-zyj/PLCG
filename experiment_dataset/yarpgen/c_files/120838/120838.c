/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_15 = (((arr_2 [i_0 + 1]) <= (arr_2 [i_0 + 1])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        arr_9 [i_0] [i_1] [i_0] [i_1] [i_3 - 1] = ((-1 ? (arr_8 [i_2] [i_1] [i_1 + 1] [i_3 + 2] [i_0 + 1] [4]) : var_0));
                        arr_10 [i_1] [i_2] [i_1 + 1] [i_1] = 0;

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            var_16 += ((!(~1)));
                            var_17 = 1;
                            var_18 = ((1 ? (arr_1 [i_3 + 3]) : (arr_1 [i_3 - 1])));
                            var_19 = ((arr_1 [i_3]) ? var_5 : (((arr_1 [i_0]) ^ (arr_12 [i_0] [3] [i_1] [i_3] [1] [i_3]))));
                            var_20 = (((arr_2 [i_0]) ? (arr_2 [i_0 + 1]) : (arr_2 [i_2])));
                        }
                        for (int i_5 = 3; i_5 < 15;i_5 += 1)
                        {
                            arr_18 [15] [i_1] [i_2] [1] [i_1] [i_0 + 1] = ((~var_10) ? (arr_11 [1] [i_1 + 1] [i_2] [i_3] [i_5 + 2] [0] [i_2]) : 1);
                            var_21 &= var_3;
                        }
                        for (int i_6 = 1; i_6 < 13;i_6 += 1)
                        {
                            arr_23 [i_0 + 1] [i_6 + 2] [i_2] [i_3] [1] [i_3] [i_1] = (((arr_8 [i_6 + 1] [i_6 + 2] [i_6 + 1] [i_6] [i_6] [i_6 - 1]) || 0));
                            var_22 = -1;
                            var_23 = (var_0 ? (arr_1 [i_1 + 1]) : (arr_12 [i_0 + 1] [i_1] [i_1] [i_3] [i_6] [1]));
                        }
                    }
                    var_24 = -1;
                }
            }
        }
        var_25 = (((arr_2 [i_0 + 1]) << (arr_12 [i_0] [i_0] [1] [i_0 + 1] [8] [12])));
        var_26 = (((arr_15 [1] [i_0 + 1]) << (((arr_20 [i_0 + 1] [i_0] [i_0 + 1] [4] [i_0]) - 999358943322047371))));
        arr_24 [1] [i_0] = 1;
    }
    var_27 = ((+(max((1 >> var_10), (var_10 ^ 17900078857032825923)))));
    #pragma endscop
}
