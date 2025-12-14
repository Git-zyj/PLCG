/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_2] |= (var_9 < -1);
                    var_11 = ((((((arr_3 [i_1] [i_1 + 3]) ? (arr_5 [i_1 - 3] [i_1] [i_1 - 3]) : (arr_2 [i_1 - 3] [i_1 - 3])))) ? -23 : (max((((80 & (arr_7 [i_0] [i_0] [i_2] [8])))), 1))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_14 [i_2] [i_1] [i_2] = (max(80, 23));
                                var_12 += ((-23 & (((((!-39) || (((-27 ? 0 : (arr_10 [i_2]))))))))));
                                var_13 |= ((!(((-((max(80, 48))))))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_1] [i_3] = (min((arr_10 [i_1]), ((min((max((arr_7 [5] [i_1] [i_1] [7]), (arr_13 [i_4] [i_1] [i_2] [i_2] [i_1] [i_0]))), (((arr_12 [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_4]) ? (arr_13 [i_0] [i_1] [i_2] [i_3] [i_2] [i_4]) : var_2)))))));
                                arr_16 [i_1] [i_3 + 1] [0] [i_1] [i_1] = max(((((25827 | 3447924900293212319) ? (arr_9 [i_0] [i_2]) : (((~(arr_7 [i_0 - 1] [i_1] [i_0 - 1] [i_0 - 1]))))))), (~7258436831995639879));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 &= (!13);
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            {
                arr_23 [i_5] = (((max((-23 | var_7), (((arr_19 [i_5]) ? var_3 : (arr_17 [i_5]))))) - (arr_21 [i_5] [13] [i_5 - 3])));
                arr_24 [i_5 + 3] = 249;
                var_15 = (arr_20 [18] [i_5] [i_5]);
                arr_25 [i_5 - 1] [i_6] = (((!-3421341282089744637) <= 0));
            }
        }
    }
    #pragma endscop
}
