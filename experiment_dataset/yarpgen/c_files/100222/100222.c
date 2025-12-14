/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_14 = (max((~3584), -2097151));
                arr_6 [i_0 - 2] [12] [i_1] = ((((((arr_4 [i_0 - 3]) ? 129 : 126))) ? (max((arr_4 [i_0 - 1]), (arr_4 [i_0 - 1]))) : (min((arr_4 [i_0 - 2]), (arr_4 [i_0 + 1])))));
            }
        }
    }
    var_15 = ((min(1984368712488484262, (((var_1 ? 126 : -31798))))) ^ (((((max(115, 7))) ? ((min(var_2, var_9))) : 48))));
    #pragma endscop
}
