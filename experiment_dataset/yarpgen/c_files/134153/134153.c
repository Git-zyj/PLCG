/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_10 &= var_4;
                arr_7 [9] [i_1] [13] &= (min(65535, (((((min(4294901761, 4294901761))) == (arr_0 [i_0]))))));

                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    var_11 = -var_4;
                    arr_10 [i_0] [i_1] [i_1] [2] = 4294901761;
                    arr_11 [i_0] [i_0] [i_0] = var_3;
                }
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    var_12 = ((((~(arr_6 [i_0] [1]))) ^ ((var_1 >> ((-724192401 * (arr_6 [i_3] [i_3])))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 14;i_5 += 1)
                        {
                            {
                                arr_18 [i_4] [8] [i_3] [i_4] = ((((~(arr_5 [i_5 - 1] [i_5 + 1]))) == 511));
                                var_13 = (max(var_13, ((((((1 ? 4294901761 : 29187))) ? 10778378027383815557 : 410125614)))));
                                var_14 *= (max(108, (~-1)));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_6 = 2; i_6 < 14;i_6 += 1)
                {
                    var_15 = ((-(arr_13 [i_6 - 1] [5] [11])));

                    for (int i_7 = 1; i_7 < 13;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            arr_28 [i_0] [i_1] [13] [14] [2] = var_4;
                            var_16 = 4294901761;
                        }
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            var_17 = (arr_30 [i_6] [i_9] [7] [i_6 - 2]);
                            var_18 = (((((-112 ? 2529544267 : 65535))) ? ((var_3 ? var_3 : 30094)) : -1));
                            var_19 = ((1298252961 + (((arr_29 [i_9] [i_6]) ^ 2097151))));
                            var_20 = (min(var_20, (127 >= 1330801239)));
                        }
                        var_21 = (((var_5 ? var_2 : var_0)));
                    }
                    arr_32 [i_0] [i_0] [i_0] [i_0] = var_8;
                }
                arr_33 [i_1] = ((+(((((arr_17 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1]) + 2147483647)) >> (2108203005333490853 - 2108203005333490832)))));
            }
        }
    }
    var_22 = (((max(((var_9 ? var_5 : 30094)), (max(var_4, var_0)))) - var_9));
    /* LoopNest 2 */
    for (int i_10 = 2; i_10 < 16;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            {
                var_23 = (max(var_23, var_3));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 18;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        {
                            var_24 ^= (arr_37 [i_10] [i_11] [1]);
                            var_25 = (-1 * 0);
                        }
                    }
                }
            }
        }
    }
    var_26 = ((var_7 && (65534 ^ 248911410)));
    var_27 -= var_8;
    #pragma endscop
}
