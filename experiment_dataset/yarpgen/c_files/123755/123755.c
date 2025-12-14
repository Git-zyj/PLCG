/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((1 & 44625) & (((((var_14 ? var_8 : var_9))) ? ((-18888 ? 20 : 3253342837630669617)) : var_13))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_20 = (((((((((arr_0 [i_1] [13]) ? (arr_3 [i_1]) : (arr_1 [10])))) ? (((arr_1 [i_0]) - (arr_2 [i_1]))) : ((((arr_1 [i_0]) - (arr_0 [i_0] [i_1]))))))) ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0])));
                arr_5 [i_0] = (((((arr_4 [i_0]) ? (arr_4 [i_0]) : (arr_4 [i_0])))) ? ((((((98304 ? 2552774783436105646 : 18887))) ? (((1828654867604434998 ? 221 : 111))) : (arr_0 [i_0] [i_1])))) : (min((((arr_2 [i_1]) ? (arr_2 [3]) : (arr_1 [i_1]))), ((min((arr_0 [i_1] [i_0]), (arr_0 [1] [i_1])))))));
                arr_6 [i_0] [i_0] [i_0] = (arr_3 [i_0]);
            }
        }
    }
    var_21 = var_7;

    for (int i_2 = 1; i_2 < 8;i_2 += 1)
    {
        var_22 ^= (20 & 11953932589316983442);

        /* vectorizable */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            arr_13 [i_2] [i_3] [i_3] = (arr_12 [i_2 + 1] [i_3]);
            arr_14 [i_2] = (arr_1 [i_2 + 1]);
            var_23 = (arr_12 [i_2 + 1] [4]);
        }
        var_24 = ((arr_0 [i_2] [i_2 + 1]) >= ((((((arr_3 [i_2]) / (arr_11 [i_2] [i_2] [i_2])))) ? (((arr_10 [10] [i_2 - 1]) ? (arr_1 [i_2]) : (arr_1 [i_2]))) : (((arr_3 [i_2 - 1]) ? (arr_4 [i_2]) : (arr_11 [i_2 + 1] [i_2 + 2] [i_2 - 1]))))));
    }
    /* LoopNest 3 */
    for (int i_4 = 3; i_4 < 8;i_4 += 1)
    {
        for (int i_5 = 4; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    arr_26 [i_4] [i_5] [i_6] [i_6] = max(((((((arr_11 [i_4] [i_5 - 1] [i_4]) ? (arr_22 [i_4] [i_6] [i_6]) : (arr_9 [i_4 + 3] [i_5 - 2])))) ? (((((arr_12 [i_6] [i_6]) < (arr_0 [i_5] [i_6]))))) : (((arr_10 [i_4 + 2] [i_4]) ^ (arr_24 [i_4] [i_4] [i_5] [1]))))), ((min(18887, 0))));
                    arr_27 [i_4 - 3] [i_5] [i_6] = (max((max((arr_8 [i_5]), 199998798)), (((((((arr_19 [i_6]) ^ (arr_8 [i_5])))) ? (((arr_25 [7] [i_5] [i_5] [i_5]) ? (arr_25 [9] [i_5 - 4] [i_5] [i_5 - 4]) : (arr_9 [i_4] [i_5]))) : (((arr_9 [i_4] [i_4]) ? (arr_16 [i_5]) : (arr_23 [i_6] [i_4 + 3] [i_4 + 3]))))))));
                }
            }
        }
    }
    #pragma endscop
}
