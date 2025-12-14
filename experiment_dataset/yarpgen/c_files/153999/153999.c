/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_6 >> (((var_6 ^ var_0) - 13432014042965177312))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [9] = ((-(arr_0 [i_0])));
        arr_3 [i_0] = ((var_13 >> (-25883 && 6715498430279694401)));
        var_15 = ((!(arr_0 [i_0])));
        var_16 = (((arr_1 [i_0]) || var_2));
        arr_4 [i_0] = ((-((var_0 ^ (arr_1 [i_0])))));
    }
    var_17 -= var_10;

    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_7 [i_1] = (arr_0 [15]);
        var_18 = (((arr_5 [i_1]) / (arr_1 [i_1])));

        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            var_19 ^= (arr_9 [0] [i_2] [0]);
            arr_11 [i_1] [i_1] = (((arr_0 [i_1]) && (((17345774187020455938 >> (((!(arr_6 [i_1])))))))));
        }
        var_20 = (arr_9 [i_1] [i_1] [i_1]);
    }
    #pragma endscop
}
