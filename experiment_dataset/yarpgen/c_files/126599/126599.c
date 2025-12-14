/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_1] = ((2075403837 ? (((((~187) + 2147483647)) << ((((((arr_0 [8] [i_0 - 2]) <= (arr_1 [i_0])))) - 1)))) : ((-(arr_2 [i_1] [i_0 - 1])))));
                arr_5 [11] [i_0] = ((((((2075403837 ? var_1 : (arr_2 [i_0] [12]))))) ? ((15138554465489158783 ? (~-22) : 158)) : ((15138554465489158782 ? 1 : ((min(-4811, 92)))))));
                var_15 ^= var_9;
                arr_6 [i_0] [i_1] = var_1;
            }
        }
    }
    var_16 = (((15138554465489158783 ? (!2075403837) : 2000986946)));
    #pragma endscop
}
