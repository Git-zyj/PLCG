/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_13 * -461480218);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2] = ((((((0 ? 4122181393 : 34643)))) ? ((max(((((arr_2 [i_0] [i_1]) ^ 1))), (arr_3 [i_0] [i_1] [i_2 - 4])))) : (((max((arr_4 [i_0] [i_0 - 2] [i_0]), (arr_5 [i_1] [i_1] [i_1] [i_0 + 1]))) | var_7))));
                    var_21 = (arr_2 [i_0] [i_0]);
                    arr_9 [i_0 + 1] [i_0 + 2] [i_0] = ((((1 ? var_15 : var_16))));

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_22 = ((!(((+((min((arr_1 [i_0]), 1))))))));
                        var_23 -= (~-707841254079524720);
                        var_24 = ((~((1964979653100531680 ? (arr_7 [i_0 + 1] [i_2 + 4] [i_2 - 3] [i_2 - 4]) : var_12))));
                        var_25 *= ((((8001400419160763115 || (arr_5 [i_2 - 4] [i_2 + 1] [i_0 - 2] [i_0 - 2]))) ? (!5091008156621131293) : (((!(arr_11 [i_1]))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        arr_15 [i_1] [i_1] = (arr_3 [i_0 - 2] [i_2 + 1] [i_0 - 2]);
                        arr_16 [i_0] [1] [i_2 + 4] [i_4] = var_19;
                        arr_17 [10] = ((!(var_7 > var_0)));
                    }
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        arr_20 [i_0] [i_0] [i_0 - 2] [i_0 - 2] [i_0] = -7185602569831777518;
                        var_26 = 7185602569831777519;
                    }
                    arr_21 [i_1] [0] [i_2] = (~146);
                }
            }
        }
    }
    var_27 = ((!(((707841254079524720 ? var_11 : 7185602569831777515)))));
    #pragma endscop
}
