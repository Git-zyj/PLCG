/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((min((max(-21574, var_3)), var_4)) <= var_1));
    var_15 = ((~(var_2 | var_2)));
    var_16 = (min(var_10, (min((~var_9), var_3))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_1] |= ((30548 ? ((((min((arr_2 [i_1] [i_1]), (arr_0 [i_1] [i_1])))) ? var_7 : ((var_12 ? 46251 : (arr_0 [i_1] [i_1]))))) : ((-((max(var_4, 4096)))))));

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_17 = (((((arr_1 [i_0 - 2] [i_0]) / (arr_1 [i_0 - 2] [i_0]))) * 1));
                    var_18 = (arr_1 [i_0] [i_0]);
                    var_19 = ((((((arr_0 [i_0] [i_1]) ? var_3 : (!10397158550091723488)))) || ((min(1924002733772639929, 0)))));
                    var_20 = 0;
                    arr_8 [i_0] = (max((((arr_7 [i_0 - 4] [i_0] [i_0] [i_2]) / (arr_7 [i_0 - 2] [i_0] [i_0] [i_2]))), (((arr_7 [i_0 + 1] [i_0] [i_0] [i_0 + 1]) ? 933194157 : (-32767 - 1)))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 14;i_5 += 1)
                        {
                            {
                                var_21 = ((((((arr_11 [i_4] [i_0] [i_0]) + -933194160))) & (1019258302 * 4095)));
                                var_22 = ((-(arr_18 [i_4] [i_4 + 2] [i_4 + 2] [i_4 + 1] [i_4 + 1])));
                            }
                        }
                    }
                    var_23 -= 10296;
                }
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    var_24 = (((max((arr_7 [i_0] [i_0 - 1] [i_0] [i_6]), (arr_7 [i_0] [i_0 - 1] [i_0] [i_1]))) / (min(14, (arr_7 [i_0] [i_0 - 1] [i_0] [i_0])))));
                    var_25 = (max(var_25, (arr_20 [i_0] [i_1] [i_6])));
                    var_26 = (min(var_26, 1));
                }

                /* vectorizable */
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    var_27 = (max(var_27, ((((arr_18 [i_0 - 4] [i_0 - 1] [i_0 - 4] [i_0 + 1] [i_0 + 1]) + (arr_18 [i_0 - 1] [i_0 + 1] [i_0 - 4] [i_0 + 1] [i_1]))))));
                    var_28 = ((-(arr_6 [i_0] [i_1] [i_1] [i_7])));
                }
            }
        }
    }
    #pragma endscop
}
