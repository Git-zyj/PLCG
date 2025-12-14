/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= var_3;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_11 = (arr_9 [i_0] [i_0] [5] [i_2]);
                    arr_10 [i_2] = ((~(arr_2 [i_0])));
                }
            }
        }
    }
    var_12 = var_3;
    var_13 = ((min(((-10131 ? var_8 : var_4)), var_8)) | var_2);
    #pragma endscop
}
