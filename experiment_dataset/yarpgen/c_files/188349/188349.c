/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= var_1;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_11 = ((((arr_1 [i_1] [i_0 + 1]) || (arr_3 [14] [i_0 - 2] [13]))));
                var_12 = (max((!9223372036854775807), (((((arr_0 [i_1]) ? -1450322411492094893 : 128)) + (arr_1 [i_0] [5])))));
                arr_5 [16] [i_0] [i_0] = (min((((!((min(-1073741824, var_7)))))), 3564507095264615390));
                var_13 -= (max((arr_3 [i_0 - 1] [i_0 - 1] [i_0 + 1]), 3564507095264615390));
                arr_6 [1] |= (((arr_0 [i_0 - 1]) ? var_2 : (((((3564507095264615385 != (arr_0 [i_0]))))))));
            }
        }
    }
    var_14 = ((+(((57 < 3564507095264615389) ? var_4 : -3564507095264615391))));
    #pragma endscop
}
