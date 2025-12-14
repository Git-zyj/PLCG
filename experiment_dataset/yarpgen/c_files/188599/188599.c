/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] = var_12;
                    var_18 = (max(var_18, (((((8 ? var_14 : ((var_1 ? 4294967295 : (arr_2 [i_0] [6] [i_2]))))) ^ (~-701873102256031525))))));
                }
            }
        }
    }
    var_19 = (min(var_14, (min(var_15, (((var_7 << (var_2 - 55680))))))));

    /* vectorizable */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        arr_11 [i_3] &= (arr_6 [18] [i_3] [i_3]);
        var_20 = -var_8;
    }
    #pragma endscop
}
