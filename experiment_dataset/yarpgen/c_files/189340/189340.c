/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_16 = ((-((-(arr_3 [i_0] [i_0])))));
        var_17 += (((-(arr_3 [i_0] [i_0]))));
        var_18 ^= (var_15 ? -16777216 : 1946431926);
    }

    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_19 = (min(var_19, (((-6949318732190849003 ? (arr_6 [1] [i_1]) : (((arr_6 [i_1] [i_1]) ? 15180635533669754294 : (arr_5 [i_1] [i_1]))))))));
        var_20 += ((var_4 ? var_0 : var_6));
        var_21 = (max((!1), var_0));

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_22 = 1074542740;
            var_23 = (max(1100530068240996034, 6312));
            arr_11 [i_1] [i_1] [i_1] = 1;
            var_24 = (min((arr_7 [i_1]), (arr_7 [i_1])));
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            arr_15 [i_1] = ((-((-(arr_8 [i_1] [i_3] [i_3])))));
            var_25 = (~-19019);
            var_26 = (min(((-(arr_12 [i_1] [i_1] [i_1]))), (((-(arr_9 [i_1] [i_1] [i_1]))))));
        }

        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            var_27 = (max((-32767 - 1), 122));
            arr_18 [i_1] [i_1] [i_1] = 10107096184424254186;
        }
    }
    var_28 = (min(var_28, var_13));
    var_29 = ((max(var_13, ((min(var_5, 53715))))));
    #pragma endscop
}
