/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_18 = ((~(arr_0 [i_0])));
        arr_3 [i_0] = (((-32767 - 1) ? ((((arr_0 [i_0]) < ((min(5968426597016545797, 0)))))) : (29 > -2234)));
    }
    var_19 = (min((min(((min(var_5, 146234169))), (~15709891041632642725))), var_0));
    var_20 = var_7;
    #pragma endscop
}
