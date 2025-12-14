/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_16;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_19 = (min(var_19, ((((var_4 >= var_11) >> (var_5 >= var_10))))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1] [i_0] |= (((var_3 >> (var_15 - 722649534))));
                        var_20 ^= (-3679675401926825463 >= 1445046896);
                    }
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 18;i_4 += 1)
    {
        arr_14 [i_4] [i_4] = (min((((-(var_5 % var_8)))), (min(var_14, var_4))));
        var_21 = (max(((~(var_7 % var_12))), (((var_3 < (((max(var_2, var_0)))))))));
    }
    for (int i_5 = 2; i_5 < 22;i_5 += 1)
    {
        var_22 = (max(var_22, (((((max(2849920417, 1445046892))) >= (max(-var_1, (min(0, 109)))))))));
        var_23 *= (max(70, -10304906106071910582));
    }
    var_24 = var_14;
    #pragma endscop
}
