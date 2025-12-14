/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_10 ? ((0 ? ((min(32767, 127))) : var_16)) : var_0));
    var_21 = min(var_16, 12733786987647437060);

    for (int i_0 = 2; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((((max(13637, -32742)))) > -6881744984266287642));
        var_22 = (max(var_22, (~-88)));

        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            arr_6 [i_1] [i_1] = (((102 & 6881744984266287638) * 17179869183));
            var_23 -= (arr_3 [i_0]);
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 14;i_4 += 1)
                    {
                        {
                            arr_14 [i_3] [i_1 + 2] [i_2] [i_4] = ((32750 ? ((max((arr_11 [i_1 - 3] [i_1] [i_3] [i_2] [i_4 + 2]), (arr_11 [i_1 + 2] [i_1] [i_3] [i_3] [i_4 + 2])))) : (((max(var_3, 127))))));
                            var_24 = (((12733786987647437044 ? var_19 : (~var_10))));
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            var_25 = ((-((+(((arr_4 [i_5]) + -8815709246184277710))))));
            arr_17 [i_5] [i_5] [i_5] = var_18;
        }
        var_26 = (((arr_7 [i_0 + 2]) ? 29400 : 1));
        arr_18 [i_0] = ((((((-8815709246184277728 ? var_14 : var_5)))) ? (min(5712957086062114568, 12733786987647437060)) : 25030));
    }
    for (int i_6 = 2; i_6 < 15;i_6 += 1) /* same iter space */
    {
        arr_21 [i_6 + 2] [i_6] = ((min(114, ((var_9 ? (arr_9 [9] [i_6] [i_6 + 1] [i_6]) : 78)))));
        arr_22 [i_6] [i_6] = (min((((arr_9 [i_6] [i_6] [i_6] [i_6 - 2]) ? (arr_13 [i_6] [i_6 + 2] [2] [i_6 + 1] [i_6 + 1]) : (arr_13 [i_6] [i_6] [i_6 + 1] [i_6 + 1] [14]))), (arr_13 [7] [i_6] [i_6] [i_6 - 1] [i_6 - 1])));
        arr_23 [i_6] = ((((max((~215), (arr_10 [i_6] [i_6] [i_6] [i_6] [i_6])))) == ((((((arr_0 [i_6]) ^ var_13))) ^ ((~(arr_5 [7])))))));
    }
    #pragma endscop
}
