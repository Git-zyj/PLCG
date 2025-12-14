/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 19082;
    var_21 = (min(var_21, (((((!((max(var_14, 2140525176))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_0] [i_0] = (((((~((var_8 ? var_8 : 55094))))) ? ((((var_18 > 55094) ? (~33649) : ((var_6 ? 22750 : 37834))))) : (min((4294967283 / 10442), 55094))));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_22 += ((((var_15 ? 10463 : var_16))));
                        arr_11 [i_0] [1] [i_1] [i_3] = (~2047);
                        arr_12 [i_1] = var_4;
                    }
                }
            }
        }
    }
    var_23 = (min(var_23, ((((((-5331 ? 1 : 1))) ? (((((max(var_8, var_9)) < var_8)))) : ((((min(55078, var_19))) ? ((4545058526180196551 ? 13 : 9223372036854775807)) : 63493)))))));
    #pragma endscop
}
