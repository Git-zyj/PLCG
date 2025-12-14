/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;

    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        var_12 ^= (((((var_2 ? -1935687719 : var_9))) ? ((((((arr_0 [i_0] [i_0]) ? 1935687711 : 1935687711)) < (arr_3 [i_0 + 1])))) : ((max((arr_3 [i_0 - 3]), (((244633210 || (arr_2 [1])))))))));
        arr_4 [1] = 2505983088;
        arr_5 [i_0] = (((((1055672817 ? 1 : (arr_0 [i_0 + 1] [i_0 + 1])))) ? (arr_0 [i_0 - 2] [i_0]) : (~var_0)));
        arr_6 [i_0] [i_0 - 3] = (arr_0 [i_0 - 2] [i_0 + 1]);
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 20;i_4 += 1)
                {
                    {
                        var_13 = (min(var_13, (arr_13 [i_1] [7])));
                        var_14 *= (min((!var_3), (arr_9 [i_1])));
                    }
                }
            }
        }
        var_15 = ((~(max(var_9, (arr_8 [i_1])))));
    }
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                {
                    arr_26 [1] [i_6] [i_7] [i_7] = (((1935687691 | (min(var_7, var_3)))));
                    var_16 = (max(var_16, ((~((~(max((arr_11 [i_7]), 9943198706800970426))))))));
                }
            }
        }
    }
    var_17 = (((-2147483647 - 1) ? var_6 : -var_3));
    #pragma endscop
}
