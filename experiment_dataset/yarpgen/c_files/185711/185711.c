/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    arr_8 [i_0] [i_2] [22] &= var_9;
                    arr_9 [i_1] [i_1] [i_1 - 2] [i_1] = (((((((49 ? -45 : var_8))) ? (((arr_6 [i_0] [i_1] [21]) ? var_9 : var_11)) : 37)) >= (((((((arr_1 [i_2]) ? 2422787279 : 61)) != 0))))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    var_16 = (-45 ? -3021724784505299151 : (arr_12 [i_1] [i_1] [i_1 - 2]));
                    arr_13 [i_1] = (((~(arr_2 [i_0] [i_0]))));
                }
                arr_14 [i_1] [i_1 - 2] [i_1 - 2] = ((((min((arr_3 [i_1 - 3]), var_11))) ? (~var_0) : (1 || 26)));
                var_17 = ((min(49, ((5 ? 1 : var_9)))));
            }
        }
    }
    var_18 = (min(2013265920, (((((3772841403 ? -16777216 : 28))) ? (-27 | var_8) : ((var_7 ? 53 : 14477169498836233413))))));
    var_19 = var_11;
    var_20 += ((!((((((1 ? var_13 : 60))) ? var_0 : (min(var_1, 3969574574873318221)))))));
    #pragma endscop
}
