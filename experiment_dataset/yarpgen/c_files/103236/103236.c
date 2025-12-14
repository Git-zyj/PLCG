/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_11 = ((((~((max((arr_0 [i_0]), (arr_6 [i_0])))))) - ((max((arr_3 [i_1 - 2] [i_0] [i_1 + 1]), 82)))));
                    arr_9 [22] [i_1 + 1] [i_2] &= (max(((var_3 ? (arr_7 [i_1 - 2] [i_1 - 1] [i_1 + 1] [i_1 + 1]) : (arr_6 [6]))), (~var_4)));
                    var_12 ^= (!(arr_6 [18]));
                }
            }
        }
        var_13 = (((((var_6 ? (arr_2 [i_0] [i_0]) : (arr_4 [i_0] [i_0])))) ? ((((arr_4 [i_0] [i_0]) && (arr_4 [i_0] [i_0])))) : ((var_10 ? var_6 : (arr_4 [i_0] [i_0])))));
    }
    var_14 = (max(var_14, var_9));
    var_15 = var_4;
    #pragma endscop
}
