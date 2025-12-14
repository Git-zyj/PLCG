/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_10 != ((-(0 + var_16)))));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_20 = (max(var_20, (!var_6)));
        arr_3 [i_0] = ((-(((arr_2 [i_0 + 1]) ? (arr_2 [2]) : (((min((arr_0 [i_0]), var_1))))))));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_7 [i_1] = (((((((arr_5 [i_0] [i_0] [i_0 - 1]) & (arr_4 [i_0])))) ? var_15 : (!7))));
            var_21 = ((var_9 ^ (((min((min(-11, 30423)), 26))))));
            var_22 = (((min(30110, (arr_4 [i_0 - 1]))) | -var_6));
        }
        var_23 = (max(var_23, (((!((((((4288 ? var_12 : (arr_0 [2])))) ? (max(var_10, 9442)) : var_13))))))));
    }
    #pragma endscop
}
