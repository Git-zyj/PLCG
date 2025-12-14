/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_6, 1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_11 = (max(var_11, (((((39880 ? (((arr_3 [i_2 + 1] [0]) % var_9)) : var_7)) << ((((39880 ? ((var_6 ? (arr_7 [i_1] [1]) : 34786)) : var_3)) - 285440767)))))));
                        arr_10 [i_0] [i_2] [i_3] = ((((min(30750, (arr_6 [i_2])))) * (((!(((75621182 ? 2059003239 : var_4))))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            var_12 = ((~((((arr_3 [i_0] [i_0]) <= var_2)))));
                            var_13 += (!1687747496);
                            var_14 = (!var_4);
                            var_15 = (((((2059003239 ? var_3 : -899055072))) ? (((0 ? var_0 : var_8))) : 1358177730070003396));
                        }
                        var_16 = ((!(arr_11 [i_2 + 1] [i_2 - 1])));
                        var_17 = 25655;
                    }
                    var_18 = ((((min((arr_12 [i_0] [i_1] [i_1] [i_1] [i_2]), (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])))) && ((((arr_14 [7] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 1]) + var_4)))));
                }
            }
        }
    }
    #pragma endscop
}
