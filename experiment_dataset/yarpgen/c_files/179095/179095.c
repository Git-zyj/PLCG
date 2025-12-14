/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= 0;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, (((-((-236 + ((1 - (arr_1 [4]))))))))));
                    arr_7 [i_2] [i_0] [i_0] = ((-(((arr_3 [i_2]) ? ((51 ? 8858788916568853433 : 23)) : (19 && 3747987088)))));
                    var_21 = ((((max((~3747987088), (max(6959303333997261612, 0))))) ? 1147567004 : (arr_3 [i_0])));
                    arr_8 [i_0] [i_1] [i_0] [i_1] = (~0);
                }
            }
        }
    }
    #pragma endscop
}
