/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_18 = (((arr_3 [i_0 + 3] [i_0 + 3] [i_0 + 2]) & (!-9223372036854775804)));

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 = ((var_11 - ((var_10 / ((((arr_8 [i_0] [i_1] [i_2] [i_3]) - 57548013)))))));
                                arr_11 [0] [7] [i_1] [i_3] [i_2] [i_3] [i_4] = ((-(max((arr_9 [i_4] [4] [i_2] [i_2] [i_1] [i_0]), -116))));
                            }
                        }
                    }
                    arr_12 [i_2] [i_1] [6] = (max(9223372036854775797, (((3349628008 / (max(var_11, 57548004)))))));
                    var_20 = ((98 ? ((-1 - ((4294967293 ? 4294967293 : 57548013)))) : 416005716));
                }
                var_21 = (arr_0 [i_0]);
                arr_13 [i_0] [i_1] = (((arr_10 [i_1] [i_0] [i_0]) >> (((((-2866736918076750500 & -9223372036854775804) - -9223372036854775755)) + 57))));
                arr_14 [i_1] [i_0] = ((-3299979123419462463 + (-15419 / 141)));
            }
        }
    }
    var_22 = var_7;
    #pragma endscop
}
