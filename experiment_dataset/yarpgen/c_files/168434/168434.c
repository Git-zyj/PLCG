/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += (!var_7);

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 14;i_3 += 1)
                {
                    {
                        var_12 = 11;
                        var_13 += ((((max(var_9, var_10) * var_0))));
                        var_14 = (((~var_7) % var_7));
                    }
                }
            }
        }
        var_15 = ((+(((~var_1) ? var_0 : ((var_7 ? var_2 : var_3))))));
        var_16 ^= (max(var_5, 1));
        var_17 -= ((var_8 % (~127)));
        var_18 |= (((var_0 && (arr_10 [i_0 - 1] [1] [i_0] [i_0 + 1] [1] [i_0]))));
    }
    #pragma endscop
}
