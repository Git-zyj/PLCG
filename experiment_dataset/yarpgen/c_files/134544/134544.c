/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= (~(var_9 & var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_18 += (min(415857807, var_11));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_19 = (max(var_19, (~0)));
                                arr_13 [i_0] [i_1] [i_0] [1] [i_2] [i_4] [i_4] = var_11;
                            }
                        }
                    }
                }
                for (int i_5 = 1; i_5 < 14;i_5 += 1)
                {
                    arr_17 [i_0] [i_0] [i_0] [i_5] = ((0 <= (((arr_11 [13] [i_5 + 2] [i_5 - 1] [i_5 + 2] [i_5 + 1] [i_5 - 1] [i_5 + 1]) ? 0 : (arr_14 [i_5] [i_5 + 2] [i_5 + 1] [i_5 + 1])))));
                    var_20 = (min(-869246220, 13));
                    arr_18 [i_0] [i_1] [i_5] [i_1] = min(((0 ? 6 : (arr_12 [i_0] [i_1] [i_5] [i_5] [i_5 - 1]))), (((max(0, 869246239)) >> (((arr_12 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1]) + 1116153176)))));
                    arr_19 [i_5] [i_1] [8] = (min(-836144570, 65523));
                }
                var_21 = (min(var_21, var_8));
                arr_20 [i_0] [i_0] [i_0] = -1064459343;

                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    arr_24 [i_0] [7] [i_1] [i_6] = -var_2;
                    var_22 = (arr_1 [i_6]);
                }
                arr_25 [i_0] = min((min(869246203, (arr_16 [i_0] [i_0] [i_0] [1]))), var_4);
            }
        }
    }
    var_23 = (+-869246209);
    var_24 = var_16;
    var_25 = (var_9 > -869246220);
    #pragma endscop
}
