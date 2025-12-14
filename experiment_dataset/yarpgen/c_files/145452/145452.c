/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((((4294967295 || (1 + 1)))), var_12));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, (((((((arr_3 [i_1] [10] [i_1]) ? (arr_3 [i_1] [14] [i_1]) : -1736970635))) && ((max((arr_3 [i_1] [i_2] [i_1]), (arr_3 [i_1] [i_2 + 1] [i_1])))))))));
                    var_18 &= ((-((((((arr_2 [i_0] [i_0] [i_0]) ? 237657116 : var_14))) ? (max(var_10, 4204920493)) : ((var_0 ? 4294967295 : (arr_3 [i_1] [i_1] [i_2 + 1])))))));
                }
            }
        }
    }
    var_19 = ((var_1 * ((90046817 ? ((max(var_1, var_0))) : ((4294967287 ? 3930371296726178576 : -1659392547))))));
    #pragma endscop
}
