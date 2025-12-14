/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_14 = (max(821050627, 23));
                    var_15 -= (max((((var_4 ? -0 : var_1))), var_3));
                    arr_9 [i_0] [i_1] [i_2] = -4752104702046176394;
                    var_16 = (max(var_16, (((var_12 ? (((((arr_6 [i_2] [i_0]) >= (arr_0 [i_1]))))) : (min(((4752104702046176393 ? var_2 : 2274705930837928659)), 236)))))));
                    var_17 = (min(var_17, (((((max(var_8, var_6))) ? ((min((arr_3 [i_2]), 65535))) : 40332)))));
                }
            }
        }
    }
    var_18 = (max(((~(~-8463898948385379980))), -0));
    var_19 = (-var_8 / 71);
    #pragma endscop
}
