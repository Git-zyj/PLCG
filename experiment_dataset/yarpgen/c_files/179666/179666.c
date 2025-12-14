/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((~3182196108417061673) ? ((max(((0 ? -8119155546939843494 : 0)), var_14))) : (((min(var_10, var_15)) % (((var_17 ? 8119155546939843506 : var_2)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_0] [i_0] [i_1] = (arr_2 [i_0]);
                    var_21 = min(5335055274892412350, 75);
                    arr_9 [i_0 + 1] [14] [i_2] &= (((((!-7953512538247573187) < (~5335055274892412350))) ? -5335055274892412351 : (((var_7 ? ((((arr_4 [i_0] [i_0] [2]) || 22524))) : 90)))));

                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        arr_13 [i_1] [i_1] [i_1] = -7881071138075012631;
                        var_22 ^= (arr_1 [i_1 + 1]);
                        arr_14 [i_0] [i_1] [i_1] [i_2] [i_2] [i_2] = ((((2087634362 ? (!-1361655872) : ((255 ? 2922008576193304749 : 8119155546939843491)))) == (arr_5 [i_1] [i_2] [i_1])));
                    }
                    arr_15 [i_0 + 1] [i_0 + 1] [i_2 - 3] [i_1] = ((((((arr_1 [i_0 + 1]) ? var_2 : (arr_1 [i_0 + 1])))) ? (((max((arr_1 [i_0 + 1]), var_4)))) : ((34354 ? (arr_1 [i_0 + 1]) : var_1))));
                }
            }
        }
    }
    #pragma endscop
}
