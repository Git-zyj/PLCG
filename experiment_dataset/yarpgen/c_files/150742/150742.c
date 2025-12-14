/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_18;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = (min(var_20, (arr_0 [i_0])));
        arr_2 [8] = (min(3202612504151724595, (17 - -17)));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_21 = (arr_3 [i_1]);
            arr_6 [i_0] [i_0] = -2884880076517639633;
        }
        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                var_22 = (max((max(18446744073709551615, 0)), (arr_5 [i_0])));
                var_23 = (max(var_23, ((((((arr_4 [i_2 - 1]) >= (arr_4 [i_2 - 2]))) && ((((arr_4 [i_2 + 1]) >> (arr_4 [i_2 - 1])))))))));
            }
            var_24 += (min((arr_11 [i_2 - 2] [i_2 - 1] [i_2] [i_2]), (max((arr_10 [i_2 - 1] [i_2] [i_2]), (arr_3 [i_0])))));
            arr_12 [i_0] [i_2] [i_2] = (((~17) != (!-26)));
            arr_13 [i_0] [i_0] [i_2] = (((((0 ? (arr_0 [i_2 + 1]) : (arr_0 [i_2 - 1])))) == var_17));
        }
        var_25 = (min(var_25, ((max((arr_3 [i_0]), (min((max((arr_8 [i_0] [i_0]), (arr_3 [1]))), (arr_10 [i_0] [i_0] [i_0]))))))));
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        arr_16 [i_4] [i_4] = (((arr_1 [i_4]) & ((max(-126, var_11)))));
        arr_17 [i_4] [i_4] = ((((((21 > -2) ? (((3715079078 ? var_8 : 595296189))) : (arr_14 [i_4] [i_4])))) ? (max((arr_15 [i_4]), (((arr_14 [6] [2]) * (arr_10 [1] [i_4] [i_4]))))) : (((18 ? (min(3, 7)) : 4)))));
        var_26 += ((((((arr_3 [1]) || (arr_3 [i_4]))) && ((min((arr_5 [i_4]), (arr_10 [i_4] [i_4] [i_4])))))));
    }
    #pragma endscop
}
