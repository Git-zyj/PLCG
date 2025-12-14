/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] = var_15;

                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    var_20 = var_4;
                    var_21 = (((max(9047380162346395424, -54)) << (((arr_4 [i_2 - 3] [i_2 - 1] [i_2 - 3]) - 6678275930099112320))));
                }
                for (int i_3 = 2; i_3 < 18;i_3 += 1)
                {
                    var_22 = ((202 ? 190 : 9047380162346395424));
                    arr_14 [i_3] [i_1] = (~255);
                }
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    arr_18 [i_0] [i_1] = (((arr_2 [i_4] [i_1]) ? 1627805225 : ((((arr_15 [i_0] [i_0] [i_0] [1]) ? var_9 : 109)))));
                    var_23 = ((-((-4686 ? (arr_12 [9] [i_1] [6] [i_1]) : (arr_12 [10] [i_1] [i_0] [i_1])))));
                    arr_19 [i_1] [14] [i_4] [i_4] = (!62887);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_24 = (arr_9 [i_6 + 1] [i_1] [10]);
                                arr_25 [9] [i_1] [i_4] = ((((var_0 ? (arr_21 [i_1] [0] [i_6 + 1] [i_6 - 1] [i_1]) : 1)) * ((-4872836730558343518 ? 1 : -9047380162346395425))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    var_25 = (arr_28 [i_0]);
                    var_26 = (max(var_26, (arr_23 [i_1])));
                }
            }
        }
    }
    var_27 = 1329654954;
    #pragma endscop
}
