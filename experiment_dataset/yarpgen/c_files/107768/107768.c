/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_17;

    for (int i_0 = 1; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_21 &= (arr_1 [i_0 - 1]);
        var_22 &= (((arr_0 [i_0 + 1] [i_0 + 1]) ? (arr_0 [i_0] [i_0 - 1]) : (~var_2)));
        var_23 = ((-((min((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1]))))));
        arr_2 [i_0] [i_0] = (((((((max(var_18, (arr_0 [i_0] [i_0])))) ? (((var_0 <= (arr_1 [i_0])))) : (arr_1 [i_0])))) ? ((((9942 && (((var_19 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))))))) : (max((arr_1 [i_0 + 1]), (max((arr_0 [2] [i_0]), var_18))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_24 = (arr_0 [i_1] [i_1]);

        for (int i_2 = 4; i_2 < 13;i_2 += 1)
        {
            var_25 = var_5;
            arr_9 [14] [i_1] [14] |= var_6;
        }
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            var_26 = ((!(arr_4 [i_1 + 1])));
            var_27 = ((((~(arr_4 [i_1])))) ? var_3 : (arr_4 [i_3]));
            arr_13 [i_3] = var_17;
        }
        var_28 = ((var_0 / (arr_7 [i_1])));
    }
    for (int i_4 = 1; i_4 < 15;i_4 += 1) /* same iter space */
    {
        var_29 = (min((((min(223, var_18)) != (min(var_12, var_2)))), ((!((min((arr_7 [i_4 + 1]), (arr_1 [i_4]))))))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    {
                        var_30 -= 7136181067364280135;
                        arr_25 [2] [i_5] [i_5] [i_6] [8] [i_5] |= var_5;
                        var_31 = (arr_0 [i_5] [i_7]);
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 21;i_8 += 1)
    {
        var_32 ^= ((23537 ? (((arr_28 [i_8] [i_8]) << (((max((arr_28 [11] [i_8]), (arr_26 [i_8]))) - 3824663239)))) : ((((((arr_27 [i_8]) != var_16)) ? var_9 : (!var_17))))));
        var_33 = (min(var_33, var_13));
    }
    var_34 ^= (~var_5);
    var_35 = ((!((max((var_17 + var_4), (~var_14))))));
    #pragma endscop
}
