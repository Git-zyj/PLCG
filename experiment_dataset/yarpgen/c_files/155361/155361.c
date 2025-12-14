/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((-(max(-1, 1)))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_13 += (((((arr_2 [20]) >= var_11)) ? (!var_9) : (~13)));
        var_14 = ((!(arr_0 [i_0])));
    }
    for (int i_1 = 3; i_1 < 14;i_1 += 1)
    {
        arr_5 [1] &= (((max((((arr_0 [i_1 + 2]) ? -1 : 1)), (!1))) >= ((((-5 > (arr_3 [0] [i_1])))))));
        var_15 = (((((5 ? (arr_4 [1]) : var_10)) ^ (~-12))));
        var_16 = (max(var_16, ((((arr_3 [10] [10]) ? (max(var_4, ((max(0, 0))))) : (~5))))));
        arr_6 [i_1 + 2] [i_1] = min((((arr_4 [i_1 + 2]) << (((arr_4 [i_1 + 1]) - 2477407157008324174)))), (arr_4 [i_1 - 2]));
    }
    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        var_17 |= min(4, (arr_7 [0]));

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_18 ^= (arr_7 [i_3]);
            var_19 = (max((((((((arr_7 [12]) ? -20 : 4)) + 9223372036854775807)) << (min(5, (arr_11 [i_2] [i_3]))))), var_0));
        }
    }
    #pragma endscop
}
