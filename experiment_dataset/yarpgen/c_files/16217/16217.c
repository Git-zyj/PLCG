/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (((~(~var_14))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_20 = max((max(var_4, var_16)), (-26972 && var_4));
        var_21 = (max(var_21, var_9));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 12;i_3 += 1)
            {
                {
                    var_22 = (3918794119 ? -91 : ((-8988060172789624755 ? (17995 + -4606500450257460887) : var_18)));
                    var_23 -= ((((arr_9 [i_2 - 2] [i_2] [i_2 + 3]) && (arr_9 [i_2] [i_2 - 3] [i_2 - 1]))) ? ((16 << (8988060172789624741 - 8988060172789624719))) : var_7);
                    var_24 = (max(var_24, (((min(var_4, -3097234009196157883))))));
                    arr_11 [i_3] [i_3 - 2] [i_3 + 2] = ((+(max((min((arr_6 [i_3 + 1]), (arr_0 [i_2] [i_2]))), var_4))));
                    var_25 = (max(var_25, (((max(34543, (arr_3 [i_2 - 3])))))));
                }
            }
        }
        arr_12 [i_1] [i_1] |= (max((((arr_4 [i_1] [i_1]) ? (min(var_9, var_13)) : (arr_6 [i_1]))), -var_3));
    }
    #pragma endscop
}
