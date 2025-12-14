/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= var_2;
    var_15 = (max(((var_0 <= (1 && var_7))), 1));
    var_16 ^= (min(var_5, ((((1 ? 1 : var_1))))));

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, (((-1 && (((1 ? 328941187 : 0))))))));
                    arr_8 [i_0] [i_1] [i_2] [i_0] = var_11;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_18 = ((!((((arr_10 [i_0] [9] [i_3]) << (var_5 - 12555822050884726706))))));
                        var_19 = (arr_2 [i_0 + 3] [i_0]);
                        var_20 -= ((var_1 ? var_2 : -1));
                        var_21 = (var_6 & 246922203);
                        var_22 = (~65529);
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 8;i_4 += 1)
                    {
                        arr_13 [i_0] [i_1] [i_2] [3] = (1 <= 420424324);
                        var_23 = (max(var_23, (!156)));
                        var_24 &= 1;
                    }
                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        var_25 = 1;

                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            var_26 = (((((0 ? (-32767 - 1) : 4503324749463552))) ? (!117) : (min(10191270635912261707, (((var_3 > (arr_12 [i_5 - 1] [i_1] [i_2] [i_5 - 1] [i_0]))))))));
                            var_27 = -218;
                            var_28 = ((1 | ((-((4503324749463527 ? 0 : (arr_18 [i_0])))))));
                            var_29 = var_4;
                        }
                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 9;i_7 += 1)
                        {
                            arr_24 [i_0] [i_1] [i_0] [i_5 + 1] [i_5 + 1] [i_7 + 1] = ((8255473437797289907 + (-32767 - 1)));
                            var_30 = (arr_2 [i_0 + 1] [i_0]);
                        }
                        arr_25 [i_0] [i_0] [i_0] [i_1] = 1;
                        arr_26 [i_2] [i_0] = ((-32762 ? (min((max((arr_5 [i_0] [3]), -1)), var_9)) : ((0 << (-8 - 4294967261)))));
                        var_31 = ((!(((1 ? var_12 : 0)))));
                    }
                    arr_27 [i_0] [i_1] = 18446744073709551609;
                    var_32 = (((max(22, -8))));
                }
            }
        }

        for (int i_8 = 1; i_8 < 8;i_8 += 1)
        {
            var_33 = (max(var_33, (!-15337)));
            var_34 = ((!(0 / 2080374784)));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 0;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    {
                        var_35 = (max(var_35, 1));
                        var_36 = 0;
                        var_37 = ((((15255 ? (425593985 * 183) : -89))) ? var_10 : 62378);
                    }
                }
            }
        }
    }
    #pragma endscop
}
