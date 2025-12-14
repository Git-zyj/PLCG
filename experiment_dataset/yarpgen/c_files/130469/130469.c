/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (((var_3 != (((((var_5 ? 20450 : var_8))) ? -101807297956405961 : var_10)))))));
    var_15 = (33357 <= -6062671643242514616);
    var_16 = ((-((((min(45091, var_5))) ? var_7 : var_4))));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_17 = ((((((arr_8 [i_0] [i_0 + 1] [i_0 + 3] [i_0 + 2]) ^ (arr_8 [i_0 + 2] [i_0 - 1] [i_0 + 3] [i_0 + 2])))) ? 20450 : (((arr_8 [i_0] [i_0 + 1] [i_0 - 1] [i_0 - 1]) ^ var_10))));
                        var_18 |= ((min((((20474 ? (arr_5 [i_0 + 2] [i_1] [i_0 + 2]) : (arr_9 [i_0] [12] [i_2] [i_3])))), (min(45094, var_11)))));

                        for (int i_4 = 3; i_4 < 22;i_4 += 1)
                        {
                            var_19 ^= var_12;
                            var_20 = ((+((((arr_4 [i_0] [i_0 - 1]) != (arr_4 [5] [i_0 + 2]))))));
                        }
                        arr_15 [17] [1] [4] [i_3] |= -127;
                    }
                    var_21 = (arr_0 [13]);
                }
            }
        }
        var_22 = (min((arr_14 [i_0] [20] [i_0] [15] [i_0]), (arr_9 [i_0] [12] [i_0 - 2] [i_0])));
        var_23 = (min((((arr_9 [i_0] [i_0] [i_0 - 2] [i_0]) ? (arr_6 [i_0]) : (arr_11 [i_0] [i_0] [i_0 - 1] [i_0] [14]))), (arr_6 [20])));
        arr_16 [i_0] = 45073;
    }
    var_24 ^= var_2;
    #pragma endscop
}
