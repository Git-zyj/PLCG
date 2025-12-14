/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] [19] = (arr_9 [i_0] [i_0] [i_0] [i_0] [19]);
                                arr_14 [i_0] [16] = var_3;
                            }
                        }
                    }
                    var_10 = (min(1227863666, (((arr_2 [i_2 - 1] [i_2 - 1] [i_2 + 1]) != (arr_5 [i_0] [i_2 - 1])))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_0] [i_2] [i_6] [14] = 3067103630;
                                arr_22 [i_0] [i_5] [4] [2] [i_5 + 1] [i_6] &= max(((((arr_16 [i_2 - 1] [i_5 + 2]) > (~3067103630)))), 1227863665);
                                var_11 = (max(var_11, (+-4806996039837707530)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            {
                                var_12 = var_6;
                                var_13 = (max(((((min(var_0, var_7))) + (min(1809880837645455377, 1280747465)))), 3067103610));
                                arr_27 [i_0] [i_1] [i_2] [i_7] [i_8] [i_2] [i_0] = var_4;
                                var_14 = (((((-69 != (arr_6 [i_2] [i_2 + 1] [i_2 - 1])))) < ((min(-10, 63)))));
                            }
                        }
                    }
                }
                for (int i_9 = 3; i_9 < 17;i_9 += 1)
                {
                    var_15 = (arr_12 [1] [1] [i_9] [i_9 + 2] [i_9]);
                    var_16 = ((var_3 ? (((((7 ^ (-2147483647 - 1)))) & ((~(arr_20 [18] [i_1]))))) : (((-(arr_25 [16] [i_1] [1] [i_1] [i_9 - 1]))))));
                    var_17 = (min(var_17, (((((max((arr_15 [19] [i_9] [i_9 - 3]), (arr_15 [19] [i_9] [i_9])))) ^ (arr_8 [i_1]))))));
                }
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    var_18 = ((9223372036854775807 >> (-69 + 111)));
                    /* LoopNest 2 */
                    for (int i_11 = 3; i_11 < 17;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 19;i_12 += 1)
                        {
                            {
                                var_19 = var_2;
                                arr_38 [i_0] [15] [i_0] [i_0] [i_0] [i_12] = ((-((((arr_0 [i_12 - 2] [3]) == (arr_0 [i_12 + 1] [i_11]))))));
                                arr_39 [i_12] [i_12] = ((68 ? 2463200497933619746 : 2147483647));
                            }
                        }
                    }
                }
                for (int i_13 = 0; i_13 < 20;i_13 += 1)
                {
                    var_20 = ((7037007906827631738 >= (((((min((arr_36 [i_1] [i_13] [i_13] [i_1] [i_0]), 214))) && (!var_7))))));
                    var_21 = min((min((arr_30 [i_13]), 301015610528057432)), -38);
                }
                var_22 = (max(var_22, (arr_32 [i_0] [2] [i_0] [i_0])));
                arr_42 [3] [i_1] [3] &= (max(((max(-var_5, ((((arr_9 [6] [i_1] [6] [7] [i_0]) <= 3067103618)))))), 7408685680377767600));
            }
        }
    }
    var_23 = max(((((var_2 > 15645865753318842667) != (var_6 && var_0)))), var_8);
    var_24 = (min(var_4, ((max(var_0, var_2)))));
    #pragma endscop
}
