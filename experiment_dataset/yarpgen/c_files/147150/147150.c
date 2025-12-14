/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_17 = (min(var_17, (arr_1 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_18 = (((arr_7 [i_3] [i_2] [i_1] [i_3]) ? (arr_4 [i_0] [i_1] [23] [i_3]) : (arr_5 [i_3])));
                        var_19 = (max(var_19, (!var_9)));
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 24;i_4 += 1)
                    {
                        var_20 = var_0;
                        var_21 = (arr_0 [i_2]);
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_22 ^= ((~(((arr_0 [i_0 + 2]) ? (arr_3 [i_0 - 2]) : (arr_0 [i_0 - 2])))));
                                var_23 -= ((!(arr_2 [i_6 - 1])));
                            }
                        }
                    }
                    arr_15 [i_0] = ((((min((arr_0 [i_1 - 2]), var_8))) && ((((min(var_3, (arr_9 [i_0 + 2] [i_1] [0] [i_2] [14])))) && (arr_13 [i_0 - 2] [i_0 + 1] [i_0] [i_0 + 3] [i_1 - 1])))));
                }
            }
        }
        var_24 |= var_4;
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 20;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        {
                            var_25 = (((!var_0) ? (~var_0) : (((((min(12088, var_3))) + var_6)))));
                            var_26 |= (min(-51, (((-112 + 2147483647) << (6923961104277979734 - 6923961104277979734)))));
                        }
                    }
                }
                var_27 = (max(1, (max(var_2, var_5))));
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 19;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 1;i_12 += 1)
                    {
                        {
                            var_28 = arr_5 [i_12];
                            arr_32 [i_8] [i_11] = ((min((2721981845339903130 || 117), var_12)));
                            arr_33 [18] [i_11] [14] [14] |= ((((min((((arr_17 [1] [i_8]) & 1)), ((var_2 ? var_13 : 44513))))) ? var_5 : ((min(var_14, (arr_3 [i_8]))))));
                        }
                    }
                }
                var_29 = (i_8 % 2 == zero) ? (((((min((((var_1 >= (arr_26 [1] [i_8] [i_8] [i_7])))), (min(var_6, var_7))))) ? (((var_9 >> (((arr_18 [i_8 - 2] [i_8] [i_8]) + 4639458182853422492))))) : ((var_16 & (arr_18 [i_7] [i_8] [i_8])))))) : (((((min((((var_1 >= (arr_26 [1] [i_8] [i_8] [i_7])))), (min(var_6, var_7))))) ? (((var_9 >> (((((arr_18 [i_8 - 2] [i_8] [i_8]) + 4639458182853422492)) + 944964073518230558))))) : ((var_16 & (arr_18 [i_7] [i_8] [i_8]))))));
            }
        }
    }
    #pragma endscop
}
