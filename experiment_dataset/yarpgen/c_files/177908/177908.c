/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0 + 1] [i_0] = ((((max(112, (arr_2 [5] [i_0])))) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0])));
        var_10 = ((((arr_1 [i_0]) ? (max(11192800159663266463, (arr_0 [i_0]))) : (((~(arr_0 [i_0])))))));
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        arr_8 [i_1] [i_1 - 2] = arr_1 [i_1];
        var_11 = (((max(var_5, (arr_2 [i_1 - 2] [i_1]))) * (((970980414 ? 1 : 3951364012)))));

        for (int i_2 = 4; i_2 < 11;i_2 += 1)
        {
            arr_12 [i_1] = (((((7253943914046285174 ? 33554432 : 1174879902874505815))) ? 4261412885 : (((((max(7253943914046285149, 28644))) ? ((min(var_0, (arr_11 [i_1] [i_2])))) : -17)))));
            var_12 += ((((((1 ? -28669 : 11192800159663266463)) >> (((arr_7 [12]) + 3086103907785790692)))) >= (((~(arr_0 [i_1]))))));
            arr_13 [i_1] = 11192800159663266463;
        }
    }
    var_13 = max(var_2, (max(((var_4 ? var_0 : var_4)), var_2)));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            {
                var_14 *= (max(var_7, ((((arr_18 [i_3] [i_4] [i_3]) ? (arr_18 [i_3] [i_4] [i_4]) : var_8)))));
                var_15 += (((arr_18 [i_4] [22] [i_4]) ? ((-((var_3 ? var_3 : 18446744073709551615)))) : var_8));
                var_16 -= 123;
                var_17 += var_0;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_18 |= var_7;
                            arr_28 [2] [23] [i_4] [i_6] [i_4] = max((max((var_5 | var_1), (arr_22 [i_3]))), (((var_0 / 71) ? (arr_23 [i_6 - 1] [i_6 - 1] [i_6]) : ((((!(arr_23 [i_3] [i_4] [i_5]))))))));
                            arr_29 [i_4] [i_4] [i_6] [i_5] |= var_1;
                            var_19 = (max(var_19, ((((arr_24 [i_4] [12] [i_5] [i_5] [i_6] [i_6 - 1]) ? ((min((!2069305366), 191))) : (((((var_4 ? -28645 : 4261412864))) ? ((-(arr_21 [i_3] [i_3] [i_5] [i_6]))) : -0)))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
