/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_11 = -37307;
        var_12 = (~53);
    }
    var_13 += (min((~-1685293930), (var_6 >= 8795891846609593231)));
    #pragma endscop
}
