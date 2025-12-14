/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [0] [11] [i_3] = ((-117 & ((116 ? (arr_7 [0] [i_1] [i_2 + 1] [i_0]) : 2922125274))));
                            arr_12 [i_0] [i_1] [i_0] [i_0] [i_3] = 528482304;
                            var_12 = (max(var_12, ((((((~(((!(arr_1 [i_0]))))))) ? ((~(var_4 / var_4))) : ((((-117 != var_4) == var_7))))))));
                        }
                    }
                }
                var_13 = (max(var_13, var_11));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_14 = ((-(!1372842034)));
                                var_15 = var_8;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        {
                            arr_26 [i_0] [i_0] [i_8] = ((-((min(-31, (arr_21 [i_0] [i_1] [14] [i_8] [i_1] [i_1] [i_1]))))));
                            var_16 = -var_1;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_9 = 3; i_9 < 17;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 15;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 18;i_11 += 1)
                        {
                            {
                                arr_35 [i_0] [i_1] [i_9] [i_0] [i_11] [i_1] [13] = ((!(arr_1 [i_0])));
                                var_17 = (((((var_1 + (!var_2)))) ? ((-var_6 | (max(-6937861262174881195, var_6)))) : (var_4 | 2895460950)));
                                var_18 *= (arr_16 [i_1] [16] [i_1]);
                                arr_36 [i_0] [i_1] [i_1] [1] [11] [i_11] [i_11] = ((var_1 ^ (var_2 * 0)));
                                arr_37 [i_0] = 26;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 14;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 14;i_14 += 1)
            {
                {
                    arr_48 [i_14] [i_14] [i_14] = (((min(((var_6 ? (arr_7 [i_12] [i_13] [i_14] [i_14]) : var_9)), var_7)) ^ var_5));
                    arr_49 [i_12] [2] = (((min(var_6, var_9))));
                }
            }
        }
    }
    #pragma endscop
}
