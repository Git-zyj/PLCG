/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_1 - 1] [i_0] = 183225878;
                    arr_10 [i_2] [i_2] [i_2] [i_0] = (min(((max(183225878, 4111741403))), (max((min(var_14, 1702739130500337662)), 183225890))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {

                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        var_18 = (max((min(var_14, 1)), ((min(var_13, var_6)))));

                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            var_19 = (max(var_19, ((min(829256667, 1)))));
                            var_20 = max(53447, (min(var_14, -908781655)));
                            var_21 = 1702739130500337662;
                        }
                        for (int i_7 = 1; i_7 < 9;i_7 += 1)
                        {
                            arr_24 [i_0] [i_0] [i_0] = max((max(-1, 1702739130500337638)), ((max(0, 7625069749402788995))));
                            var_22 = var_10;
                            var_23 = (max(var_12, (max(183225893, 1))));
                            arr_25 [i_0] [i_0] [i_4] [i_4] = 14219;
                        }
                        arr_26 [i_0] [i_0] [i_0] [i_0] = (min(4111741417, (max(((min(var_7, -2066255073))), 4111741386))));
                    }
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        arr_30 [i_0] [2] [i_3] [9] [i_0] = 0;
                        var_24 = 1;
                        var_25 = (max(-1, 1));
                    }
                    arr_31 [i_0] [i_0] [i_4] [i_0] = (min(((min(-101, 0))), (min(1, 536870912))));
                    arr_32 [i_0] = 0;
                }
            }
        }
        var_26 = (min(((max(1631073288, 1))), (min((max(var_7, 6269181153257123584)), var_10))));
        arr_33 [i_0] = (min((min(4294967295, var_0)), (min((min(183225893, 1)), var_4))));
    }

    for (int i_9 = 0; i_9 < 12;i_9 += 1)
    {
        var_27 = 1;
        var_28 = (min(var_28, ((max(((min(2147221504, 1))), 6925637452380176754)))));
    }
    #pragma endscop
}
