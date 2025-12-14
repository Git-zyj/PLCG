/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((!-var_13), (((1 >= var_11) >> var_6))));
    var_16 = ((~(min((~var_13), var_4))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_17 = (((arr_1 [i_0] [i_0]) > ((max((arr_1 [i_0] [i_0]), (arr_2 [i_0]))))));
        var_18 = (max(var_5, (((!(((var_10 ? (arr_0 [15] [i_0]) : (arr_0 [i_0] [i_0])))))))));
        arr_3 [i_0] = ((1063294440 ? (((min(1, -40)))) : 3127135696));
        arr_4 [i_0] [i_0] = var_10;
    }
    #pragma endscop
}
