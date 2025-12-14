/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_4 - 1] [i_3] [i_1] [i_1 + 2] [i_0] = 128;
                                var_15 = var_6;
                            }
                        }
                    }

                    for (int i_5 = 2; i_5 < 12;i_5 += 1)
                    {
                        arr_17 [i_1] = (min(((-(arr_15 [i_2 - 2] [i_5 + 1]))), (arr_15 [i_2 + 1] [i_5 - 2])));
                        var_16 = (min(((var_1 | (arr_15 [i_0] [i_5 + 1]))), -0));
                        var_17 = (min(var_17, ((((arr_5 [i_0] [i_0] [i_0] [i_0]) ? (min(((var_7 ? 1281302589 : var_2)), var_0)) : ((0 ? (arr_1 [i_5 - 1]) : (~var_14))))))));
                        arr_18 [i_0] [i_1] [i_1 + 3] [i_1] = (((((var_2 ? var_4 : var_7))) ? 1 : 12));
                    }
                    var_18 = (((((~(arr_9 [i_0] [i_1] [i_1] [i_2 - 2] [i_2])))) ? (((arr_6 [i_0 - 2] [i_0 + 3] [i_1] [i_2 - 2] [i_2 + 3]) ? var_7 : -8156)) : var_10));
                    var_19 = -1281302589;
                }
            }
        }
    }

    for (int i_6 = 1; i_6 < 23;i_6 += 1)
    {
        var_20 = (max(var_20, ((min((arr_19 [i_6 + 2]), (arr_20 [i_6 + 2]))))));
        var_21 &= (max((min(1819341034, (~1))), (((-920013535 ? 1 : (0 / 1))))));
        var_22 = ((~(var_14 * var_8)));
    }
    var_23 -= ((-(!0)));
    var_24 = ((((3261403444606968065 ^ var_2) >= 255)) ? var_10 : 1819341037);
    var_25 = var_0;
    #pragma endscop
}
