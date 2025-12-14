/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = ((((max(var_5, (arr_4 [i_0] [i_1])))) ? (max((min((arr_4 [i_1] [i_0]), 1819009301)), var_3)) : (max((((arr_1 [i_0]) ? 1819009301 : 2176425856)), (arr_0 [i_0] [i_1])))));
                var_15 = (~(((arr_1 [i_0]) ? ((127 ? 1819009301 : -2478875938354943044)) : (~var_8))));
                var_16 = (min(var_7, -2475957994));
            }
        }
    }
    var_17 = (max(var_17, (((1819009298 ? -7845883875185146908 : (max(2475958008, 1010425644706465798)))))));
    var_18 = ((!((!((max(2475957987, var_6)))))));
    #pragma endscop
}
