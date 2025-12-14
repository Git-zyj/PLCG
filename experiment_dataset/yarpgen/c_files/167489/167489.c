/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] = ((1 | (arr_0 [i_0] [7])));
        arr_5 [i_0] [i_0] = 15;
        var_13 = (min(((3333719993195720630 ? 1 : 6007399345865917994)), (arr_3 [i_0])));
        arr_6 [i_0] = (min((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_2 [i_0]))), (!var_4)));
    }
    var_14 = var_9;
    #pragma endscop
}
