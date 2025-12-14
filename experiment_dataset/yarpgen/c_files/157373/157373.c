/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (~42);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_12 = ((((((((-29256 ? 4294967293 : -1))) <= (arr_4 [i_0] [i_0] [i_2] [i_3])))) < (((arr_5 [i_3] [0] [i_3]) ? ((max((arr_8 [i_0] [i_2] [i_2]), (arr_9 [15] [i_1] [i_1] [i_1] [i_1] [i_2])))) : var_9))));

                            for (int i_4 = 0; i_4 < 16;i_4 += 1)
                            {
                                var_13 = min((min((arr_5 [i_0 + 4] [i_0 + 4] [i_0 + 1]), (arr_5 [i_0 - 1] [i_0 + 1] [i_0 + 3]))), (((!((max((arr_7 [i_0] [i_0] [i_0] [15] [i_3]), 7675508940422677636)))))));
                                arr_13 [i_0] [i_0] [i_2] [i_3] [i_3] = 897093782;
                                arr_14 [i_3] [i_4] [i_3] [i_3] [i_3] = (((7675508940422677636 <= -2046796159) ? ((781426582 / (-7675508940422677643 / var_6))) : ((((!(arr_12 [i_3] [i_0 - 1] [i_2] [i_3] [i_4] [i_3])))))));
                                var_14 = (((((arr_4 [i_0] [0] [i_2] [i_3]) ? var_8 : -7675508940422677643))) ? ((-(!127))) : (((!(((arr_10 [i_4] [i_3] [3] [i_1] [i_1] [i_0]) <= var_3))))));
                                var_15 = var_8;
                            }
                            for (int i_5 = 3; i_5 < 15;i_5 += 1)
                            {
                                arr_17 [i_3] [i_5 - 3] [9] [i_1] [i_1] [i_1] [i_3] = ((arr_16 [i_0 + 3] [i_5 - 1] [i_5 - 3] [i_0 + 3] [i_3]) - (((max((arr_12 [i_0] [4] [i_0 + 3] [i_5] [i_5 + 1] [i_5 - 3]), (arr_12 [6] [6] [i_0 + 3] [i_1] [i_5 + 1] [i_5 + 1]))))));
                                var_16 = var_8;
                                arr_18 [i_3] [i_3] = (max((((-((max(0, 255)))))), 3397873514));
                                arr_19 [i_0] [4] [i_2] [i_3] [i_5] = ((!((((897093782 - 16888726001250260069) ? 255 : 208)))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 12;i_7 += 1)
                    {
                        {
                            arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_22 [i_0] [i_0 - 1] [i_0 - 1]);
                            var_17 = var_3;
                        }
                    }
                }
            }
        }
    }
    var_18 = var_0;
    var_19 = var_4;
    var_20 = (max(-1289772773210265780, 7675508940422677655));
    #pragma endscop
}
