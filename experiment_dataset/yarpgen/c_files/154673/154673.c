/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((2097151 + (11738430886822389077 + -8778975576703756729)));
                var_13 ^= (arr_1 [i_0] [i_0]);
                arr_6 [2] [i_1] [i_1] = ((((min(-76, (~52)))) ? (!var_9) : (min((arr_2 [i_0 + 1]), ((-76 ? -73 : (arr_0 [13] [i_1])))))));
                var_14 = (-76 + 65);
            }
        }
    }
    var_15 = (((((((min(var_7, var_12))) ? (((max(-60, 1)))) : ((1 ? 1 : var_6))))) ? ((((var_6 ? 1 : 1)) / 1)) : 12548669));
    #pragma endscop
}
