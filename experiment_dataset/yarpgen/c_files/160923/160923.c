/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= (var_1 / ((73 ? 10077 : -1716302590)));
    var_21 = (var_5 - ((var_10 ^ (var_2 > 25427))));
    var_22 = (((((48 - 10072) ? 25425 : 25426))) / ((((10077 ? var_11 : -25426)) * -25427)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [9] [i_1] = ((((min((arr_3 [i_0] [i_0] [i_0]), var_6))) ? 25423 : ((((arr_4 [i_0]) ? -36 : (arr_4 [i_1]))))));
                arr_6 [i_0] [i_0] [i_1] = (arr_4 [i_0]);
                arr_7 [i_1] [i_0] [i_0] = (!var_3);
            }
        }
    }
    var_23 = 708663655;
    #pragma endscop
}
