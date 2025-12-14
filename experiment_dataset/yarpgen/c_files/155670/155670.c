/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(((max((0 / 1), 366))), (((var_5 ? 22802 : var_4)))));
    var_13 = (max(var_13, ((max(((((-27649 ? (-127 - 1) : -115)) | ((27663 << (27646 - 27632))))), -27647)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 9;i_3 += 1)
                {
                    {
                        arr_12 [1] [i_2] [i_1] [i_0] = (((-115 > -38) & 2147483642));
                        var_14 = (max(var_14, (((var_11 ? 103 : -107303520)))));
                        arr_13 [i_0] [i_1] [i_2] [i_3] = var_2;
                        var_15 *= var_4;
                        var_16 = (!var_6);
                    }
                }
            }
        }
        var_17 = (max(var_17, (((32741 >> (-27664 + 27693))))));
        arr_14 [i_0] [i_0] = (0 ? -13959 : -32727);
        var_18 = ((!(arr_10 [i_0])));
    }
    #pragma endscop
}
