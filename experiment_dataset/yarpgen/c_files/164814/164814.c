/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~(!12713584477427381070)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_14 = (min(var_14, var_8));
                var_15 |= (-(min((arr_3 [i_0 - 1] [i_0 - 1] [i_1 - 1]), ((var_1 ? (arr_4 [i_0] [i_0] [i_0 - 1]) : 6807987463590837090)))));
            }
        }
    }
    var_16 = var_8;
    var_17 = -3103232235815942042;
    #pragma endscop
}
