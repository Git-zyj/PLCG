/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_13 = (min(var_13, (((min(var_4, var_10))))));
                                var_14 -= (((((((((~(arr_1 [i_2])))) || var_3)))) - (((arr_7 [i_0] [i_0 - 3]) / (max((arr_6 [i_0 - 2]), 3133975821925229194))))));
                                var_15 ^= ((((!(arr_12 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1]))) && (((arr_12 [i_0 - 2] [i_0 - 4] [i_0 - 1] [i_0]) || (arr_12 [i_0 - 3] [i_0 - 1] [i_0 - 4] [i_0])))));
                            }
                        }
                    }
                    arr_14 [i_0 - 2] [i_1] [i_0 - 2] = ((!((-13624 || (arr_3 [i_0 + 1] [i_0] [i_0])))));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        arr_17 [i_1] [i_1] [i_2] [i_5] = ((1 ? 36679 : 5));
                        var_16 = ((((arr_15 [i_0] [i_1 - 1] [i_1]) / -3620)));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 0;i_6 += 1)
                    {
                        var_17 &= 150;
                        var_18 = (min(var_18, ((((65531 * 214) + (var_11 / var_7))))));
                        var_19 = (min(var_19, (~var_7)));
                    }
                }
            }
        }
    }
    var_20 = (max(var_20, var_8));
    #pragma endscop
}
