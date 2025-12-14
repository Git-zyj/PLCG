/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_11 = (max(232, (((max((arr_0 [i_1] [i_0 + 4]), var_10)) / var_7))));
                    arr_11 [i_0] [i_2] = (arr_5 [i_1 + 1]);
                }
            }
        }
    }
    var_12 = ((var_10 ? (((min(var_7, var_10)) | 24)) : var_8));
    #pragma endscop
}
