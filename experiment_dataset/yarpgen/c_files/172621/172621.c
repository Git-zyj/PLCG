/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] [i_0 + 4] = ((((((((var_6 ? 8422666819789699446 : var_7))) ? (min(-8422666819789699432, 8422666819789699445)) : ((15617 ? -1197911918 : -8422666819789699446))))) ? (arr_0 [i_0]) : ((((max((arr_2 [i_1]), 1650606329))) ? -var_10 : (max(1, 3157309158))))));
                var_11 = var_2;
            }
        }
    }
    var_12 *= ((((67108864 >> (((~var_4) + 50)))) > var_3));
    #pragma endscop
}
