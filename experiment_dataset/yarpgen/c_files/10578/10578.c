/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= ((((min(((131 ? 0 : var_0)), var_8))) ? var_3 : (((((min(var_7, -16384))) ? var_3 : var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [0] [0] = (max(var_4, ((((arr_1 [i_0 - 2]) ^ (arr_1 [i_0 + 1]))))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
                {
                    arr_10 [i_0] [i_0] [3] = (min((arr_2 [i_0 - 4] [i_1 - 3]), ((((arr_2 [i_0 + 1] [i_1 - 3]) % (arr_2 [i_0 - 2] [i_1 - 2]))))));
                    var_20 = (((((min((arr_7 [i_0 - 3] [i_0 - 3] [i_1 - 3]), (arr_7 [i_0 + 2] [i_1] [i_1 - 3]))))) & (((arr_9 [i_0] [i_0 - 1] [i_1 - 2]) * (arr_9 [i_0] [i_0 - 1] [i_1 - 1])))));
                    arr_11 [i_0] = (113 <= -var_5);
                    var_21 = (arr_9 [i_0] [i_1] [1]);
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                {
                    arr_14 [i_0] [i_0] [i_1] [i_3] = -31193;
                    arr_15 [i_0] [i_1] [i_3] = (!((((((15948214188209792083 ? -2572145465725531879 : var_14))) | (min(var_11, var_4))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 16;i_5 += 1)
                        {
                            {
                                var_22 = arr_21 [1] [11] [11] [1] [i_5];
                                arr_22 [i_0] [5] [i_5 - 3] = 73;
                                var_23 = (((((arr_0 [i_1 + 1] [i_1 - 4]) ? (arr_0 [i_1 + 1] [i_1 - 4]) : (arr_0 [i_1 - 2] [i_1 - 2])))) % ((var_3 ? var_10 : var_11)));
                            }
                        }
                    }
                }
                for (int i_6 = 2; i_6 < 14;i_6 += 1)
                {
                    var_24 = ((!(arr_16 [i_6 + 4] [i_1 + 1] [i_1] [i_0 - 1] [2])));
                    var_25 = (max((arr_24 [i_6] [i_1 - 2] [i_6]), 143));
                    arr_25 [i_0] [i_0] |= (max(((((31193 / (arr_17 [i_0] [i_0] [i_0] [i_6] [i_6] [i_6]))))), (((-32767 - 1) ^ 2572145465725531878))));
                }
                for (int i_7 = 4; i_7 < 16;i_7 += 1)
                {
                    arr_29 [i_0] [i_1] [i_7] = 38126;
                    arr_30 [i_1] = (((((min(var_6, (arr_9 [i_1] [i_1] [i_1]))) <= (arr_16 [i_7 - 4] [i_1 + 1] [i_1 - 2] [i_0 - 1] [i_0]))) ? (arr_16 [14] [14] [i_1] [1] [i_0]) : (((((arr_7 [i_0] [i_0] [i_0]) ^ (arr_20 [1] [i_1] [1] [i_7] [i_1] [i_1])))))));
                    var_26 = (max(var_26, ((max((((arr_23 [i_0 - 2] [i_0 - 2] [i_1] [i_7 - 1]) & (min(var_6, 143)))), ((min(((136 ? 2572145465725531879 : 146)), 549755813887))))))));
                }
                var_27 += ((-(max(((141 ? (arr_0 [i_0] [i_1]) : 4294967295)), var_16))));
            }
        }
    }
    var_28 = var_6;
    /* LoopNest 3 */
    for (int i_8 = 1; i_8 < 1;i_8 += 1)
    {
        for (int i_9 = 3; i_9 < 19;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                {
                    var_29 = ((-((4753981448810710656 * (((arr_33 [i_9] [i_10]) * 0))))));
                    var_30 -= ((max((arr_37 [i_8 - 1] [13] [13] [i_10]), ((7 ? 306631294 : (arr_36 [i_9] [i_9]))))) & ((var_4 ? (arr_34 [i_9 + 1] [i_9 - 3] [i_9 - 1]) : (arr_33 [i_9 - 1] [i_8 - 1]))));
                }
            }
        }
    }
    #pragma endscop
}
