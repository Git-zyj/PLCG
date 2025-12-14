/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_1] [9] = (min(((((max(-26388, 25))) ? (((arr_3 [0]) ? (arr_4 [i_1] [i_0] [i_0]) : 18446744073709551600)) : (arr_0 [i_1]))), ((((arr_2 [i_0] [i_1]) * ((min(var_14, var_5))))))));
                arr_6 [i_0] [i_0] [i_0] = (min((arr_2 [i_0] [8]), (arr_0 [i_0])));
            }
        }
    }
    var_19 = ((((((!var_6) ? (~15499778128755744980) : (0 <= 26388)))) && ((((~var_1) & ((var_0 ? 4118639363213606950 : var_10)))))));
    var_20 = var_14;
    #pragma endscop
}
