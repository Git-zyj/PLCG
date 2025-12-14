/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    arr_10 [i_0] [8] [i_0] [i_1] = ((((min((min(var_3, (arr_2 [i_0]))), (arr_5 [i_0] [i_1] [i_2])))) && 1398018437));
                    arr_11 [i_0] [i_1 - 1] [i_1] = 2896948859;
                    arr_12 [i_1] [i_1] [i_0] [i_1] = min((max((arr_5 [i_0] [i_1] [9]), var_4)), ((7576452311580395366 ? var_0 : (((arr_5 [i_1] [i_1] [12]) ? 1398018425 : var_5)))));
                }
            }
        }
    }
    var_12 &= ((-((((max(var_8, 7576452311580395375))) ? (((1398018401 ? var_2 : var_7))) : 7576452311580395375))));
    #pragma endscop
}
