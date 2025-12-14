/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~(((((1567925953 ? 38 : var_3))) ? (max(var_1, var_1)) : var_11))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, (((~((((((arr_6 [i_0] [i_1] [i_2]) ? -1 : (arr_4 [i_0])))) ? ((((arr_3 [3] [i_2]) * 146))) : -10811582241499713968)))))));
                    var_15 |= (-988669556 ? (((8188932508589128508 - 49) * ((max(24, 296213321))))) : ((((!((((arr_1 [i_1]) ? (arr_2 [i_0]) : (arr_2 [i_2])))))))));
                }
            }
        }
    }
    var_16 = (((((((~var_5) <= 34)))) != ((~(max(6, var_7))))));
    #pragma endscop
}
