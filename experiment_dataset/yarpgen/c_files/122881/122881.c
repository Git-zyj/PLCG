/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_20 ^= var_6;
        arr_4 [i_0] = ((var_9 ? (min((min((arr_3 [i_0]), -91)), ((min(-3066252413952508946, var_17))))) : (~1)));
        arr_5 [i_0] = -6659;
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        var_21 = (min((-32767 - 1), 24));
                        var_22 = (max(-942960227792308142, (((arr_2 [i_1 + 1]) - (arr_2 [i_1 - 3])))));
                        arr_14 [i_0] [i_2] [i_2] = (var_7 ^ -var_9);
                        var_23 = var_4;
                    }
                }
            }
        }
    }
    var_24 = (max((((!((max(var_4, var_1)))))), ((~(~var_17)))));
    var_25 = (min(var_25, ((max(((min(var_15, (var_1 / var_15)))), var_16)))));
    var_26 = var_3;
    #pragma endscop
}
