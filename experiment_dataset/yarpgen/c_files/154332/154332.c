/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;
    var_16 = var_0;
    var_17 = var_14;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = 19504;
        arr_4 [i_0] [i_0] = -457852235;
        arr_5 [i_0] = 117;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    {
                        var_18 = (max(var_18, 107));
                        var_19 = 255;
                        var_20 = -440635369;
                    }
                }
            }
        }
        arr_17 [i_1] = -32763;
        var_21 = 142;
        var_22 = 126;
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        var_23 = -788473193;
        arr_21 [i_5] = 248;
    }
    #pragma endscop
}
