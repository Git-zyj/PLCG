/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_15;
    var_21 = (min(1, var_7));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_22 = (min(((~(max((arr_1 [i_0 + 2]), 9223372036854775807)))), (((((max(-1674081977, (arr_0 [i_0 + 1])))) ? (!-9144175352205330063) : (arr_1 [i_0]))))));
        arr_3 [i_0] [i_0 - 1] = ((((min(((~(arr_1 [i_0]))), (arr_1 [i_0])))) ? (arr_0 [1]) : (min((min((arr_1 [i_0 + 1]), (arr_2 [i_0]))), (arr_0 [i_0 + 2])))));
        arr_4 [i_0] = (arr_0 [i_0 + 3]);
    }
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        var_23 ^= ((~((max((arr_5 [i_1 + 1] [i_1 + 1]), (arr_5 [i_1 + 1] [i_1 + 1]))))));
        var_24 = min(((min((arr_6 [i_1 + 1]), (arr_6 [i_1 + 1])))), (min((arr_7 [i_1 + 1]), (arr_5 [i_1 - 1] [i_1 - 1]))));
        var_25 = min((((min(-20713, -1674081983)) ^ (arr_5 [i_1 + 1] [i_1]))), (((arr_6 [i_1 + 1]) ? (arr_5 [i_1 - 1] [i_1]) : (arr_6 [i_1 - 1]))));

        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            arr_11 [i_2] [i_2] = 3983084669762674461;
            var_26 = (arr_7 [i_1]);
            arr_12 [i_2] [i_2] = (arr_8 [i_2]);
        }
        for (int i_3 = 1; i_3 < 23;i_3 += 1)
        {
            var_27 = (((((-(min(28, 1674081996))))) || (arr_10 [i_1] [10])));
            var_28 = ((+(max((arr_5 [i_3 + 1] [i_1 + 1]), (((arr_9 [i_1] [i_3 + 1]) ? (arr_7 [i_1]) : (arr_5 [i_1 + 1] [i_3])))))));
        }
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            var_29 = (min((min((-1674081977 - -9116872347730975787), -555476339)), (((!((min(1674081977, 13))))))));
            var_30 = (min((((((~(arr_16 [i_1]))) & -26061))), (max((((!(arr_6 [i_1])))), (((arr_6 [i_1 - 1]) - (arr_13 [i_4] [i_1 + 1])))))));
        }
        var_31 = (min((arr_16 [i_1 - 1]), ((+((((arr_7 [i_1 + 1]) || 9144175352205330063)))))));
    }
    #pragma endscop
}
