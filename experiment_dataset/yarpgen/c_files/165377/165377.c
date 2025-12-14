/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_10 = (((((27888 ? (arr_9 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]) : (arr_9 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1])))) ? (((arr_9 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]) ? -33 : (arr_9 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]))) : (((arr_9 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]) << (((arr_9 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]) - 5636410378376700226))))));
                                var_11 = -1118591653;
                                var_12 |= var_9;
                                arr_13 [i_0] [i_1] [i_0] [i_1] [i_4] = ((((((((293 ? var_6 : (arr_9 [i_0] [i_1] [i_2] [14])))) || 2221811400007604659))) / 51));
                            }
                        }
                    }
                    var_13 = -63;
                }
            }
        }
    }

    for (int i_5 = 2; i_5 < 12;i_5 += 1)
    {
        var_14 = (((((((var_7 & (arr_10 [i_5]))) / var_3))) ? (((10270 <= (-3627817107074892192 <= 1580781090773725994)))) : var_1));
        arr_18 [i_5] = (var_9 <= (((!(((35414 ? -3627817107074892192 : var_5)))))));
        var_15 |= (((-2221811400007604659 || 55266) << ((((8902169319974767559 * (arr_17 [i_5]))) - 7480310897602167294))));
        arr_19 [i_5] &= (((((arr_7 [3] [i_5] [i_5 - 2] [i_5] [i_5] [i_5]) ? var_0 : (arr_7 [i_5] [i_5] [i_5 - 1] [i_5] [i_5] [i_5]))) - (((min((arr_7 [i_5] [i_5] [i_5 - 2] [i_5] [i_5] [i_5]), -8141))))));
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 14;i_6 += 1)
    {
        var_16 = ((8141 ? 101 : (arr_2 [2])));
        var_17 += (arr_5 [i_6] [i_6] [2] [i_6]);
        var_18 = (((arr_0 [12]) ^ (var_4 > 18471)));
        var_19 = (max(var_19, (arr_12 [18] [i_6] [i_6] [18] [i_6])));
    }
    /* vectorizable */
    for (int i_7 = 3; i_7 < 19;i_7 += 1)
    {
        arr_24 [i_7] = ((((1118591652 ^ (arr_22 [i_7]))) - (18446744073709551609 | var_9)));
        var_20 = 3167261667878239288;
        var_21 = 61490;
    }
    #pragma endscop
}
