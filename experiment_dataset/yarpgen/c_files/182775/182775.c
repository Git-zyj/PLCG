/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_8 [i_0] = (var_8 ? (arr_4 [i_0] [i_0] [i_0]) : -6469509008601506867);
            arr_9 [i_0] = var_4;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {
                    {
                        var_13 = (min(var_13, (((var_2 ? 112 : var_10)))));
                        var_14 = (max(var_14, (((14173843037376068396 ? 141 : 13978368974410636338)))));
                        var_15 -= (((((var_12 ? (arr_6 [i_0]) : var_6))) ? (arr_10 [i_0] [i_3 + 1]) : 13));
                        var_16 = (max(var_16, (((arr_4 [10] [i_3 + 1] [10]) ? 65499 : (arr_12 [i_3 - 1] [i_3 + 1])))));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        {
                            arr_21 [i_0] [i_1] = ((var_10 ? (arr_18 [i_0] [i_1] [i_5] [i_6]) : (((arr_18 [i_6] [i_4] [i_1] [i_0]) ? (arr_6 [2]) : 140))));
                            var_17 = (((((var_12 ? var_6 : var_0))) ? (((-4432770836321139518 ? -8 : 65523))) : 13997564025240428325));
                            var_18 = (((arr_15 [i_0]) ? 7168 : (arr_7 [i_0] [i_6])));
                            var_19 -= ((54296 ? -8508625143495959011 : (arr_2 [i_5])));
                        }
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            arr_25 [8] &= (((!var_3) ? ((6 ? var_6 : var_0)) : ((((arr_4 [i_0] [i_7] [6]) ? 112 : -9941)))));
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 12;i_9 += 1)
                {
                    {
                        var_20 = (((((~(arr_28 [i_9 + 1])))) ? (~123) : ((var_1 ? (arr_28 [i_9 + 1]) : var_4))));
                        arr_32 [i_0] [i_0] [i_0] [2] = ((!(((+(((arr_13 [i_0] [i_9] [i_9] [i_8] [i_0] [i_0]) ? (arr_13 [i_0] [i_0] [i_8 + 1] [i_0] [i_0] [i_0]) : var_4)))))));
                    }
                }
            }
            var_21 ^= ((!(((var_8 ? 199 : (arr_15 [i_0]))))));
        }
        var_22 = (min(var_22, ((((((var_11 ? (arr_30 [10]) : (arr_2 [i_0])))) ? ((((arr_2 [i_0]) ? var_4 : 226))) : ((~(arr_2 [i_0]))))))));
    }
    var_23 &= (((((var_10 ? var_2 : (((148 ? var_12 : -29516)))))) ? var_0 : ((var_7 ? var_6 : var_3))));
    #pragma endscop
}
