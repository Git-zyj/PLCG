/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    var_11 |= (min(var_8, ((((((max(-3810, 19)))) <= var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_12 = (max(19, 237));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_13 = -25;
                            var_14 = ((!((max(236, 19)))));
                            var_15 = 224;
                            var_16 = (max(var_16, (((+((((237 & 239) && 18))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        {
                            var_17 = (min(var_17, (!241)));
                            var_18 = (min((min(32, (~228))), (((237 == (237 & 18))))));
                        }
                    }
                }

                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    var_19 = 19;
                    var_20 = (max(((min(18, 230))), (min(-238, (44 & 236)))));
                    var_21 &= (max(237, ((max(238, 19)))));
                }
                for (int i_7 = 4; i_7 < 19;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        var_22 = ((min(237, 18)));
                        var_23 = ((-(~238)));
                        var_24 = (!236);
                        var_25 += -18;
                    }
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        var_26 |= (!36);
                        var_27 += (max(237, (237 & 20)));
                        var_28 = (19 == 236);
                    }
                    var_29 = (min(var_29, ((max((~236), ((min(236, 0))))))));
                    var_30 = -8;
                    var_31 = (max(var_31, ((max((!255), (0 || 18))))));
                }
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    var_32 += ((!((max((min(4, 237)), (min(236, 29)))))));

                    for (int i_11 = 3; i_11 < 21;i_11 += 1)
                    {
                        var_33 = (!231);
                        var_34 = (max((~1), ((max(226, (max(236, 236)))))));
                    }
                    var_35 = ((~(max(224, -227))));
                    var_36 *= ((~((((max(216, 12))) >> ((((max(227, 49))) - 205))))));
                }
            }
        }
    }
    var_37 = (~243);
    #pragma endscop
}
