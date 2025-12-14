/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -608394848;
    var_19 = ((((608394848 << ((((2 ? 608394847 : var_12)) - 608394846)))) < var_8));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {
                var_20 = (arr_5 [i_0 + 1] [i_1] [i_0 + 1]);
                var_21 = (((((~((var_8 & (arr_5 [i_1] [i_1 + 2] [i_0])))))) ? ((((3 ? 4294967295 : 608394848)) >> (((((arr_2 [i_0]) >> var_1)) - 8344)))) : (((((var_17 ? 608394853 : (arr_5 [i_0] [i_1] [i_1])))) ? ((min((arr_2 [i_1]), (arr_0 [i_0])))) : 1944612045))));
                var_22 = (min((((var_14 || 6789186525581539761) ? -1830936318 : (arr_5 [13] [i_1] [i_1]))), -3166486737557849165));
            }
        }
    }
    var_23 = ((~((7280790948074468092 << ((((((0 ? 1491060758 : -608394840)) + 608394869)) - 29))))));
    #pragma endscop
}
