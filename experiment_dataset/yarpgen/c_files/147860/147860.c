/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 = (!24561);
        var_11 = (min((~-68), ((min(16267, -2688)))));
        arr_2 [i_0] [22] = (((-16267 ? ((max(6870626574462865595, -16284))) : (~18446744073709551615))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (min(((min(-2934, -16268))), (max(4294967295, -6870626574462865596))));
        arr_7 [i_1] = ((~(min(-14553, ((913129832 ? -16267 : -16268))))));
    }
    var_12 = (((16267 ? 5988 : 2933)));
    var_13 = ((~(min(var_1, ((min(3030385504, 5994)))))));
    var_14 = var_9;
    var_15 = var_0;
    #pragma endscop
}
