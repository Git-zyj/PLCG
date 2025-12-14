/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_19 &= (max(((((var_4 ? (arr_0 [i_1]) : var_0)))), (min(var_5, (arr_5 [i_0] [14] [i_1] [i_2])))));
                    var_20 = (((-1668840089 ? (arr_1 [4]) : 88)));
                }
            }
        }

        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 3; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        {
                            var_21 = ((((((!0) ? var_5 : 65408))) ? (arr_16 [i_4] [i_4 + 1] [i_4 - 2] [i_4 - 2] [i_4] [i_4 - 2]) : var_14));
                            arr_19 [i_0] [i_0] [i_0] [i_6] [i_0] = 49;
                            var_22 = ((-(((arr_9 [i_3 + 1] [i_4 - 2]) << (((((arr_17 [i_0] [i_3 + 1] [i_4] [i_5] [i_3 + 1]) ? var_4 : var_3)) - 60282))))));
                            arr_20 [i_6] = (((((~(((var_13 + 2147483647) << (((-19347 + 19355) - 8))))))) ? (0 && -1479777385) : ((-1668840068 ? ((((arr_1 [i_3 - 1]) ? 0 : var_8))) : 6299210363645878173))));
                            var_23 = ((((max(6670359968952984943, 3262527362463100013))) || 77));
                        }
                    }
                }
            }
            var_24 = (arr_6 [i_0] [i_3] [i_3] [i_3]);
        }
        for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
        {
            arr_24 [i_0] = ((((-62 ? ((var_2 ? -6299210363645878173 : var_2)) : (((min(var_16, var_3)))))) ^ ((min((arr_11 [i_0] [i_7]), 2858024600)))));
            var_25 = var_13;
        }
        for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
        {
            arr_28 [i_0] [i_8] = arr_27 [i_8];
            var_26 -= ((var_8 ? (arr_27 [i_0]) : (min((arr_27 [i_8]), (arr_27 [i_0])))));
            var_27 *= (max((arr_25 [i_0]), (arr_23 [i_0] [i_0] [i_8])));
        }
        for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
        {
            arr_31 [i_0] [i_0] [i_9] &= var_3;
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 16;i_11 += 1)
                {
                    {
                        var_28 *= ((-50 ? var_2 : (arr_27 [3])));
                        var_29 = ((var_17 - (arr_32 [i_11] [i_10] [11] [i_0])));
                    }
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 23;i_12 += 1)
    {
        var_30 ^= (~8123915175875628210);
        arr_39 [i_12] = var_14;
    }
    var_31 = ((((((var_3 ? var_6 : -6299210363645878173)) << 0)) % ((((((var_9 ? var_6 : var_5))) ? -var_18 : var_15)))));
    var_32 = var_2;
    #pragma endscop
}
