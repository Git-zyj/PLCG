/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -1328519702;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_13 = (max(var_13, ((((var_7 ? var_4 : 94))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_14 = var_3;
                        var_15 = 122880;
                        var_16 = (max(var_16, var_6));
                        arr_10 [i_0] [i_1] = var_10;
                    }
                }
            }
        }
    }
    var_17 = (min(var_6, 117440512));
    #pragma endscop
}
