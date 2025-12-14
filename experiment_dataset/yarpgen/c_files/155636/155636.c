/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_4 [i_0] = arr_2 [4];
        arr_5 [i_0] = var_4;
        var_17 = (arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                {
                    var_18 = arr_2 [i_1];
                    var_19 = (min(var_19, ((((arr_6 [i_2 - 1] [1]) ? (arr_6 [i_2 + 3] [i_2]) : var_4)))));
                    arr_10 [i_0] = ((+(((arr_0 [i_0 - 1]) ^ var_14))));
                }
            }
        }
    }
    var_20 = var_2;
    var_21 += var_7;
    #pragma endscop
}
