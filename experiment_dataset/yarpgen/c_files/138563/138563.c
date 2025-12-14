/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = (min(((15 ? 33 : 1497196345)), (!53)));
            var_18 = (((((33 ? -17897 : -42))) ? 202 : (arr_0 [i_0])));
        }
        for (int i_2 = 2; i_2 < 22;i_2 += 1)
        {
            var_19 = (arr_7 [i_2] [i_0] [i_0]);
            var_20 = (max(var_20, ((((arr_1 [18]) ? (arr_7 [i_0] [4] [i_2]) : (arr_6 [14] [i_2]))))));
        }
        var_21 = ((~(arr_2 [i_0] [i_0])));
        var_22 = (min(((((arr_6 [i_0] [i_0]) ? (min((arr_1 [i_0]), (arr_7 [i_0] [i_0] [i_0]))) : var_10))), (((((arr_0 [i_0]) ? (arr_4 [i_0] [i_0] [i_0]) : var_8)) | (!var_17)))));
        var_23 = (((arr_0 [i_0]) / (arr_1 [i_0])));
    }
    var_24 = (((min((max(-1, var_4)), 65532)) ^ (((((14840622776018880639 ? 1242 : var_0)) < ((14338399990953590915 ? 2145114379 : 17897)))))));
    #pragma endscop
}
