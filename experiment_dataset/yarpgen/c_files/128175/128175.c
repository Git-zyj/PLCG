/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((((((var_6 ? 0 : 28027))) ? var_0 : (1 - var_8))), (((((var_14 ? 1 : var_14))) ? (((var_10 ? 762920620 : var_12))) : (((-4950469542103605873 + 9223372036854775807) << (((-5916488711052532122 + 5916488711052532179) - 56))))))));
    var_16 = ((((max((((29 ? var_7 : var_5))), ((4526301981618698489 ? 1 : var_3))))) ? ((-(var_5 < var_12))) : ((((16247 ? -2549773979105682645 : -5299249057174480299))))));
    var_17 = ((var_9 ? ((((max((-2147483647 - 1), var_0))) / ((3436 ? -1302861235 : 396751280440737108)))) : ((min(113, (var_13 + 98))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_18 = max((~var_0), (arr_6 [i_0 + 3] [i_0 + 2] [i_0 + 1]));
                    var_19 = (min(38, (15 ^ 86)));
                }
            }
        }
    }
    #pragma endscop
}
