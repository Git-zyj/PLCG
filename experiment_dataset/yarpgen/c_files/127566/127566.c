/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;
    var_11 = 255;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 ^= (arr_0 [i_0] [i_0]);
        var_13 = (233 - 17);
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            arr_6 [i_1] [i_2] = var_2;
            arr_7 [1] [1] = (arr_3 [i_2]);

            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                var_14 = (((-1 && (arr_9 [i_1] [i_2]))) || (arr_3 [i_3]));
                arr_11 [i_3] [i_3] = (((((var_3 << (((arr_5 [i_1]) - 42))))) && (arr_8 [i_1 + 1])));
            }
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        {
                            arr_19 [i_1] [2] [i_4] [i_6] [i_6] = -1952566846292962238;
                            var_15 = ((~(arr_14 [i_1 - 2] [i_1 + 1] [i_1 + 1])));
                            arr_20 [i_6] = ((17 && (arr_18 [i_1] [i_1] [i_1] [i_1 + 4] [i_1])));
                        }
                    }
                }
                arr_21 [i_2] [i_2] = (((32761 < 1044480) ? var_7 : (arr_17 [i_4] [i_4] [i_4] [i_1 + 1] [i_1])));
            }
            arr_22 [0] [0] = (((arr_5 [i_1 + 2]) >> ((((arr_15 [i_1] [i_1]) || var_9)))));
        }
        var_16 = (max(((((min((arr_15 [3] [i_1]), (arr_3 [i_1])))) ? (((~(arr_16 [9] [i_1] [9] [i_1] [13])))) : (max((arr_15 [i_1] [i_1]), var_0)))), (0 & 55)));

        for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
        {
            var_17 = ((min(-1, (arr_16 [i_1 + 2] [4] [i_1] [1] [i_1 + 4]))));
            arr_26 [i_7] = (((((((var_4 ? (arr_14 [i_1] [i_7] [i_7]) : (arr_17 [i_1] [14] [16] [i_1 - 1] [i_1 - 2])))) / (arr_8 [i_1]))) >= (max((arr_12 [i_1 - 1] [i_1 - 2] [i_1 + 4] [i_1]), (arr_14 [i_1] [i_1 + 2] [i_1 + 1])))));
        }
        for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
        {
            var_18 = (min((((arr_0 [i_1] [i_8]) ? ((((var_3 || (arr_12 [i_1 + 2] [i_1] [i_8] [i_8]))))) : (arr_18 [i_1 + 3] [i_1 - 1] [i_1] [i_1 - 2] [i_1 + 3]))), (arr_5 [i_1])));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    {
                        arr_35 [i_1] [i_1] [i_9] [i_9] = (arr_24 [i_1 + 1] [i_1 + 3] [i_1 + 1]);
                        var_19 = ((((((15 & (arr_14 [i_1] [i_1] [4])))) - (arr_9 [13] [5]))));
                        var_20 *= (((((768937741892350975 ? (arr_23 [i_1 + 2]) : (max((arr_14 [i_1] [i_8] [3]), (arr_34 [i_1] [i_8] [i_9] [i_10])))))) && ((min(((((arr_18 [i_1] [i_1] [i_1] [i_1] [16]) || var_2))), (((arr_9 [i_1] [i_1]) ? (arr_5 [i_10]) : -1379301106370890394)))))));
                        var_21 = (arr_3 [i_8]);
                        var_22 = (arr_3 [i_10]);
                    }
                }
            }
        }
        var_23 = (arr_8 [i_1]);
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 24;i_11 += 1)
    {
        var_24 = (((82 ? var_4 : -6135975388656409635)));
        var_25 = (max(var_25, ((((arr_1 [i_11]) || (arr_36 [i_11]))))));
    }
    #pragma endscop
}
