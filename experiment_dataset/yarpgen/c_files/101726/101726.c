/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, var_14));
    var_17 = (min(var_17, var_13));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_18 = (min(var_18, (arr_3 [i_0] [10])));
                var_19 = (min(((((((var_11 ? (arr_5 [i_0] [i_0]) : var_7))) && (arr_1 [i_0])))), ((((max(var_0, var_9))) ? (arr_5 [i_1 + 3] [i_1 - 1]) : -120503156756960282))));
                var_20 = (max(var_20, ((((min((var_14 - -2), ((min(var_10, var_11))))) + (((arr_0 [i_1] [i_0]) - (max((arr_0 [i_0] [4]), 9223372036854775789)))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_21 = (max((arr_12 [i_0] [i_1] [i_2] [i_1] [9] [5]), ((var_1 ? (~9223372036854775789) : (arr_9 [i_1] [i_1] [1] [i_3 - 1])))));
                            var_22 = (max(var_22, (((!(((var_1 ? (arr_1 [i_0]) : ((max((arr_5 [i_0] [i_0]), 1897448822)))))))))));

                            for (int i_4 = 0; i_4 < 14;i_4 += 1)
                            {
                                var_23 = (max(var_23, (((((((((var_0 ? (arr_8 [0]) : var_0))) ? 68156472 : (arr_5 [i_0] [i_1])))) > (max((arr_7 [10] [i_1] [i_3 + 4] [i_1 + 3]), (max(-35, (arr_3 [i_3] [0]))))))))));
                                var_24 = ((((((var_4 ? 2942375707217919039 : (arr_11 [4] [i_1] [i_1] [i_0]))) || (arr_7 [i_1] [i_1] [i_1] [i_1])))));
                                var_25 = max((arr_0 [i_4] [i_4]), ((max((arr_10 [i_0] [0] [i_2]), ((~(arr_4 [i_1])))))));
                            }
                            for (int i_5 = 0; i_5 < 14;i_5 += 1)
                            {
                                var_26 = (min(((var_14 ? var_0 : (arr_3 [i_1] [i_1]))), (arr_10 [i_0] [i_1 + 1] [i_1])));
                                var_27 = (max(var_27, -9223372036854775806));
                                var_28 = ((+((var_5 ? (((var_15 + 9223372036854775807) << (((var_0 + 18877) - 55)))) : (((max(0, (arr_8 [i_1])))))))));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 1;i_6 += 1)
                            {
                                var_29 = ((arr_6 [i_1] [i_3 + 2] [i_2]) ? (arr_6 [i_1] [i_3 + 2] [i_3 + 2]) : (arr_6 [i_1] [i_3 + 1] [i_3 + 4]));
                                var_30 = (~(arr_12 [i_3 + 2] [i_1 + 2] [i_1] [i_1 - 1] [i_1 - 1] [i_0]));
                            }
                            var_31 = (((arr_14 [13]) ? (max(1654305102, 0)) : (((+((max((arr_7 [i_1] [1] [i_1] [i_1]), (arr_11 [i_0] [i_0] [i_1] [i_3])))))))));
                        }
                    }
                }
                var_32 = ((+((((arr_19 [i_0] [i_1] [i_0] [i_0] [i_1] [i_1 + 3]) - 19902)))));
            }
        }
    }
    var_33 = (max(var_33, var_9));
    var_34 = ((-1571 ? 12230579630470951663 : 117));
    #pragma endscop
}
