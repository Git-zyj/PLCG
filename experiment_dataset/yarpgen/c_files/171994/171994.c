/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_11 = (max(var_11, (((-(max((arr_0 [i_0] [i_0]), ((-(arr_3 [i_1] [i_1] [i_2]))))))))));
                    arr_7 [i_2] [i_2] [i_1] [i_1] = (arr_5 [i_0] [i_1] [i_2]);
                }
            }
        }
    }
    var_12 = var_10;
    #pragma endscop
}
