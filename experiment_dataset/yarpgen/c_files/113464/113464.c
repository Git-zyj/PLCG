/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_10 = 1;

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_11 = ((((+(max((arr_5 [8]), 65535)))) - (((arr_2 [i_0] [i_0]) ? ((-38 * (arr_4 [i_0] [i_0] [i_0]))) : (arr_7 [17] [1] [i_1 - 2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_12 = (((((max((arr_1 [i_0]), 57461))) <= (((arr_6 [i_4] [i_4]) ? -65536 : -65536)))));
                                var_13 = (((arr_12 [12] [10] [i_2] [15] [i_2]) | ((max((arr_1 [i_0]), (~3299876990))))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                {
                    var_14 = 3525126680;
                    var_15 = (((((65540 ? (arr_8 [i_0] [i_0] [8] [1]) : (arr_5 [i_0])))) ? (768 - 28173) : (arr_2 [i_0] [6])));

                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        var_16 = (~3529573235574353285);
                        var_17 = (((arr_1 [i_1]) ? (arr_1 [i_0]) : -65536));
                        var_18 = (((arr_18 [i_0] [8] [8] [i_0] [i_0]) ? (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_9 [i_0] [i_0] [i_0] [1])));
                        var_19 = (((arr_12 [i_1 - 2] [i_1 - 2] [i_5] [2] [i_6]) ? 7 : (arr_8 [i_0] [i_0] [i_0] [18])));
                        var_20 = (((((1 ? 13440 : 1112))) ? var_6 : 1426689317));
                    }
                    var_21 = (!-var_6);
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
                {
                    var_22 = (arr_6 [i_0] [i_0]);
                    var_23 = (arr_5 [i_0]);
                    var_24 = var_9;
                }
                for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
                {
                    var_25 = 28774;
                    var_26 = ((-(((arr_22 [i_1 - 3] [8]) ? 2130960332 : ((14940 ? 2164006963 : (arr_25 [i_0] [1] [1] [i_0])))))));
                    var_27 = (((max((arr_21 [10]), 1))) ? (((57 ? 1 : 1))) : (((arr_16 [2] [i_1] [i_1 - 3]) ? -5888327822524600396 : (arr_16 [0] [i_1] [i_1 - 2]))));
                }
            }
        }
    }
    var_28 = var_3;
    #pragma endscop
}
