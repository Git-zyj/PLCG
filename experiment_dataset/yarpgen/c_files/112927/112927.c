/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                var_11 -= (255 + 1);
                var_12 = (((((!18446744073709551615) ? 255 : var_6)) != ((((arr_7 [i_1 - 2]) ? (arr_5 [i_1 - 1] [i_1]) : (arr_3 [i_1 + 1] [i_1]))))));
                var_13 = (((-631094250 ? 16436324316792025885 : 4095)));
                var_14 = (59 ^ 2097151);
            }
        }
    }
    var_15 = ((((min(var_10, (-22021 | var_7)))) ? -1 : ((-(min(283927664132060298, 16382))))));
    var_16 = ((var_5 ? ((14785245074764349116 ? 33 : 10739323677490016607)) : ((min(6760193326433562256, -2057668336)))));
    #pragma endscop
}
