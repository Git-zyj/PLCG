/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (-((max(var_2, (-127 - 1)))));
    var_12 = ((-(max((-127 - 1), 8))));
    var_13 = (!var_3);

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_14 = 4088;
        arr_3 [i_0] [i_0] = ((-((max(0, 1)))));

        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1] = (arr_6 [i_0 - 1] [11] [i_1]);
            var_15 |= 0;
        }
        /* vectorizable */
        for (int i_2 = 3; i_2 < 15;i_2 += 1)
        {
            var_16 = (max(var_16, 61445));
            arr_10 [i_0] [i_2] = ((((7 ? (-2147483647 - 1) : (arr_1 [i_0]))) / (arr_8 [i_2 - 2] [i_0 + 3] [i_0])));
            var_17 -= ((8191 ? (((arr_9 [i_0] [i_0] [1]) % (arr_2 [i_2 - 1] [i_0]))) : 66571993088));
            arr_11 [i_2] [i_0] = ((-((-8 / (arr_0 [i_2])))));
        }
        arr_12 [i_0 + 2] = ((~((((!(arr_0 [i_0]))) ? (((1 ? 511 : (arr_1 [i_0])))) : ((var_3 ? (arr_9 [i_0] [i_0] [i_0]) : 17591917608960))))));
    }
    #pragma endscop
}
