/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 16198486731799133025;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_13 = var_10;
                var_14 = ((16198486731799133047 ? -100 : -83));
                var_15 = (((~((var_6 ? var_10 : -100)))));
                var_16 = max((max((82 ^ 14939511052510632012), (var_3 == 9223372036854775807))), (arr_3 [i_0]));
                arr_6 [i_0] [i_0] = ((~(max(((84 ? 2248257341910418590 : (arr_5 [16] [16]))), (2390 && 261888)))));
            }
        }
    }
    var_17 = (max(var_17, ((max(var_7, (max(var_5, var_3)))))));
    #pragma endscop
}
