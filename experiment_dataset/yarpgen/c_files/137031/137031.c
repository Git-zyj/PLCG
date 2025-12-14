/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_19 -= 4601710599849518045;
                            var_20 = (max(var_20, (-4601710599849518058 | 4601710599849518045)));
                            var_21 = var_12;
                        }
                    }
                }
                var_22 += (((arr_2 [i_0]) ? (min((arr_10 [i_1 + 1] [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_1] [i_1 - 2]), (var_1 | 3251760139285490196))) : 14666335682390589498));
                var_23 = (((((((var_12 ? 6945 : -4601710599849518058))) || (arr_7 [i_1 + 2] [i_1 - 1] [i_1 - 2]))) && ((((((arr_7 [i_1 - 2] [17] [i_0]) >= (arr_10 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1])))) >= (arr_3 [i_1 - 1] [i_1])))));
            }
        }
    }
    var_24 = (var_3 % 4601710599849518019);
    #pragma endscop
}
