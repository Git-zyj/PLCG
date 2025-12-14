/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-(max(((121 ? var_10 : var_11)), (!2839513921)))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_15 = ((((((-9223372036854775807 - 1) ? 51332 : -7720))) && (arr_0 [i_0])));
        var_16 = (max(var_16, (((-64 ? (arr_2 [4]) : (min(var_7, (~-93))))))));
        var_17 = (min(var_17, 9223372036854775803));
        arr_3 [i_0] = ((51325 ? 19524 : 1187026428));
        var_18 = (((23191 | -23221) ? var_10 : var_4));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_19 = (max(var_19, (((((((-9223372036854775807 - 1) ? (arr_4 [i_1] [i_1]) : (arr_4 [i_1] [i_1])))) ? (arr_5 [i_1]) : (arr_6 [i_1]))))));
        arr_8 [i_1] = (arr_6 [i_1]);
    }

    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_20 -= 666765565;
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    {
                        var_21 = (max(var_21, ((((+-1) ? (min((max(3878733284855931673, 50)), 0)) : ((min(((var_13 ? -16 : var_12)), (arr_7 [i_2] [i_3])))))))));

                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            var_22 = (var_2 > 202);
                            arr_24 [1] [1] [i_2] [i_2] [1] &= (!113368405);
                            var_23 = (((((arr_10 [i_3] [i_6]) ? 84 : 221))) | (((((var_10 >> (((arr_9 [i_4] [i_6]) - 3229848777043345977))))) - -var_12)));
                        }
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            arr_28 [i_4] [i_7] [i_4] [i_4] [i_4] [i_3] [i_7] = (max(((!(arr_17 [i_3] [10] [i_3] [i_3]))), ((!(arr_15 [i_2] [i_2])))));
                            var_24 = (~(max((arr_0 [i_3]), (arr_0 [i_4]))));
                            var_25 = (((arr_2 [i_3]) + (arr_13 [10])));
                            var_26 = ((-((-57731365 - ((max(1, 0)))))));
                        }
                    }
                }
            }
            var_27 = (max(var_27, (((var_9 << (((max(1340801507807066825, 4294967279)) - 1340801507807066822)))))));
            /* LoopNest 2 */
            for (int i_8 = 2; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    {
                        var_28 = (max(var_28, ((max(((((max((arr_33 [i_3] [3] [i_8 + 2] [3] [i_3] [i_2]), (arr_21 [i_2] [i_8] [i_2] [i_2])))) ? 253952 : (((53 ? var_5 : -290624037))))), (arr_5 [i_8]))))));
                        var_29 = ((!(arr_19 [i_2] [i_3] [i_2] [i_9])));
                    }
                }
            }
        }
        var_30 = ((((!(78 && 24))) || (max(((!(arr_10 [i_2] [11]))), (max(var_1, var_1))))));
    }
    var_31 = var_13;
    #pragma endscop
}
