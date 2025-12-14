/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= (max(var_3, (((((var_6 ? var_0 : var_6))) ? var_3 : var_3))));
    var_12 *= var_10;
    var_13 = (~-60);

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_14 = (max(var_14, ((((((8191 ? 0 : 0))) ? ((~(~var_4))) : ((((max(var_5, var_6))))))))));
        arr_3 [i_0] = ((((((var_6 ? var_8 : var_3))) ? ((var_10 ? var_10 : var_5)) : var_6)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 23;i_4 += 1)
                {
                    {
                        arr_15 [i_1] [i_2] [i_3] [i_2] [i_1] [i_1] = (((var_7 << (var_4 - 2477400524))));
                        var_15 = (min(var_15, (((var_2 ? (!var_6) : -1257207858)))));
                        var_16 = ((var_3 >> ((var_9 ? var_5 : var_8))));
                        arr_16 [i_4 - 1] [i_2] [i_3] [i_4] [1] = (!(((var_1 ? var_3 : var_0))));
                    }
                }
            }
        }
        arr_17 [i_1] = 1477419464604863704;
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
    {
        arr_22 [i_5] [i_5] = ((!((((max(var_1, var_5)))))));
        arr_23 [i_5] [i_5] = var_10;
    }
    #pragma endscop
}
