/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 ^= (min(((var_4 ? (arr_1 [i_0]) : 57209)), (arr_2 [i_0])));
        var_16 += (max(32768, var_4));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_0] [i_0] [7] = 9;
                        arr_11 [i_3] [i_2] [i_0] [i_0] [i_0] = (((((min(13, (arr_1 [i_0]))))) % ((min((arr_2 [i_0]), var_2)))));
                        var_17 = (min(var_17, (((((var_10 ? 54 : 10993897047624058501) * (arr_1 [i_0])))))));
                    }
                }
            }
        }
    }
    var_18 = var_3;
    var_19 = var_1;
    #pragma endscop
}
