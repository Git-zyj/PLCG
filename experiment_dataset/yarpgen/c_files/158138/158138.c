/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_2] [i_2] = ((~(arr_6 [i_0] [i_0])));
                    arr_8 [i_2] [i_1] [i_2] = (min((max((arr_0 [i_0]), (((12288 ? 136323103 : var_7))))), (((!((max(var_10, 65176))))))));
                    arr_9 [i_2] [i_2] [i_2] = (arr_3 [16] [i_1] [16]);
                }
            }
        }
    }
    var_11 = var_10;
    var_12 ^= var_3;
    var_13 = var_7;
    #pragma endscop
}
