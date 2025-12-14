/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((var_8 <= 8191) != 11)) ? (min((32767 <= 255), -0)) : ((var_15 ? (-2556 - var_2) : var_9))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = 8394;
        arr_5 [1] |= (arr_2 [i_0 - 1]);
        var_19 = 0;
    }
    var_20 += (((max((min(1, -898273839)), var_9)) & (((min(1, 10))))));
    #pragma endscop
}
