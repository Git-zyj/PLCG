/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= (max(var_2, var_6));
    var_13 = (max(var_0, (var_8 && var_8)));
    var_14 = (!((min(var_1, 26216))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_10 [i_3] [i_2] [i_1] [5] = (arr_7 [i_0] [0] [i_0] [2] [i_0]);
                        arr_11 [i_0] [14] [i_2 - 3] [i_3] = var_7;
                        arr_12 [i_3] [i_2] [i_0] [i_0] = (((39319 ? 39319 : 1)));
                    }
                }
            }
        }
        var_15 *= ((39320 ? 4130447991099495644 : 80));
    }
    var_16 = var_9;
    #pragma endscop
}
