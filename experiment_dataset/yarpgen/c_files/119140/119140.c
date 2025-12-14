/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_1] = (((min((arr_7 [i_2 - 1] [i_1]), ((98 ? 98 : 4)))) * ((~((-1591941571 / (arr_5 [i_0] [0])))))));
                    arr_10 [i_0] [i_1] [i_0] = ((((min(4, (18 + 0)))) * (max((max((arr_1 [i_1]), 1)), (42268 / -1980892433)))));
                    var_11 *= (min((-32767 - 1), ((41771 - (min(1, -1980892433))))));
                }
            }
        }
    }
    var_12 = -15;
    var_13 = var_0;
    var_14 = ((((var_10 - (min(9223369837831520256, 90)))) + var_0));
    #pragma endscop
}
