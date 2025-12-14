/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((min(15, var_2))) ? var_4 : var_5));
    var_11 = (min(((min((min(6987, var_4)), (min(16, 31983))))), ((var_2 ? 0 : (var_4 | 3444690595)))));
    var_12 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_13 = (max(var_13, (((~(((((var_9 ? (arr_5 [i_0] [i_0]) : var_7))) ? ((min(var_0, 47391))) : ((var_4 >> (45559 - 45530))))))))));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_14 = (((arr_5 [i_1] [i_2]) | (arr_3 [i_1])));
                    var_15 = -31983;

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        var_16 = (-377827075 & var_0);
                        var_17 = (max(var_17, 377827081));
                    }
                    for (int i_4 = 2; i_4 < 22;i_4 += 1)
                    {
                        var_18 = ((((max((0 - 18378894704452185670), var_4))) ? ((~(arr_3 [i_0]))) : (~var_0)));
                        var_19 = (((arr_2 [i_4]) ? ((((var_4 | (arr_0 [i_2]))) >> (2761933166 - 2761933140))) : (arr_9 [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 2] [i_4])));
                    }
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_20 |= ((((max(((var_0 ? 65 : -113)), (((arr_14 [i_5] [i_5] [i_2] [i_5] [i_2]) + 10))))) ? (((var_0 ? 16978 : var_9))) : (~1848556135)));
                        var_21 = (min(var_21, ((max(33552, var_3)))));
                        var_22 ^= (((-23256 + 2147483647) >> (((~var_8) + 12))));
                    }
                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 19;i_6 += 1)
                    {
                        var_23 = 20;
                        var_24 = (((20724 ? 377827081 : 22)));
                    }
                    var_25 = (max(((~((3938492430 ? var_9 : -32764)))), (((1 ? (max((arr_15 [i_2] [i_1] [i_0] [i_0]), (arr_5 [i_0] [i_2]))) : (arr_5 [i_0 + 1] [i_0 + 1]))))));
                }
                /* vectorizable */
                for (int i_7 = 1; i_7 < 19;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 22;i_9 += 1)
                        {
                            {
                                var_26 = (~var_3);
                                var_27 = (arr_23 [i_9] [i_1] [i_0]);
                            }
                        }
                    }
                    var_28 += -var_9;
                    var_29 += var_5;

                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {

                        for (int i_11 = 1; i_11 < 20;i_11 += 1)
                        {
                            var_30 = 58269;
                            var_31 = ((~((-1 ? var_4 : (arr_9 [i_11] [i_10] [i_7] [i_1] [i_0])))));
                        }
                        for (int i_12 = 1; i_12 < 21;i_12 += 1)
                        {
                            var_32 = ((-(arr_7 [i_7 + 4] [i_12 - 1])));
                            var_33 = (79708652 & 45563);
                            var_34 = var_0;
                        }
                        for (int i_13 = 0; i_13 < 23;i_13 += 1)
                        {
                            var_35 = (max(var_35, (((8570 ? (((((arr_30 [i_0] [i_0] [i_1] [i_7] [i_10] [i_13] [i_13]) + 2147483647)) >> (var_9 + 7486961921016583074))) : (arr_20 [i_10] [i_13]))))));
                            var_36 &= var_4;
                            var_37 = -var_7;
                        }
                        var_38 = (30825 || var_9);
                    }
                    var_39 = (((arr_28 [i_0 + 1] [i_1] [i_7] [i_1] [i_7 + 1] [i_7] [i_1]) >> (1301606300 - 1301606280)));
                }
            }
        }
    }
    #pragma endscop
}
