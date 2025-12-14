/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] = (max(-93, (((2464457122696908659 ? (arr_1 [i_0]) : (arr_3 [i_1] [i_1] [i_1 - 1]))))));
                arr_6 [6] [22] [i_1] &= ((!((max((arr_3 [2] [i_1 - 1] [i_1 - 1]), var_9)))));
            }
        }
    }
    var_12 = (max(var_12, var_11));
    var_13 &= min(var_11, var_6);
    var_14 ^= (-9223372036854775807 - 1);
    #pragma endscop
}
