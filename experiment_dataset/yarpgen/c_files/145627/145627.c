/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_19 = ((-var_8 ? ((var_11 ? (arr_2 [i_0] [i_0 - 2]) : (arr_2 [i_0 - 1] [i_0 - 2]))) : (207 != 255)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_20 |= (max(((~(var_9 | var_18))), 1154730323));
                                arr_14 [i_0] [8] [i_2] [i_3] [i_4] [0] = (((((var_0 - var_1) ? 1 : ((var_1 << (3978411192 - 3978411186))))) >= ((((1129376269 >= ((var_5 ? 17652467507181816592 : var_17))))))));
                                arr_15 [11] [11] [11] [i_3] [0] [i_3] [i_3] = (((var_1 | 33) ? -32767 : (((1 || (arr_10 [i_3] [i_2]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = var_7;
    var_22 = ((((max((!2542132910), var_6))) ? var_18 : ((((var_14 || (var_13 > 1)))))));

    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        arr_18 [6] [6] = (((((var_2 << (120 - 114)))) ? (var_10 - var_12) : (arr_0 [i_5])));
        var_23 = ((~((max(1, var_14)))));
        var_24 = (max(var_24, (((((1145659206808825108 ? 144 : 3008452943)) != -1430876107)))));
    }
    /* vectorizable */
    for (int i_6 = 4; i_6 < 16;i_6 += 1)
    {
        var_25 = (-17932 < -1145659206808825084);
        var_26 -= ((-32766 ? 65535 : ((var_11 ? var_11 : var_1))));
        arr_23 [i_6 - 4] [i_6 - 4] = ((7703059 | (arr_22 [i_6 + 1])));
    }
    #pragma endscop
}
