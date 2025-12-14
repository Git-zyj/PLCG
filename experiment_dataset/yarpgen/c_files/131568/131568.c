/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-((max(var_8, 0)))));
    var_20 = (((((var_14 & var_4) > 255)) ? var_13 : var_16));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_21 *= ((!(max((34241 && 0), (arr_2 [i_0])))));
        arr_3 [i_0] [i_0] = (~1);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1] = ((((max(-var_5, (arr_7 [i_1] [i_1] [i_2])))) ? (((max((arr_1 [i_0]), (arr_9 [i_0] [i_0] [i_2] [i_2]))))) : -1));
                        arr_12 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (15748510397543086795 > 1);
                        var_22 = (((max(0, (min(var_18, 1)))) | var_17));
                    }
                }
            }
            var_23 = (max(((16029724976024568018 ^ (!var_15))), 0));
            arr_13 [11] [i_1] [i_1] = (((((65 ? 21 : var_12))) ? (((var_7 != ((var_8 ? var_2 : (arr_9 [i_0] [7] [7] [i_1])))))) : ((-(arr_1 [i_1])))));
            arr_14 [i_1] [i_0] [i_1] = (min(((max(var_14, -16))), 209));
        }
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            arr_18 [i_0] [i_4] [i_0] = 1;
            var_24 = 21;
        }
        arr_19 [i_0] [i_0] = (((((-(arr_6 [6])))) ? ((-((var_3 ? var_2 : var_18)))) : (arr_2 [i_0])));
    }
    for (int i_5 = 2; i_5 < 12;i_5 += 1)
    {
        var_25 = (max(var_25, (((((-1 ? (max((arr_21 [i_5]), 2317464343)) : (max(var_11, 0)))) > -1)))));
        arr_23 [i_5] [i_5] = (((((((var_16 ? 416581557 : -3328211417074215481)) - (arr_22 [i_5] [i_5])))) ? (((~var_4) ? ((~(arr_21 [i_5]))) : (arr_22 [i_5 + 1] [i_5 - 1]))) : 52));
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                {
                    arr_32 [i_8] [i_6] [i_6] [i_6] = (max(((((arr_24 [i_6]) & var_3))), (((arr_24 [i_7]) | (arr_30 [i_6] [i_8] [i_8] [i_8])))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 19;i_10 += 1)
                        {
                            {
                                var_26 = (123 <= 416581554);
                                var_27 -= ((((((min(-2275679763783128635, 0)) | ((3019059087 ? (arr_34 [i_10] [i_10] [i_10]) : -9223372036854775792))))) || 6027));
                                arr_39 [i_6] [i_10] [i_8] [i_10] [i_10] [i_9] [i_6] = ((((((min((arr_29 [i_6] [i_7]), 55574))) || (arr_36 [i_10 + 1] [i_10 + 1] [i_8] [i_10 + 1] [i_10 + 1] [i_10]))) ? ((min(3019059110, ((min((arr_37 [4] [i_9] [4] [i_8] [7] [i_10]), (arr_36 [i_6] [i_9] [i_8] [i_9] [i_8] [i_7]))))))) : -var_18));
                            }
                        }
                    }
                    arr_40 [i_8] = arr_36 [i_6] [i_6] [i_8] [i_6] [i_6] [i_6];
                    arr_41 [i_6] [i_8] [i_6] = (min(((((max((arr_27 [i_8] [i_7] [i_8]), var_4)) <= var_1))), (max((var_8 == var_7), (1 | 14345570906464508753)))));
                }
            }
        }
    }
    #pragma endscop
}
