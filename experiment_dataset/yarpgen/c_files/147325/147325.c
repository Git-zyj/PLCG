/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_2 [5] = ((-(arr_1 [i_0 + 1] [i_0 + 1])));
        arr_3 [i_0] [i_0] = 57358;
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_10 = (min(var_10, var_8));
        var_11 = (max(var_11, var_4));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 18;i_3 += 1)
        {
            {
                var_12 = 57360;
                var_13 += ((((~(max(var_5, (arr_8 [8] [0]))))) | 57360));
                arr_13 [i_2] [i_2] = 1;
            }
        }
    }
    var_14 = (!46939);
    #pragma endscop
}
