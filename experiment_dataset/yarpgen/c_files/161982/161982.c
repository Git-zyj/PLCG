/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_10 = (((((max(var_5, -112)))) ? (max((!var_5), 4194303)) : (max(((var_0 ? var_9 : 3)), ((-2941 ? var_1 : 1))))));
        var_11 = (((((4294967289 >> (var_0 - 1633511400)))) ? 12 : 67));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = ((((min(65532, (~24)))) ? (~var_1) : (~65523)));
        arr_6 [i_1] &= var_8;
        var_12 = (!var_2);
        var_13 = (min(var_13, 65533));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
    {
        arr_9 [0] = 15621;
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        arr_20 [11] [11] [11] [i_5] = (~0);
                        var_14 = 23060;
                        arr_21 [i_2] [i_3] [i_3] [i_5] = var_9;
                        var_15 = (3 || var_6);
                    }
                }
            }
        }
        var_16 = var_1;
    }
    var_17 = var_5;
    var_18 = var_3;
    #pragma endscop
}
