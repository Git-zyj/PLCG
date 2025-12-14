/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 = ((-(min((arr_6 [i_0] [i_0] [i_0] [i_0]), (arr_6 [i_0] [i_0] [i_0] [i_0])))));
                    var_15 = (~67092480);
                    arr_7 [i_1] [i_1] [i_1] = (max((arr_1 [i_0]), 4227874815));
                    var_16 = (~((((max(9007199254736896, 1729382256910270464)) == 4227874816))));
                }
            }
        }
    }
    var_17 = var_7;
    var_18 = var_1;

    /* vectorizable */
    for (int i_3 = 2; i_3 < 8;i_3 += 1)
    {
        var_19 = ((118 ? 292783256 : 126));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {
                    arr_15 [i_3] [i_4] [i_4] = -16717361816799281141;
                    arr_16 [i_3] [i_4] [i_5] = 1;
                }
            }
        }
        arr_17 [i_3] = (18446744073709551615 ? -98 : ((1 ? (arr_2 [i_3] [i_3]) : 292783234)));
        arr_18 [i_3] = (arr_3 [i_3] [i_3] [i_3 - 2]);
    }
    for (int i_6 = 1; i_6 < 21;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 3; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    {
                        arr_30 [i_6] [i_6] [i_6] [0] [i_6] &= (arr_4 [i_9]);
                        var_20 &= (min((((((-(arr_3 [1] [1] [i_9])))) ? ((min(218193111, (arr_22 [i_9] [i_7])))) : (max((arr_3 [i_6] [i_7] [i_8]), (arr_24 [i_6]))))), 1371796503));
                        var_21 -= (arr_4 [i_9]);
                    }
                }
            }
        }
        var_22 &= (((((max(67092480, 6157138156223508284)))) ? (((((arr_26 [8] [8]) ? (arr_23 [i_6] [i_6]) : 95)))) : (((-292783257 || ((min(607808235750262139, 67092480))))))));
    }
    #pragma endscop
}
