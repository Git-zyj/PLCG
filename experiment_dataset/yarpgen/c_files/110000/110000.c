/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [20] [i_1] [i_0] = (((max((arr_0 [i_2 + 2] [i_0 - 2]), 30)) + (min((arr_0 [i_0 - 1] [i_0 - 3]), (arr_0 [i_0 - 1] [i_0 + 1])))));
                    arr_8 [i_2] [i_0 - 3] [i_0 - 3] [i_0] = ((!((max(((-1 ? (arr_4 [i_1]) : var_1)), var_8)))));
                    arr_9 [i_2] [i_2] [i_0 + 2] [i_0 + 2] = var_10;
                    var_14 ^= (((min(((max(var_13, (arr_3 [i_0] [i_1] [i_1])))), ((var_3 ^ (arr_3 [i_2] [i_1] [i_0]))))) + ((max(226, 122)))));
                    arr_10 [i_0] &= max((max((arr_2 [12]), (122 | 124))), (19 - 54093));
                }
            }
        }
    }
    var_15 = (var_8 | var_3);
    var_16 = var_11;
    #pragma endscop
}
