/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~13093);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_17 = (1875438535 <= -551534190);
                var_18 &= (((max((49285 != 64849), (48 != 222))) && ((((!1220168761) | -685276508)))));
                arr_6 [2] [i_0] [2] = ((((1 - 4945526860353791592) || ((max(-25820, 20239))))) && (((~(32197 ^ 0)))));
                arr_7 [i_0] [i_0] = ((-(((21449 != (32767 | 196))))));
            }
        }
    }
    #pragma endscop
}
