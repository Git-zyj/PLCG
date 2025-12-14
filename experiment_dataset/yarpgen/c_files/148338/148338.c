/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_12;
    var_21 |= var_2;

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            var_22 = 3692889073119252435;
            var_23 -= (arr_1 [i_0] [i_0]);
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            var_24 += -var_1;
            arr_11 [i_0] [i_2] [i_0] = (arr_2 [i_0]);
        }
        for (int i_3 = 4; i_3 < 23;i_3 += 1)
        {
            var_25 = var_17;
            arr_15 [i_0] [i_0] [18] |= var_13;
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 23;i_5 += 1)
                {
                    {
                        var_26 = ((-((-((246 ? var_2 : -1329701240))))));
                        arr_21 [i_0 + 1] [i_0 + 1] [i_0] [i_5] = (arr_18 [i_3] [4] [i_0]);
                        arr_22 [i_0] [i_0] [i_0] [i_0] = ((~(!-var_16)));
                    }
                }
            }
            arr_23 [i_0] [i_0] = (arr_3 [i_0]);
        }
        var_27 |= (max((arr_3 [i_0]), (min((arr_19 [i_0] [i_0] [i_0] [i_0]), (arr_19 [i_0 + 1] [i_0] [i_0] [i_0 + 1])))));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_28 += ((((min((arr_16 [i_6] [i_6]), (arr_16 [i_6] [i_6])))) ? (arr_0 [6]) : (arr_26 [i_6])));
        var_29 = (~var_8);
        var_30 -= 11522;
        var_31 *= ((((min(-var_11, 22079))) ? ((((max((arr_8 [10]), (arr_8 [22])))) ? (((arr_10 [i_6] [i_6] [i_6]) ? var_7 : 22086)) : (min(1329701240, var_19)))) : (!var_9)));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_32 = (min(var_32, ((-(arr_27 [i_7])))));

        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            arr_32 [i_8] = ((((arr_2 [i_8]) ? (arr_3 [i_7]) : (arr_3 [i_7]))));
            var_33 *= ((+(((arr_13 [i_7] [2] [i_7]) / (arr_2 [0])))));
        }
        for (int i_9 = 1; i_9 < 10;i_9 += 1)
        {
            var_34 = var_17;
            var_35 = (arr_25 [i_9] [1]);
            var_36 = var_1;
            var_37 = ((+(((arr_10 [i_7] [i_7] [4]) ? var_3 : var_12))));
            arr_35 [i_7] [i_9] = 8;
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            var_38 = 4;
            arr_38 [i_7] [i_7] = (arr_8 [20]);
            arr_39 [i_7] [i_10] [i_10] = (arr_1 [i_7] [i_7]);
        }
        arr_40 [i_7] [i_7] = var_13;
    }
    #pragma endscop
}
