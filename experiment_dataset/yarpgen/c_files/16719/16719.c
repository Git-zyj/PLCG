/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_15 = (arr_4 [i_0]);
                    arr_7 [i_0] = ((~(arr_0 [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [1] [i_0] [i_2] [i_3] [8] = arr_3 [i_4] [i_0] [i_1];
                                arr_13 [i_0] [i_3] [i_3] [i_2] [i_1 - 2] [i_0] = (min((min(((min(var_9, (arr_1 [i_0])))), var_14)), var_0));
                                var_16 |= var_9;
                            }
                        }
                    }
                    arr_14 [i_1] [0] &= (arr_11 [i_2] [i_2] [i_2] [i_1 + 1] [1]);

                    for (int i_5 = 1; i_5 < 14;i_5 += 1)
                    {
                        var_17 = (min(1, 1));
                        arr_18 [6] [i_5] [i_2] [i_1 - 1] [6] [6] &= ((~(((~var_7) ? (~var_5) : (~var_1)))));
                        arr_19 [0] [0] |= (max((((1139651414 ? ((var_2 ? var_2 : var_1)) : (min(var_9, -1107528134))))), (min((arr_0 [12]), (min((arr_0 [1]), var_14))))));
                        arr_20 [i_0] [i_1 - 2] [i_1] [i_0] [0] |= (((arr_10 [i_0] [i_0] [i_2] [i_5] [i_1]) == (max((!var_4), ((var_14 ? (arr_6 [9] [i_1] [i_2]) : (arr_5 [i_0] [i_0] [i_0] [i_5])))))));
                    }
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        arr_24 [i_1] [i_0] [i_2] [i_1] [i_0] [i_0] = ((((max(var_11, var_1))) && ((min((((arr_21 [i_0] [i_0] [i_0] [i_0]) ? var_3 : 1)), -1139651415)))));
                        var_18 |= ((((max((!-15670), (arr_2 [1])))) ? 15668 : ((var_5 ? (arr_11 [1] [i_1 - 2] [i_2] [i_2] [i_2]) : 97))));
                    }
                }
            }
        }
    }
    var_19 = (((max((min(var_2, var_3)), ((max(62, var_9))))) + (var_11 != var_13)));
    var_20 = (var_11 || var_4);
    var_21 &= -29037;
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 14;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 13;i_8 += 1)
        {
            {
                arr_33 [i_7] [i_8] = ((var_10 ^ (((!((max((arr_15 [i_7] [i_7] [i_8] [i_7] [i_8]), var_6))))))));
                var_22 -= (~var_12);
            }
        }
    }
    #pragma endscop
}
