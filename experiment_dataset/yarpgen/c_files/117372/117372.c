/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_13 = (min(var_13, (((-1984 ? -10143 : (-1 && -10143))))));
        var_14 |= 26252;
        arr_2 [i_0] = ((15762598695796736 ? 26252 : (arr_1 [i_0])));

        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            var_15 = (((arr_4 [i_1 + 2] [i_1 - 1] [i_1]) ^ (arr_3 [i_1 - 3] [i_1 + 1])));
            arr_5 [i_0] [i_1] = (~7025);
        }
        for (int i_2 = 1; i_2 < 18;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 3; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        {
                            var_16 = (arr_6 [i_4 + 1] [i_3 - 1]);
                            var_17 = (arr_3 [i_0] [i_2]);
                        }
                    }
                }
            }
            var_18 = (arr_7 [i_2 - 1] [i_2 - 1]);
        }
        for (int i_6 = 1; i_6 < 18;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                var_19 = ((~((var_12 ? (arr_16 [i_7] [i_6] [i_6] [i_0] [i_0] [i_0]) : (arr_8 [i_0])))));
                var_20 = (arr_18 [i_0] [i_6 + 1] [i_7]);
                var_21 = (min(var_21, ((((10127 ? 4294967295 : -1088172991))))));
                var_22 = (max(var_22, (arr_22 [i_0] [i_6] [i_7])));
            }
            for (int i_8 = 3; i_8 < 18;i_8 += 1)
            {
                var_23 -= ((((((arr_10 [i_0]) ^ (arr_21 [i_0] [i_0] [i_8])))) ? ((((arr_25 [i_0] [i_0]) || (arr_23 [i_8 - 3] [i_0] [i_0])))) : 0));
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 19;i_10 += 1)
                    {
                        {
                            arr_32 [i_0] [i_6] [i_6] [i_6] [i_10 - 1] = ((((arr_27 [i_0] [i_0] [i_8] [i_9 - 1] [i_0]) / (arr_18 [i_9] [i_8] [i_6]))));
                            var_24 |= ((((((arr_4 [i_0] [i_0] [i_0]) ? (arr_27 [i_0] [0] [0] [13] [13]) : 2370))) < (arr_20 [1] [9] [i_8])));
                            arr_33 [i_6] = ((+((-24830 ? (arr_28 [3] [i_6] [i_6] [i_10]) : (arr_26 [i_0] [i_6 - 1] [i_6 - 1] [i_10])))));
                        }
                    }
                }
                var_25 = (arr_15 [i_8 - 2] [i_6 + 2] [i_6 + 1] [i_0]);
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 18;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 18;i_12 += 1)
                    {
                        {
                            var_26 ^= (arr_3 [i_0] [i_0]);
                            arr_39 [i_0] [i_12] [i_8] [i_12 + 1] = var_4;
                        }
                    }
                }
            }
            arr_40 [i_0] = 3;
        }
    }
    for (int i_13 = 0; i_13 < 12;i_13 += 1)
    {
        arr_45 [i_13] = var_8;
        var_27 = ((198363112052320734 ? (((arr_8 [i_13]) ? 65024 : 4194303)) : -var_1));
        var_28 = (arr_25 [i_13] [i_13]);
    }
    var_29 ^= 1387020772;

    for (int i_14 = 2; i_14 < 12;i_14 += 1)
    {
        arr_49 [i_14] = 8434471196273808782;
        var_30 = (arr_20 [i_14] [i_14] [i_14]);
        var_31 = ((+((((((arr_16 [i_14] [i_14] [i_14 - 2] [i_14] [i_14 + 2] [i_14 - 2]) & (arr_24 [i_14])))) ? 7395091725921365104 : (((((arr_11 [i_14] [i_14 - 2] [i_14] [i_14 - 1]) == (arr_48 [i_14])))))))));
    }
    #pragma endscop
}
