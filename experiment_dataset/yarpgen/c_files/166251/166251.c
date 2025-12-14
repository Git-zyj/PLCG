/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;
    var_15 = (!var_9);

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            var_16 = ((~(arr_4 [i_1 + 2] [i_0 + 1])));
            var_17 = (max(var_17, (((~(arr_2 [i_1 + 2] [i_0 - 3]))))));
        }
        var_18 = (min(var_18, (arr_1 [i_0 - 4])));
    }
    #pragma endscop
}
