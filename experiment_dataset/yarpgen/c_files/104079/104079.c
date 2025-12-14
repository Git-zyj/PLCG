/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((((21517 ? 21517 : 21517))) / -10989682156245679761))) ? ((var_12 / (((44019 ? 44018 : 21517))))) : ((min((19 / 21511), var_2))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] = ((!(((-(21517 * 21514))))));
                var_15 = (min(var_15, (((-5860025794592508831 ? ((5860025794592508813 << (21517 - 21495))) : (((44018 ? 44019 : ((min(-22, 21516)))))))))));
            }
        }
    }
    var_16 = var_9;
    #pragma endscop
}
