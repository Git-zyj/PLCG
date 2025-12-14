/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_5 >= 3478157175831835126);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                arr_5 [i_0] = (~-10739);
                var_14 = (max(var_14, (((-(min(543, (arr_4 [i_0]))))))));
                var_15 = (max(var_15, (arr_0 [i_0 + 3] [i_1])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            {
                arr_13 [i_2] [i_3] |= (~65007);
                arr_14 [i_3] = (~0);
                var_16 |= ((((arr_8 [i_3]) ^ (arr_8 [i_2]))));
            }
        }
    }
    #pragma endscop
}
