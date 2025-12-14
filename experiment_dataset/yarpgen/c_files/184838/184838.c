/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0 + 1] [i_0 - 1] [8] &= (((~824633720832) ? ((((max((arr_1 [i_0]), 159))) - ((var_15 << (((arr_3 [i_0]) - 709714126)))))) : 169));
                var_20 = (max(var_20, (~214)));
                arr_7 [i_0] [i_1] &= ((!(((((((arr_4 [i_0] [i_1] [i_0 + 1]) ? (arr_2 [i_0] [i_1] [i_1]) : -824633720843))) ? (!var_8) : ((((arr_5 [i_1] [i_0]) || 74))))))));
            }
        }
    }
    var_21 = var_0;
    var_22 *= ((var_3 * (max(-var_17, var_7))));
    var_23 = var_5;
    var_24 = ((-((var_4 / (var_5 / 159)))));
    #pragma endscop
}
