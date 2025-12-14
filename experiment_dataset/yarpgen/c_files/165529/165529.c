/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_11 = var_7;
                    var_12 ^= ((-(!0)));
                }
            }
        }
    }
    var_13 ^= var_9;
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 11;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        var_14 -= (min((((arr_7 [i_5 + 4]) ? 8833423971764889707 : (!-11054))), 145));
                        var_15 = (max(var_15, ((((-(((arr_11 [1] [2] [i_4]) - 10586139799754284155))))))));
                        var_16 = (min(var_16, (((var_6 ? ((~(arr_13 [i_3] [i_6] [i_5 + 4] [8]))) : (((arr_13 [i_3] [i_6] [i_5 + 4] [14]) ? (arr_13 [10] [i_6] [i_5 + 2] [i_6]) : (arr_13 [i_3] [i_6] [i_5 - 1] [i_6]))))))));
                    }
                    var_17 = (min(var_17, 5841590144558105553));
                    arr_15 [i_3] [6] [i_5] = (((((arr_13 [i_5 + 2] [i_3] [i_3] [i_3]) - (arr_13 [i_3] [i_3] [i_5 + 1] [i_3]))) * (((((-(arr_7 [i_3]))) > (~var_5))))));
                    var_18 -= (((arr_13 [i_5 - 1] [i_4] [i_4] [i_3]) ? (max((arr_10 [i_5 + 2] [i_5 + 4] [7]), (arr_14 [i_4] [i_4] [12] [8] [2] [i_4]))) : 45861));
                    var_19 = (min(var_19, (!170)));
                }
            }
        }
    }
    #pragma endscop
}
