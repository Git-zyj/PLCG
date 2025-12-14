/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((min(((max(31, 28840))), ((255 ? 65535 : 28840)))), ((((~var_8) >= 0)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((+((((arr_4 [i_0 + 1]) == (max(-7305719304167138244, -4131290852293701588)))))));
                arr_6 [8] [i_1] [12] |= (min(1, (((arr_3 [i_0 - 1]) ? (-1438171695 < 56003) : (arr_0 [i_0 - 1])))));
            }
        }
    }
    var_13 = var_7;
    var_14 = (~var_10);
    #pragma endscop
}
