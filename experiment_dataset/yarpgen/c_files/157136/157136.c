/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_14 = (max(1, (((!2172477498) < (-72 * -3401)))));
                arr_6 [i_0] [i_1] = (arr_0 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_15 = ((((((min(var_1, (arr_9 [0] [0] [i_2] [i_3] [i_1] [i_3])))) * ((max(87, 1))))) != ((87 ? 45597 : 15262))));
                            arr_12 [i_0] = var_12;
                        }
                    }
                }
            }
        }
    }
    var_16 = var_8;
    var_17 = var_9;
    #pragma endscop
}
