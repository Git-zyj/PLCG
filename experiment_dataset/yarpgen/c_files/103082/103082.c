/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(((max((min(var_11, var_13)), (min((-2147483647 - 1), var_0))))), ((var_2 ? var_1 : (min(var_11, var_12))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_0 + 1] [i_0] [i_2 - 3] = ((((max((arr_2 [i_0] [i_1] [i_2 - 1]), (arr_2 [i_0] [i_0 - 1] [7])))) ? ((-(arr_2 [i_0 + 1] [3] [i_2]))) : (arr_2 [i_0] [i_1] [8])));
                    var_15 = (min((((arr_7 [5] [i_2 - 1] [i_2 + 1]) ? (arr_7 [i_2] [i_2] [i_2 - 1]) : (arr_7 [i_2] [0] [i_2 + 1]))), (arr_7 [i_2] [11] [i_2 - 1])));
                    var_16 = (min((max(1, -2574412458419204593)), (min((arr_6 [8] [i_1] [i_2 - 1]), (min(13648, -2574412458419204593))))));
                    arr_10 [i_0] [i_0 - 1] [i_0 - 1] [7] = ((((((arr_8 [i_0] [i_2 + 1] [i_0]) ? (arr_4 [i_0 + 1] [i_2] [i_0 + 1]) : (arr_4 [i_2] [i_0 - 1] [i_0 + 1])))) ? (max(((-55 ? (arr_7 [i_1] [i_1] [i_0]) : 12180293530451096112)), (arr_3 [i_0 - 1] [i_0] [i_2 - 3]))) : (min((12180293530451096113 | var_12), (max(68, 6266450543258455494))))));
                    arr_11 [i_0] [i_1] [i_2 - 1] = (max((min((arr_8 [i_0] [i_2 - 3] [i_0]), -6135)), (min((arr_8 [i_0] [i_2 - 3] [i_0]), (arr_8 [i_0] [i_2 - 3] [i_0])))));
                }
            }
        }
    }
    var_17 = var_6;
    #pragma endscop
}
