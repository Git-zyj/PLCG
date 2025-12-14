/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, 7461));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_0] = -7461;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [1] [1] [i_3] = (arr_7 [i_3 - 1]);
                            var_13 += arr_0 [i_0];
                            var_14 = arr_7 [i_0];
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 2; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_0] = (((((arr_16 [i_0 + 4] [i_0 + 4]) && 7461)) ? ((((arr_7 [i_1 - 3]) ? (arr_1 [i_0]) : (arr_0 [i_5 - 2])))) : (((arr_18 [i_0] [i_0] [14] [i_0]) ? (((((arr_2 [i_4] [i_5] [i_6]) && (arr_12 [i_0 + 1] [i_1] [i_4] [8]))))) : (((arr_3 [i_6 + 1]) ? (arr_20 [i_1]) : (arr_3 [i_0])))))));
                                var_15 = (((((arr_10 [i_0] [i_0] [i_0] [i_0]) ? (~-7461) : (arr_16 [i_0 + 2] [i_0])))) ? 12117000895645290848 : ((((!(arr_5 [i_1 - 2] [i_1 - 4] [i_1 + 1]))))));
                                var_16 |= (~-7459);
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = (var_9 * var_9);
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            {
                var_18 &= ((+(((arr_2 [1] [i_8] [1]) ? (((2044286315 ? (arr_19 [i_7] [i_7] [i_8] [i_8] [i_8]) : (arr_23 [i_7])))) : 2782070092548083044))));
                arr_28 [i_7] [i_8] = ((~((-(arr_8 [i_7] [i_7] [i_7] [i_7])))));
            }
        }
    }
    #pragma endscop
}
