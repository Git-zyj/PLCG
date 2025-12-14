/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;
    var_20 = (max(((((1280036391 ? var_17 : 12509)))), -30662));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_21 = (max(var_21, ((((var_3 + 12513) || ((((arr_0 [i_0]) % 1097176463365407534))))))));
                    var_22 |= 12526;
                }
            }
        }
        var_23 = ((53026 ? 53026 : -1615445323));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {
                    var_24 += var_14;
                    var_25 = 12526;
                }
            }
        }
        arr_14 [6] |= var_3;
        var_26 ^= (arr_1 [8]);
        var_27 = (-(arr_8 [i_3] [i_3]));
        var_28 ^= (((arr_7 [i_3] [i_3]) || ((((-127 - 1) & (arr_4 [i_3] [i_3] [i_3]))))));
    }
    var_29 = var_17;
    #pragma endscop
}
