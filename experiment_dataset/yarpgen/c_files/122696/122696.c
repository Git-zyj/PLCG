/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_15 ? ((15 ? 1627250223 : 5648493312744496631)) : 301992069790768994));
    var_17 = 18144752003918782638;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = 417562703;
                                arr_15 [i_4] [i_3] [10] [i_1] [i_0] = (((((((arr_8 [i_0] [i_3] [i_2] [i_1] [i_0]) && 18144752003918782606))) == ((((arr_11 [3] [i_1] [3] [i_3] [i_4] [i_4]) && 9223372036854775807))))));
                            }
                        }
                    }
                    arr_16 [i_0] [i_0] [i_2] [i_2] = (arr_5 [i_0] [i_1]);
                    arr_17 [i_0] = (max(((((!140737488355328) >= -32761))), (max((arr_3 [1]), (225 != 0)))));
                }
            }
        }
    }
    var_18 = (min((((((min(var_3, var_12))) > var_3))), ((-(~-47)))));
    #pragma endscop
}
