/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_2] = (min(((max(var_16, ((-(arr_5 [i_0] [i_2] [i_2])))))), (arr_2 [i_0])));
                    var_19 ^= (arr_6 [i_0] [i_1] [i_0] [0]);
                }
            }
        }
    }
    var_20 = (~var_10);
    var_21 = var_8;
    #pragma endscop
}
