/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_18 = (((((((min(var_12, var_11))) ? -19001 : -1293946709))) ? (((((var_4 >> (var_3 - 13509189316725344091))) <= (var_13 ^ 29)))) : ((max((min(var_11, var_7)), (max(227, 29)))))));

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        var_19 = (max(var_19, (8191 < var_9)));
                        var_20 += (((~var_2) ^ 116));
                        arr_10 [i_0 + 1] [i_1] [i_2] [i_3] [i_3] [i_2] = var_16;
                    }
                }
            }
        }
    }
    var_21 += var_1;
    /* LoopNest 2 */
    for (int i_4 = 4; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            {
                var_22 = 0;
                var_23 += var_9;
                var_24 = (min(var_24, var_16));
            }
        }
    }
    #pragma endscop
}
