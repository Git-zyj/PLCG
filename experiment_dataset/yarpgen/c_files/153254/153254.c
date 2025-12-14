/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((max(73, -82))) ? (((-1265783461 ? 10 : -66))) : ((-1 ? 4421127200382377288 : -18))))) ? ((((max(4421127200382377277, 1895181329))) ? var_9 : (6101781630440516280 | -4421127200382377277))) : (7 && 56));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_14 = max((arr_0 [i_0]), ((((arr_0 [i_0]) ? 315224950 : 315224950))));
        var_15 = (((max(7558019750370203825, (((315224938 ? 2292059641 : var_9)))))) ? 4421127200382377288 : -4421127200382377277);
    }
    #pragma endscop
}
