/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_11 == (min(((127 ? 7281734362239432 : -20897)), (((var_7 ? var_5 : var_14)))))));
    var_16 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] = var_11;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_10 [16] [i_2] [i_2] [i_0] = ((~((-(arr_0 [i_0 - 2])))));
                            var_17 = (min((arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]), (((~-1048436266) ? (arr_6 [i_1] [i_1] [i_1]) : 15143))));
                            var_18 *= ((((var_5 || var_3) ? (arr_1 [i_0 - 2]) : 281189880764441983)));
                            var_19 = ((((((!(arr_8 [i_2] [14] [i_0 + 1] [14] [1] [i_2]))))) <= (~3569800831)));
                        }
                    }
                }
                var_20 = 123712320;
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 1; i_4 < 19;i_4 += 1)
    {
        arr_14 [i_4] = -29700;
        var_21 = (min(var_21, (arr_12 [i_4 - 1])));
        var_22 += -123712320;
    }
    #pragma endscop
}
