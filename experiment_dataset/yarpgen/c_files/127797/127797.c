/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((-var_1 ? (var_9 && var_0) : (~37))) ^ var_1));
    var_13 = var_7;
    var_14 = (~-var_4);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_15 = (arr_0 [i_0]);
                arr_4 [i_0] [12] [i_1] = 555397369;
            }
        }
    }
    #pragma endscop
}
