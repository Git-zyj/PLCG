/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 = (((((var_15 ? var_3 : var_9))) ? 76 : (!var_4)));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_19, (((98 ? (arr_3 [i_0] [i_1] [i_4]) : var_0)))));
                                arr_15 [i_0] [i_0] [i_0] [12] [i_0] [i_0] = (((((var_5 ? var_4 : 3148987312))) ? var_10 : (!var_3)));
                                var_20 = (min(var_20, (((53642 ? 15131 : 202)))));
                                var_21 = (max(var_21, var_5));
                            }
                        }
                    }
                }
            }
        }
        arr_16 [i_0] [i_0] = (((~228) ? var_7 : 60621));
        arr_17 [i_0] = 5879663;
        arr_18 [i_0] [i_0] = ((var_13 ? (var_10 ^ 43982) : (arr_14 [i_0] [i_0])));
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
    {
        arr_22 [12] [i_5] |= (((((((arr_11 [i_5] [i_5] [4] [i_5] [i_5] [i_5]) && (arr_9 [i_5] [16] [i_5] [i_5]))))) > (((arr_12 [10] [10]) ? (arr_3 [i_5] [i_5] [i_5]) : ((37489 ? 4114671476 : var_13))))));
        var_22 = (arr_1 [i_5]);
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
    {
        var_23 = var_7;
        arr_27 [i_6] = arr_1 [6];
    }
    var_24 = ((((min((max(var_11, var_3)), (var_17 + var_6)))) ? ((-99 ? 172 : -1)) : var_17));
    var_25 = (max(var_25, 2086316891));
    #pragma endscop
}
