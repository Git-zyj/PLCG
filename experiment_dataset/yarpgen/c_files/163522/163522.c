/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 1;
    var_21 = (22986 > 23002);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_22 += (((((22986 == var_14) ? ((((arr_1 [i_0]) ? var_14 : (arr_0 [i_0])))) : (max(8, 10392994454685213578)))) << (var_19 - 3966450084)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_3] [i_0] [i_1] [i_0] = ((((max(var_7, 17343953958374826485) ^ (((42533 ? 65531 : (arr_8 [i_0 - 2] [i_0 + 2] [i_1] [i_0 + 2] [i_3] [i_0]))))))));
                                var_23 = 65531;
                                var_24 = 55930;
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    var_25 = ((0 ? ((((17 ? 582356208 : (arr_10 [i_0] [i_0]))) / 107)) : 1));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_21 [i_7] [i_7] [i_6] [i_0] [i_1] [i_0] [i_0 + 2] = ((((((18389717725526144401 < 71) == var_13))) >> ((((176 == 37263) <= (((arr_8 [i_0] [7] [i_5] [i_1] [i_0] [i_0]) ? 1 : var_7)))))));
                                var_26 &= var_14;
                                arr_22 [i_0] [i_1 + 1] [i_0] [i_1 + 1] [i_1 + 1] [i_7] = ((!(((((((arr_10 [i_0] [i_1]) ? (arr_16 [i_7] [i_7] [i_6] [i_5] [i_1 - 1] [i_0 + 2]) : var_9))) ? (!var_6) : var_5)))));
                                var_27 = ((65530 > (arr_19 [i_0] [i_6] [i_0])));
                                arr_23 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_0] = (14 / -5124071513942683456);
                            }
                        }
                    }
                    var_28 -= ((var_4 ? (((((2147483647 ? var_18 : var_8))) ? -5789411164473401955 : ((1 ? var_1 : (arr_8 [i_0] [i_0] [i_1] [i_5] [i_5] [2]))))) : (((((min((arr_7 [i_5] [i_5] [i_1] [i_1] [i_0] [i_0 + 3]), var_7))) ? (max(-103, var_19)) : var_19)))));
                    var_29 |= var_5;
                }
                var_30 = (1 / -6139259462859978977);
            }
        }
    }
    #pragma endscop
}
