/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += (~28515);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_13 = 9007199254740991;
                var_14 = (((-112 < (var_6 >= 10545550905129456853))));
                var_15 ^= ((1573438780 ? (max(var_8, var_6)) : (var_1 >= 10545550905129456851)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    arr_13 [i_4] = var_5;
                    var_16 = (((((var_9 ? 2189582247 : 4305065914715529062))) - (~18437736874454810625)));
                    var_17 = (min(var_17, (var_9 < var_0)));
                }
            }
        }
    }
    #pragma endscop
}
