/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((((max((~8191), 8195))) ? ((((((-8205 / (arr_0 [i_1] [1])))) && (((arr_4 [i_0] [i_0] [i_1]) > 255))))) : ((+(((arr_0 [12] [i_1 - 1]) ? -340690938 : (arr_1 [i_0] [i_1 + 1])))))));
                arr_6 [i_0] = (!(((-var_5 ? (252 <= -340690925) : (((arr_1 [i_1] [i_0]) ? 8200 : (arr_1 [i_0 - 1] [i_1])))))));
                arr_7 [i_0] [i_0] [i_0] = (((((min((arr_3 [i_1]), 231))) ? (((41946 * (arr_3 [i_0])))) : (arr_2 [i_0] [i_1]))));
                arr_8 [i_0] [i_0] = ((((((arr_0 [i_0 - 1] [i_0]) ? var_2 : (arr_0 [i_0 - 1] [1])))) ? (arr_0 [i_0 - 1] [i_1]) : 7));
                arr_9 [i_0] [i_1] [i_0] = var_16;
            }
        }
    }

    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_18 *= (arr_10 [i_2]);
        arr_13 [i_2] = (arr_11 [i_2] [1]);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        arr_17 [i_3] = ((~(183 / var_14)));
        var_19 += ((~(-29086 && 4592)));
    }
    #pragma endscop
}
