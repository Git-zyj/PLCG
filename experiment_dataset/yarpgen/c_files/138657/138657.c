/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= var_1;
    var_11 = (((((max(584247828, var_1)) / var_8)) > ((((((1 ? -584247828 : 13))) ? ((0 ? -584247819 : 2147483645)) : -584247831)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    var_12 ^= (((((~(arr_7 [i_2 + 2] [18] [i_2 + 2] [i_0])))) ? (((min(var_8, 584247814)))) : (max((((~(arr_5 [i_0] [i_0] [i_0])))), var_0))));
                    var_13 = (((((8191 / var_3) && (var_3 | 1010351728))) && (((var_4 & (65507 ^ -6))))));
                    var_14 = (((((arr_4 [i_1 - 1]) ? (~99) : 1))) >= ((((((arr_3 [i_0] [i_1 + 1] [i_2 - 3]) ? (arr_2 [i_1] [i_1 - 1]) : 1))) ? (arr_9 [i_0] [i_2] [i_1 - 1] [i_0]) : (((var_4 ? var_7 : (arr_8 [i_1 + 1] [i_1 + 1] [i_0] [i_0])))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
                    {
                        var_15 = (((arr_6 [i_2] [i_2] [i_3]) ? 1104219612 : 65507));
                        var_16 = ((((((arr_0 [i_1 - 1]) ? 1104219615 : (arr_2 [i_0] [8])))) | var_1));
                        var_17 |= (arr_8 [i_0] [i_1] [i_2] [i_3]);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                    {
                        var_18 = (min(var_18, (((-(arr_3 [i_1 + 1] [i_1] [i_2 + 2]))))));
                        arr_14 [i_0] [i_2] [i_2] [i_4] = ((-1 - (arr_1 [i_4] [i_1 - 1])));
                        arr_15 [i_4] [i_2] [i_2] [i_0] = -867177386;

                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_19 += ((~((var_0 ? 8719240618307270489 : (arr_9 [i_0] [i_0] [i_4] [i_4])))));
                            var_20 = (max(var_20, (--584247817)));
                            var_21 = ((-584247815 ? 2147483647 : 1104219625));
                            var_22 ^= 16188268805656780942;
                            arr_18 [i_0] [i_0] [i_2] [i_4] [i_5] [i_1] = (((((var_9 ? (arr_2 [i_5] [i_0]) : 1))) ? (arr_17 [i_1] [i_2]) : (arr_16 [18] [i_5] [i_1 - 1] [i_0] [18])));
                        }
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            var_23 = 1721512663;
                            var_24 = (~(arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]));
                            arr_21 [i_2] [i_1] [i_1] [i_2] = (arr_11 [i_1 - 1] [i_2 - 2]);
                            var_25 = (min(var_25, ((((arr_13 [i_2 + 1] [i_2 - 2] [i_6] [i_2 - 1]) & -1266635727)))));
                            var_26 = (~1563211481);
                        }
                        var_27 ^= ((~(arr_10 [i_0] [i_1 + 1] [i_1 + 1] [i_4] [i_0])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
