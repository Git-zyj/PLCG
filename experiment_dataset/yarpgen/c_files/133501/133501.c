/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_10 = max((min((arr_1 [i_1]), var_7)), ((var_6 ? (arr_2 [i_0]) : var_2)));
                var_11 = ((((-735754675 ? 15282 : 16368)) / (arr_5 [i_0])));
            }
        }
    }
    var_12 = (~((390669267 ? -1056146517 : var_9)));
    var_13 -= min((((16382 && var_3) ? (max(var_8, var_3)) : var_3)), ((max((!-1281484889), var_8))));
    var_14 = max(var_9, 32767);
    #pragma endscop
}
