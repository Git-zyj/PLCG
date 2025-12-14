/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((+-2855409065409356588), (var_9 && var_9)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = ((-(arr_1 [i_0])));
        arr_3 [i_0] = (((((((arr_1 [3]) != (((arr_2 [i_0]) % 15591335008300195042)))))) - var_8));
    }
    var_18 &= (((-(2855409065409356588 + var_1))));
    #pragma endscop
}
