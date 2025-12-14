/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_11 && (((var_6 ? (max(var_10, var_9)) : (var_6 + 5222863406519396943))))));
    var_13 = ((((((((var_5 ? var_3 : var_6))) ? var_1 : -5222863406519396969))) ? 68719476735 : var_1));

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_14 ^= ((((max(-24836, 208))) > (((arr_1 [i_0] [13]) ? (arr_2 [i_0] [i_0]) : (arr_0 [i_0])))));
        var_15 = (~123);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_16 |= ((((((arr_2 [i_1] [12]) ? (arr_2 [i_1] [i_1]) : (arr_2 [i_1] [i_1])))) ? (((((arr_2 [i_1] [i_1]) && (arr_2 [i_1] [i_1]))))) : (arr_2 [i_1] [i_1])));
        arr_6 [i_1] [i_1] = (min((~53225), ((~(arr_4 [i_1])))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    var_17 *= (((87 ? 3720294357 : (arr_2 [i_3] [i_1]))));
                    arr_13 [i_1] [i_2] [i_3] = ((!-916800995513799627) | (arr_4 [i_2]));
                    var_18 = (min(var_18, (((((((arr_8 [i_1]) - (arr_8 [i_2]))) + (arr_10 [i_3] [i_2] [i_2])))))));
                }
            }
        }
        arr_14 [i_1] [i_1] = (((40703 == 128) >= (arr_8 [i_1])));
        var_19 |= ((-(arr_1 [i_1] [i_1])));
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                {
                    arr_21 [i_5 - 1] [i_4] &= ((((((!(((arr_9 [i_4]) || (arr_4 [i_4]))))))) ^ ((+(((arr_1 [i_6] [i_4]) ? (arr_1 [i_4] [i_5 - 2]) : (arr_11 [i_4] [i_5 + 3] [i_6])))))));
                    arr_22 [i_6] [i_6] [i_5] [i_4] = (arr_10 [i_5 - 2] [i_5] [i_5 + 2]);
                    var_20 = (arr_20 [i_4] [2] [i_4]);
                }
            }
        }
        var_21 = (((((((((arr_11 [i_4] [i_4] [i_4]) >> (((arr_11 [i_4] [i_4] [i_4]) - 995795296))))) ? ((((14766451415508949701 > (arr_15 [i_4]))))) : (arr_9 [i_4])))) ? (arr_12 [i_4] [i_4] [0] [i_4]) : (((arr_4 [i_4]) ? 12301 : (arr_4 [i_4])))));
    }
    var_22 = (min((!24838), var_6));
    var_23 = var_11;
    #pragma endscop
}
