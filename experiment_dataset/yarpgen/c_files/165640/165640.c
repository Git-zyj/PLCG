/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_11 = ((((((arr_1 [i_0]) ? -24046 : (arr_0 [i_0 - 1] [i_0 - 1])))) ? var_5 : ((((var_5 - (arr_1 [i_0]))) % ((max((arr_1 [i_0]), 104)))))));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_12 = (((arr_1 [i_0 - 2]) + (arr_1 [i_0 + 3])));
            var_13 = ((((var_6 ? (arr_0 [i_1] [i_0]) : (((25047 ? (arr_3 [i_1]) : -25069))))) | ((max((arr_3 [i_1]), 152)))));
        }
        arr_4 [i_0] = (((var_3 + 1) ? (arr_2 [i_0] [i_0]) : (~1)));
    }
    var_14 = ((((((((var_4 ? var_1 : var_7))) ? var_5 : (min(var_5, 0))))) ? (min((min(18446744073709551615, 10)), ((var_4 ? var_1 : 5478573062653217450)))) : var_3));
    var_15 = (((~var_9) ^ 1));
    #pragma endscop
}
