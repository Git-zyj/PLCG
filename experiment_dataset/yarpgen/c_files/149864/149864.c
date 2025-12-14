/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((0 ? 102 : 1));
        var_20 = ((((var_15 ? var_4 : var_0)) - var_13));
        var_21 = var_8;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_22 = (min(var_22, (((~((32434 ? (((max(var_4, (arr_4 [i_1]))))) : ((4294967295 ? 7814648097744119938 : 1)))))))));
        arr_6 [i_1] [i_1] = var_5;
        var_23 = (min(var_23, 1));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    {
                        var_24 = 4294967295;
                        arr_17 [i_1] = ((!(arr_16 [i_1] [i_1] [i_3] [i_4])));
                        var_25 = ((((63751 ? 7758315679145480205 : (!var_9))) ^ (~1)));
                        var_26 = ((!(arr_5 [i_1] [i_1])));
                    }
                }
            }
        }
        var_27 = ((~((-116 ? 10611 : 1))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
    {
        var_28 = var_15;
        arr_21 [i_5] = (~var_3);
        arr_22 [i_5] [i_5] = (~var_9);
        var_29 = (arr_11 [4]);
        var_30 = (max(var_30, (var_14 ^ var_8)));
    }
    var_31 = 98;
    var_32 = var_0;
    #pragma endscop
}
