/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    arr_7 [i_2 + 1] [i_0] [i_1 - 1] [i_0] = (max((arr_2 [i_0]), (((~-1074449080) ? 108 : (arr_5 [i_0] [i_1 + 1] [i_0])))));
                    var_11 = (((((96 ? -96 : 128))) ? (max((arr_5 [i_0] [i_1 - 1] [i_0]), (arr_5 [i_1 + 1] [i_2 - 1] [i_0]))) : 93));
                    arr_8 [i_2 - 1] [i_0] [i_2 - 1] [i_2 - 1] = ((((max((var_10 - 19214), var_4))) ? (0 & var_9) : ((~(max(52725, var_7))))));
                    arr_9 [i_0] [i_2 - 1] [i_1 - 1] [i_0] = arr_2 [i_0];
                }
            }
        }
    }
    var_12 *= (((((0 ? 32566893 : (37441 ^ 4262400403)))) && ((((((106966674 ? 122 : var_8))) ? 3009952092 : ((3241763992 ? 243657602 : 974869707)))))));

    /* vectorizable */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_13 = 0;
        var_14 = var_4;
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        arr_16 [i_4] [i_4] = 2341;
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    {
                        var_15 = 22554;
                        var_16 = (max(var_16, -21));
                        var_17 = arr_22 [i_4] [i_4] [i_6] [i_7];
                    }
                }
            }
        }
        arr_24 [i_4] = ((min(132, -5074848247409330794)));
    }
    for (int i_8 = 4; i_8 < 22;i_8 += 1)
    {
        var_18 = -1;
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                {
                    arr_34 [i_8 + 1] [i_8] [i_10] = 9760139322574527053;

                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        var_19 = (max(var_19, var_9));
                        var_20 ^= ((-((~(arr_30 [i_8 - 4])))));
                    }
                    var_21 ^= var_4;
                    arr_37 [i_8] = ((~(((32566893 < ((((arr_27 [i_8 - 3]) ? var_3 : 0))))))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_12 = 2; i_12 < 22;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 23;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 23;i_14 += 1)
                {
                    {
                        var_22 = ((((max(var_5, (arr_40 [i_14])))) ? var_10 : ((((max((arr_27 [i_12 + 1]), 1741168266))) ? ((max((arr_26 [i_8 - 1] [i_13]), 22554))) : var_10))));
                        var_23 = var_3;
                    }
                }
            }
        }
    }
    #pragma endscop
}
