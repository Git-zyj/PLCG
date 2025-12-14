/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_20 = (-1276375253 + -5993);
                var_21 *= (max(2988918466, -1));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_22 = (((arr_7 [8] [i_3] [i_2]) < (!1306048829)));
                                var_23 = (max((((((min(4232988443340199911, var_10))) || ((min(2988918466, (arr_11 [i_4 + 1] [i_3] [i_2] [i_2] [i_1] [i_1] [i_0]))))))), (min(-0, (max(var_13, var_11))))));
                                var_24 = (min((~6081), 2988918466));
                            }
                        }
                    }
                }
                arr_13 [i_0] = (max((0 > 5114950096650474807), 536870911));
                arr_14 [i_0] [i_0] = ((!((max(-379896930, 0)))));
            }
        }
    }
    var_25 = -2252;
    var_26 = (min(var_2, var_3));
    var_27 = (((((((min(-3403455461892028096, 1306048829))) ? (max(-1074020639, -3403455461892028096)) : var_18))) ? var_15 : (((((var_5 ? 0 : 0))) ? ((var_17 ? var_15 : var_2)) : ((((-5 + 2147483647) << (var_14 - 11277161606797569926))))))));
    #pragma endscop
}
