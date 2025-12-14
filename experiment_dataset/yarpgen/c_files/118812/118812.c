/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((var_5 && (var_1 ^ 0))))) < 0));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_11 &= ((((((((arr_2 [i_1]) ? (arr_1 [i_1] [i_1]) : var_8))) ? (!41) : (((arr_1 [i_0 + 2] [i_1]) / (arr_3 [i_1] [14] [2]))))) == (-1 - 0)));
                var_12 += ((((((((arr_1 [i_0] [i_1]) ^ (arr_3 [i_0] [0] [i_1]))) * (!41)))) ? (arr_0 [i_0]) : (((((-1642160745 ? (arr_0 [11]) : 14)))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            {
                arr_8 [i_3] [i_3] = (arr_5 [6]);
                arr_9 [i_3] = ((max((arr_7 [i_3 + 1] [i_3 - 1] [i_3 - 1]), 403131261)));
            }
        }
    }
    #pragma endscop
}
