/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [7] = ((-(arr_0 [i_0] [i_0 - 1])));
                    arr_9 [i_0] [3] [i_1 + 1] [i_0] = (~var_0);
                    var_11 = (arr_7 [i_0 - 2]);
                    var_12 = ((((377754076 ? (arr_7 [i_1]) : (arr_6 [i_0] [1] [i_1 + 2] [1])))));
                    var_13 = (((arr_1 [11]) & (((arr_7 [i_1]) ? (arr_1 [i_0]) : (max((arr_1 [9]), (arr_3 [5])))))));
                }
            }
        }
        var_14 += (((-var_6 ^ var_8) * (arr_7 [i_0])));
    }
    #pragma endscop
}
