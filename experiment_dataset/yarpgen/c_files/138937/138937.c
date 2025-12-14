/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((255 | 235) ? var_9 : var_3)));
    var_14 = (((((17380536355693415982 ? (~var_6) : var_7))) || var_1));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 = (((((0 ? ((((arr_0 [i_0 + 3]) >= (arr_4 [i_0 + 2] [14] [0])))) : (arr_4 [i_0 + 3] [i_0 + 1] [i_0 + 4])))) ? -7 : (min(var_0, (min((arr_1 [i_0]), (arr_0 [i_2])))))));
                    arr_7 [i_0 + 3] [i_1] [i_0] [i_0] = var_3;
                    arr_8 [i_0] [i_1] [i_1] = (min((arr_1 [i_1 - 1]), 8496479439630884355));
                }
            }
        }
    }
    var_16 = var_7;
    #pragma endscop
}
