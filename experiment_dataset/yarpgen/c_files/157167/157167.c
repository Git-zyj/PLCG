/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_4 || 63);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [8] = (((max(((((arr_4 [i_0] [i_0]) == var_6))), var_3))) ? ((((((!(arr_2 [1]))) || (!24844))))) : (((arr_0 [i_0] [i_1]) ? (arr_4 [i_1] [i_1]) : (~var_0))));
                arr_6 [i_0] [1] [i_0] = (~var_7);
            }
        }
    }
    var_17 = (!var_5);
    var_18 = (max((((min(var_8, var_0)))), (((~2811853393029159162) ^ (~var_11)))));
    #pragma endscop
}
