/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;
    var_18 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_19 = ((((((arr_8 [i_0] [i_3] [i_1] [i_2] [i_3]) ? 3136404894 : (arr_8 [i_0] [i_3] [i_1] [i_2] [i_3])))) ? (arr_8 [i_0] [i_3] [i_2] [i_3] [i_2]) : -27));
                            arr_9 [i_0] [i_3] [i_0] [i_2] [20] = (min(-121, 127));

                            for (int i_4 = 1; i_4 < 21;i_4 += 1)
                            {
                                var_20 = (min((arr_8 [i_0] [i_3] [i_4 - 1] [i_3] [i_3]), ((var_15 / (arr_8 [i_0] [i_3] [i_4 - 1] [i_3] [i_3])))));
                                var_21 = (min((arr_6 [i_3] [i_4] [i_4 + 2] [i_4 + 1] [i_4] [i_4 + 2]), var_10));
                            }
                            for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                            {
                                var_22 -= ((((max(((min(6144, (arr_10 [i_2])))), (max(var_9, 68))))) ? (((arr_6 [i_0] [i_1] [i_2] [i_2] [i_1] [i_5]) ? (min(var_15, 14)) : (arr_3 [9] [9] [i_3]))) : (arr_1 [i_1] [i_2])));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_5] = (min(4294967295, 12));
                            }
                            for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                            {
                                arr_17 [i_6] [i_1] [i_3] [i_3] [i_6] |= (max(-26, (var_16 == 43)));
                                var_23 = (((((min(var_9, var_8)) ? (min(var_7, var_16)) : var_12))));
                            }
                        }
                    }
                }
                arr_18 [i_0] [i_0] = ((((((max(32740, 106))) && 1)) ? (((var_15 > (arr_8 [i_0] [i_1] [i_1] [i_1] [i_1])))) : var_3));

                /* vectorizable */
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 19;i_9 += 1)
                        {
                            {
                                var_24 = (max(var_24, ((((((var_2 ? (arr_26 [i_9 + 4] [i_7] [i_1] [i_0]) : -103))) ? (arr_5 [i_1] [i_8 + 1] [i_9 + 2]) : ((2025547004 | (arr_26 [i_0] [i_1] [i_7] [i_0]))))))));
                                var_25 |= 32735;
                            }
                        }
                    }
                    arr_27 [i_0] [i_1] [i_7] = ((31750 ? -47 : -32765));
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        {
                            var_26 = var_6;
                            var_27 = ((min(((-32757 ? var_10 : var_9)), (min((arr_0 [i_0]), var_9)))));
                            arr_33 [i_0] [i_1] [i_11] [i_11] = (max((arr_30 [i_0] [i_0] [i_1] [i_10] [i_11]), (4503599627370495 - 31739)));

                            for (int i_12 = 0; i_12 < 23;i_12 += 1)
                            {
                                var_28 -= (arr_6 [0] [i_1] [i_10] [i_10] [i_11] [i_12]);
                                arr_36 [i_0] [i_1] [i_11] [i_11] [i_12] = ((~(arr_10 [i_0])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
