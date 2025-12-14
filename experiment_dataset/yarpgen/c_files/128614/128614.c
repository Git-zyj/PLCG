/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        var_17 += (((((var_4 ? -718388660 : (arr_1 [i_0 + 1])))) / (var_16 - var_3)));
        var_18 = (((((min((arr_1 [i_0]), (arr_1 [i_0])))) ? (arr_1 [i_0 - 1]) : ((max(var_6, var_2))))));

        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            var_19 = ((-((((min(var_12, (arr_1 [i_0])))) ? (min(var_8, 1674759880175218169)) : (arr_4 [i_1 - 1] [12] [i_1 - 1])))));

            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                var_20 = ((-((~(arr_3 [i_2 - 1] [i_2 - 1] [i_2])))));

                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    var_21 |= (min((((arr_9 [i_0 - 2] [i_1]) ? (arr_9 [i_0 - 2] [i_0]) : (arr_11 [i_2 - 1] [i_2 - 1]))), (((((min(var_16, 1023))) ? ((min(55203, -1033))) : (arr_5 [1] [10]))))));

                    for (int i_4 = 2; i_4 < 12;i_4 += 1)
                    {
                        var_22 |= var_11;
                        var_23 = ((~(((min((arr_5 [i_1] [i_1]), var_0))))));
                        var_24 = 4294967295;
                    }
                    var_25 = 134;
                    var_26 -= (((((arr_5 [i_0 - 1] [i_0 - 3]) <= (arr_3 [i_0] [i_1 - 1] [i_2 - 1]))) ? (((!683855756) ? 1033 : 19776)) : ((-((-718388660 ? var_4 : var_9))))));
                }
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    var_27 = (min(var_27, 195));
                    var_28 ^= (((((min(var_15, (arr_7 [i_0] [i_1])))) || (!1502))));
                    var_29 += ((!((((arr_15 [i_1 + 3] [i_0 - 4] [i_0 - 1] [i_0]) ? (arr_15 [i_1 + 3] [i_0 - 4] [i_0] [0]) : (arr_15 [i_1 + 3] [i_0 - 4] [i_0 - 4] [i_0 - 4]))))));
                }
                var_30 = (((var_14 ? ((min((arr_0 [i_0] [5]), var_7))) : ((var_5 ? (arr_0 [i_0] [i_1 + 1]) : (arr_9 [i_0] [i_2]))))) - (((var_12 ? ((max(27029, 1502))) : (arr_15 [i_0] [8] [i_1] [i_2 - 1])))));
                var_31 ^= 5540;
                var_32 = ((min(-32745, 14169293822273837722)));
            }
            for (int i_6 = 2; i_6 < 14;i_6 += 1)
            {
                var_33 = (max((((((var_13 ? -2147483640 : (arr_7 [i_0] [i_0])))) ? ((max(-29360, 8))) : 1474337133970685166)), ((min((arr_5 [i_6] [i_1 + 2]), 255)))));
                var_34 = 13558;
            }
            var_35 = ((((((arr_2 [i_0 - 1] [i_1 - 2] [i_1 - 2]) ? var_0 : ((var_5 ? -15773 : var_10))))) ? 1600026940 : (max(1, (arr_8 [i_1 + 1])))));
            var_36 |= (((22 ? (!4294967289) : (min(-1, 6098511576720391683)))));
        }
    }
    var_37 ^= var_10;
    #pragma endscop
}
