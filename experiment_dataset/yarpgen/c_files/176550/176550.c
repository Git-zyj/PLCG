/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_3 < var_9);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_14 = ((((((((arr_3 [i_0] [i_2] [i_0]) < 348578992)) ? (max(3946388303, 348578967)) : (var_5 < 126)))) ? 348578992 : 3946388304));
                            var_15 = ((3946388312 < (min(348578992, ((min(26362, var_0)))))));
                            var_16 = ((1499215195793440967 ? 16947528877916110648 : ((((((var_3 * (arr_7 [i_1] [i_1])))) ? var_0 : (((arr_6 [i_1] [i_1] [8]) / 3946388304)))))));
                        }
                    }
                }
                var_17 = (min(((max((var_2 < 15), 107))), 3946388303));
            }
        }
    }
    #pragma endscop
}
