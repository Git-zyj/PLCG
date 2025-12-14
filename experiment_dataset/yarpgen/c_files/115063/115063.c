/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_18 = (max(var_1, (((arr_8 [i_0] [i_1] [i_0] [i_3]) ? (arr_4 [i_0] [i_0] [i_1]) : (arr_3 [i_1])))));
                        var_19 &= ((-((min(6161, (arr_6 [i_0] [i_2] [4]))))));
                        var_20 = (-9223372036854775807 - 1);
                        var_21 |= (arr_0 [i_3]);
                    }
                    var_22 = ((~(max((max((arr_8 [i_0] [i_1] [i_1] [i_1]), var_3)), ((max((arr_4 [13] [13] [i_1]), 6161)))))));
                    arr_13 [i_1] [i_1] [i_2] = var_16;
                }
            }
        }
        arr_14 [i_0] [i_0] = ((((((arr_2 [6]) / (arr_2 [20])))) ? (min((((!(arr_5 [14] [14])))), (((arr_3 [1]) ? var_6 : (arr_2 [1]))))) : (((~(arr_1 [i_0]))))));
    }
    var_23 += var_12;
    var_24 = (max((((max(var_2, 26502)) >> ((((min(17738, var_4))) - 17685)))), 26855));
    var_25 = (((((~26855) ? 48275112411278370 : 0)) <= var_9));
    var_26 += ((min(49318, (!17466))));
    #pragma endscop
}
