/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_10 = (arr_0 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [21] [19] = ((((min(var_9, -8644722233688929530))) * (((arr_7 [i_1] [i_2 + 1] [3] [11]) ^ (arr_6 [1] [i_2 + 1] [14] [i_2])))));
                    arr_9 [i_1] = (arr_0 [i_0] [14]);
                }
            }
        }
    }
    var_11 *= (min(var_4, ((var_3 ? (min(var_2, var_1)) : var_0))));
    var_12 = var_4;
    #pragma endscop
}
