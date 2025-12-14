/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_16 = ((((((arr_0 [i_0]) ? (536838144 && var_7) : (((arr_1 [i_0]) / var_9))))) ? -7664561818896089257 : ((((!(-1512322168881337769 || var_10)))))));
        var_17 = (((((arr_1 [7]) ? ((3758129144 ? var_13 : 536838160)) : 3758129139)) + (arr_1 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                {
                    arr_7 [i_0] = var_8;
                    var_18 = (min(var_18, (((~(((arr_6 [i_1 - 1] [i_1 - 1] [i_1 + 2]) * 84)))))));
                    var_19 = (+(((arr_6 [i_2 + 3] [i_2] [i_2 - 2]) - var_2)));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_20 = (max(var_20, ((((((arr_10 [i_1] [i_1]) != 4294967280)) ? 5457381830025200621 : var_11)))));
                        var_21 = (var_12 ? var_3 : -var_5);
                        var_22 = ((var_2 - (arr_9 [i_1 + 2] [i_1 + 1] [i_1 + 3])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
