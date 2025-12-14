/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_18 += (((((((var_1 == (arr_1 [0])))))) ? (((arr_3 [i_0 + 2] [i_0] [i_0 + 4]) / 1)) : ((min((arr_0 [i_0 - 1]), (arr_1 [i_1 + 2]))))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_3] = (((arr_5 [i_1 + 3] [i_1 - 1]) ? 0 : var_4));
                        var_19 = ((arr_6 [i_0] [i_0 + 4] [i_2] [i_2]) << (((arr_6 [i_1 - 1] [i_0 + 4] [i_0 + 2] [i_0 + 4]) - 129)));

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            var_20 &= ((~(arr_13 [i_0])));
                            arr_14 [i_4] [i_2] [i_1] [i_4] = ((~(((!(arr_8 [i_1] [i_2] [i_1] [i_0]))))));
                        }
                        for (int i_5 = 2; i_5 < 16;i_5 += 1)
                        {
                            var_21 = ((var_12 ? (~5839141792369439367) : (((var_17 ? var_4 : var_17)))));
                            arr_17 [i_5] [i_0] [i_2] [i_1] [i_0] = ((arr_6 [i_0 - 2] [i_1] [11] [i_3]) << (((arr_6 [i_0 + 2] [i_1 + 3] [i_2] [i_2]) - 112)));
                        }
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            arr_22 [i_0] [i_0 + 2] = 1;
                            var_22 = (var_7 != var_8);
                        }
                    }
                    var_23 = ((var_0 ? 3584 : ((((arr_4 [i_1 - 1] [i_0 + 4] [i_2]) ? (arr_4 [i_1 - 1] [i_0 + 4] [i_1 + 1]) : (arr_4 [i_1 - 1] [i_0 + 4] [i_1 - 1]))))));
                }
                var_24 = 5839141792369439367;
                arr_23 [i_0 + 3] = (~1);
                arr_24 [i_1 + 3] = ((((min(var_1, 53))) ? (((-1108076091 || (arr_12 [i_1 - 1] [i_0 + 4] [i_0] [i_0] [i_0])))) : (((arr_12 [i_1 - 1] [i_0 + 4] [i_0] [i_0] [i_0 - 1]) ? (arr_13 [i_0]) : (arr_12 [i_1 - 1] [i_0 + 4] [i_0] [i_0] [i_0])))));
            }
        }
    }
    var_25 |= (min(var_4, (((var_3 & var_0) ? (var_17 - var_17) : ((var_0 ? var_17 : var_13))))));
    var_26 = (((min(2147483630, 47617))) > 2910018324);
    var_27 = (min(var_27, ((min(var_4, ((((min(var_0, var_9))) + (min(var_5, var_6)))))))));
    var_28 = (min(var_28, var_3));
    #pragma endscop
}
