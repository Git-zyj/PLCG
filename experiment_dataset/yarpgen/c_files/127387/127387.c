/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_2, var_3));

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] = ((((min((max(115, -1834402508278677205)), (((-(arr_3 [i_0 - 2] [i_0 - 2]))))))) && ((((arr_1 [i_0] [i_0]) ? (!1602761272) : (arr_0 [0] [i_0]))))));
        arr_5 [i_0] [i_0] = (~15);
        var_20 = (arr_2 [i_0]);
    }
    var_21 = (~var_11);
    #pragma endscop
}
