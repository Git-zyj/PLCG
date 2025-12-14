/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= var_12;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_20 = 2408502979335852274;

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        arr_9 [i_0] [4] [4] [i_3] = ((16038241094373699344 ? 1 : 12929914846815840530));
                        var_21 = (max(var_21, (!17823785522000419180)));
                        arr_10 [i_0] [i_0] [i_0] |= var_9;
                        var_22 = ((max(16038241094373699342, (arr_4 [i_3] [i_1]))));
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        var_23 = 2733495291;
                        arr_15 [i_1] [i_1] [i_4] = var_6;
                        var_24 = (min(var_24, (arr_2 [i_2] [i_1] [i_1])));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        var_25 = -2408502979335852274;
                        arr_18 [i_5] [1] = (!0);
                    }
                    for (int i_6 = 3; i_6 < 12;i_6 += 1)
                    {
                        var_26 ^= (arr_19 [7] [i_1] [i_2] [i_1] [i_6] [i_6 - 2]);
                        var_27 = (!var_7);
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            {
                                arr_25 [i_8] [i_7] = 7409084360286752465;
                                arr_26 [i_7] [i_2] [i_7] [i_7] [i_8] = var_4;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 21;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 21;i_10 += 1)
        {
            {
                var_28 = ((((((arr_28 [i_9] [i_10]) / (arr_28 [i_10] [i_9])))) ? -var_9 : (!7481949243532713342)));
                var_29 = (((-2147483647 - 1) ? 1019864187 : -7481949243532713363));
            }
        }
    }
    #pragma endscop
}
