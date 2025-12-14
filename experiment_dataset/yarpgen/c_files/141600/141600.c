/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= ((~(min(((var_11 ? -1 : var_18)), var_6))));
    var_20 += var_5;

    for (int i_0 = 2; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_21 = (max(var_21, (((((((arr_1 [1]) ? (arr_0 [i_0 - 2] [i_0 - 1]) : 1))) ? -2 : (max(var_16, (arr_2 [i_0]))))))));
        var_22 += ((((var_1 - (arr_0 [i_0 + 1] [i_0 + 2]))) * ((((18446744073709551597 & 1796062128239020145) >= -1)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_9 [i_0] [4] [i_2] [i_1] |= ((2 ? -28 : -13));
                    var_23 -= (min((((13915169735743015612 + -1) - (((arr_6 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 1]) ? (arr_3 [i_0] [i_0]) : 18)))), ((var_16 ? ((var_15 ? 21 : 15861126170052999190)) : (-768376419 & var_2)))));
                }
            }
        }
    }
    for (int i_3 = 2; i_3 < 22;i_3 += 1) /* same iter space */
    {
        arr_12 [i_3 + 2] [i_3] = 78;

        for (int i_4 = 3; i_4 < 22;i_4 += 1)
        {
            arr_17 [i_3 + 1] [i_4] [i_3 + 1] = ((!((min((arr_7 [i_3 - 1] [i_3] [i_3] [i_3]), 1763023739)))));
            var_24 = ((((((((var_3 ? 35 : var_17))) ? (min(16777215, 28)) : ((var_9 ? 33 : 18))))) ? (arr_16 [i_3]) : var_18));
        }
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 22;i_5 += 1) /* same iter space */
    {
        var_25 -= ((1 ? -21 : 50150));
        var_26 = 1055531162664960;
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_27 = (min(-1, 794776405167156095));
        arr_23 [i_6] = (((18446744073709551615 ? -2 : (!-2))));
        arr_24 [i_6] = (((((15 ? 10021889947422222155 : 127))) ? (min((arr_13 [13]), (arr_13 [i_6]))) : ((((!(arr_13 [i_6])))))));
    }
    #pragma endscop
}
