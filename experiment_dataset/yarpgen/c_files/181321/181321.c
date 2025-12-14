/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_17 = (min(var_17, (arr_0 [i_0] [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_0] [i_2] &= (((((arr_4 [18]) ? (arr_1 [i_3]) : -101)) ^ (((arr_6 [i_0] [i_2] [i_3]) ^ (arr_6 [i_3] [i_3] [i_3])))));
                        var_18 = (min(var_18, ((max(((((arr_1 [i_2]) >> var_4))), -4944749723059426948)))));
                        var_19 = (min(var_1, (((arr_8 [i_3] [i_0] [i_2] [i_2] [i_1] [i_0]) ? (arr_7 [i_2] [i_2] [i_1] [i_2]) : var_11))));
                        var_20 -= 1;
                    }
                }
            }
        }
    }
    var_21 = var_13;
    var_22 |= ((var_8 ? ((var_5 ? var_3 : var_15)) : (var_12 <= var_10)));
    #pragma endscop
}
