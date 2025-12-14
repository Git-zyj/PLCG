/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_5, var_3));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (max((min(17447292583271000317, 3410965654)), (min(17447292583271000317, 29771))));
        var_21 |= arr_0 [i_0];
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_22 = (min(var_22, ((max(-25101, ((((((arr_1 [0] [i_1]) ^ (arr_4 [i_1] [i_1])))) ? (arr_0 [i_1]) : (25100 > 18446744073709551614))))))));
        var_23 += ((((((max((arr_0 [i_1]), var_12))) / 999451490438551298)) == (((min(-20367, (arr_4 [i_1] [i_1]))) >> (((!(arr_3 [1]))))))));
        var_24 *= (((((max((arr_3 [2]), 25100))) ? (min(18446744073709551615, 8191)) : ((0 ? 18446744073709551606 : var_16)))));
        var_25 = var_2;
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        var_26 = 16254;
        var_27 = (((min((min((arr_5 [i_2]), var_1)), (min(1, 3224764725)))) >> (((min(((((arr_5 [i_2]) > 1))), (~1579526695))) + 1579526719))));
    }
    for (int i_3 = 2; i_3 < 14;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            var_28 = (arr_12 [i_3]);
            var_29 = (min(var_29, 0));
        }
        arr_14 [i_3 + 1] = (min((arr_5 [i_3 - 2]), (arr_13 [i_3 + 1])));
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 15;i_7 += 1)
                {
                    {
                        arr_24 [i_3] [15] [i_5] [i_3] [i_7 + 1] [i_7] = ((((~1) ? ((((!(arr_7 [i_6] [i_7]))))) : (min((arr_11 [i_3 - 1]), (arr_9 [i_7] [i_7]))))));
                        var_30 -= ((((min((arr_7 [i_3 + 2] [i_5 + 3]), (arr_23 [i_3 + 2] [i_5 + 3] [i_7] [i_7 - 1])))) ? (~18446744073709551615) : ((max((arr_7 [i_3 + 2] [i_5 + 3]), (arr_23 [i_3 + 2] [i_5 + 3] [i_5] [i_7 - 1]))))));
                        var_31 = (min(var_31, (min(((min((~0), (arr_18 [i_6])))), (((((arr_23 [i_3] [i_5] [i_5 - 1] [i_7 - 1]) ? 11363363036834987573 : 17447292583271000328)) >> (((((arr_0 [i_3 - 1]) >> 20)) - 2219))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
