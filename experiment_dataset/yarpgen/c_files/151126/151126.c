/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_17 = (min(27195, -8062107342980864744));
        var_18 &= ((65535 * ((-(max(var_9, (-9223372036854775807 - 1)))))));
        var_19 = (min((((!((min((arr_1 [1] [i_0]), (arr_0 [i_0]))))))), ((((max(6144, (arr_0 [2])))) ? (((!(arr_1 [i_0] [i_0])))) : (((-9223372036854775807 - 1) ? (arr_2 [8] [i_0]) : 2233))))));
        var_20 = (min(var_20, ((min(((((arr_1 [i_0] [i_0]) && -906598928656381641))), 3)))));
        var_21 ^= ((((max((arr_1 [i_0] [i_0]), 17305))) > (((!var_14) ? var_5 : (arr_2 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_5 [i_1] = (arr_3 [i_1] [i_1]);

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 23;i_4 += 1)
                {
                    {
                        arr_15 [i_4] [i_4] [i_3] [i_2] [i_2] [i_1] = (((arr_9 [i_4 + 2] [i_4] [i_4] [i_4]) * 1));
                        arr_16 [i_4 + 1] [i_3] [6] [i_1] = 3381098000;
                        arr_17 [i_3] [i_4] = (arr_3 [i_3] [0]);
                    }
                }
            }
            var_22 ^= (arr_13 [i_2]);
        }
        for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
        {
            arr_22 [22] [i_1] [i_1] = (arr_19 [18]);
            arr_23 [i_5] [i_5] [i_1] = (!17861713028460527027);
        }
        for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
        {
            arr_26 [i_1] = -26927;
            arr_27 [7] [7] [i_6] = (arr_13 [i_1]);
        }
    }
    var_23 = (((!var_3) ? (~var_7) : ((((4 > (((var_2 ? var_9 : 132)))))))));
    var_24 = (~var_3);
    var_25 |= ((((-(var_16 * var_0))) > var_10));
    #pragma endscop
}
