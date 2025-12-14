/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_15 = (min(((min(var_4, (arr_0 [i_0])))), (((max(var_1, 1))))));
                var_16 = (max((((~var_0) * (((arr_3 [i_0] [i_0] [i_0]) ? (arr_0 [i_1]) : 6969499361004750354)))), ((((min((arr_2 [i_1] [i_0] [i_0]), var_7)) & (arr_0 [i_0 - 3]))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_17 += (arr_9 [i_3]);
                                var_18 = var_13;
                            }
                        }
                    }
                }
                var_19 = ((((((arr_3 [i_0] [i_0] [i_1]) ? 64 : (arr_10 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_1])))) ? 1557121079609944019 : (arr_8 [i_1] [i_1] [i_0 - 2] [i_0])));
            }
        }
    }
    var_20 = (((((var_12 ? (min(var_6, 35747322042253312)) : (var_7 && var_9)))) ? var_8 : var_7));
    #pragma endscop
}
