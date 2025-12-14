/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_12 ? var_5 : (var_6 - var_10)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_15 = (max(var_15, (((126 ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0]))))));
        arr_2 [i_0] = ((arr_1 [i_0]) < var_5);
        var_16 *= ((1 ? var_3 : (arr_1 [i_0])));
        var_17 = 126;
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_6 [i_1] = ((!((max(var_3, 110)))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 22;i_3 += 1)
            {
                {
                    var_18 -= (min(var_6, (((arr_5 [i_2]) ? (arr_5 [i_1]) : var_5))));
                    var_19 &= var_12;
                    var_20 = (max((((!-127) ? var_2 : ((-126 ? -126 : 98036846)))), (((arr_8 [2] [i_1] [i_3 - 2]) ? 126 : -var_9))));
                }
            }
        }
        arr_11 [i_1] = ((((min(0, (min(var_10, (arr_3 [i_1])))))) || ((min((arr_3 [i_1]), var_7)))));
        arr_12 [i_1] [i_1] = (min(((var_6 ? (arr_9 [i_1]) : (arr_9 [i_1]))), (min((arr_9 [i_1]), var_7))));
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        var_21 = (-((((!126) <= 109))));
        arr_16 [i_4] = var_5;
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        var_22 &= ((~(!0)));
        var_23 = (min(var_23, (arr_8 [i_5] [6] [i_5])));
        var_24 = (max(var_0, (((11704573432315272953 ? var_2 : var_1)))));
        arr_20 [i_5] [i_5] = (arr_18 [i_5]);
    }
    var_25 = var_6;
    var_26 = (min(var_26, (((!((max(var_2, (min(45, var_7))))))))));
    #pragma endscop
}
