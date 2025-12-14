/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((31598 ? ((74 ? 239 : 18570)) : var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
                {
                    var_12 ^= 1;
                    arr_7 [i_1] = (arr_2 [i_0] [i_1] [i_2]);
                    arr_8 [i_0] [22] &= (((((var_2 << (arr_5 [i_0] [1] [14] [i_0])))) ? (arr_2 [17] [i_1] [i_2]) : (((arr_0 [6]) / (arr_2 [i_0] [i_1] [i_2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_13 = (arr_2 [i_0] [24] [24]);
                                arr_14 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = var_7;
                                arr_15 [18] [i_1] [12] [16] [i_4] = (((((arr_3 [i_1]) & (arr_5 [i_0] [i_1] [i_1] [i_4]))) & 4294967295));
                                arr_16 [i_4] [i_4] |= (var_1 ? 1 : var_4);
                                var_14 = ((4 ? 0 : 244));
                            }
                        }
                    }
                    arr_17 [i_0] [i_1] [i_1] = (arr_10 [i_2] [i_1] [i_1] [i_1] [i_1] [i_0]);
                }
                for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                {
                    arr_22 [i_0] [i_1] [i_5] [i_1] = 4701756805590588856;
                    arr_23 [i_0] [1] [i_0] [i_1] = (arr_18 [i_0] [i_1] [i_5]);
                    arr_24 [i_1] = (arr_19 [i_0] [i_1]);
                }
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    var_15 = -16752;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            {
                                arr_32 [i_1] [i_0] [i_6] = ((((1 ? 0 : 29416)) | 17));
                                arr_33 [i_0] [1] [i_1] = (arr_28 [3] [i_1] [i_6] [i_7] [i_1] [i_6]);
                                var_16 = ((2909377625 < (arr_20 [i_1] [i_1] [16])));
                                arr_34 [i_1] = 10939745194357063421;
                            }
                        }
                    }

                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        arr_37 [i_1] = (arr_31 [i_0] [21] [i_1] [i_6] [i_9]);
                        var_17 -= (((arr_5 [10] [i_1] [18] [i_9]) ? (((arr_5 [i_9] [14] [14] [i_0]) ? (arr_5 [i_9] [1] [1] [i_0]) : (arr_5 [i_0] [i_0] [10] [i_0]))) : (arr_5 [i_0] [i_0] [0] [i_0])));
                    }
                }
                var_18 = (((((arr_4 [i_0] [i_0] [23]) ? (arr_35 [11] [i_1] [i_1] [12]) : (arr_20 [i_1] [i_0] [i_1])))) ? (arr_36 [i_1] [i_1] [i_0] [i_0]) : (arr_36 [i_0] [i_1] [i_0] [4]));
            }
        }
    }
    #pragma endscop
}
