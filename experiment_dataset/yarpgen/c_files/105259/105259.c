/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (-96 * (((~-1219907148640420687) ? (133 == var_16) : var_1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                arr_7 [i_1] = (arr_6 [i_0] [i_1 + 1]);
                var_18 &= (~-1219907148640420690);
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_19 = 195;

                            for (int i_4 = 0; i_4 < 19;i_4 += 1)
                            {
                                var_20 = (((max(var_8, (arr_8 [i_1 - 3] [i_1] [i_2 - 1]))) == ((((arr_9 [i_1]) ? -1219907148640420668 : (arr_13 [i_1] [17] [i_1 - 1] [1] [i_1] [i_1 + 1]))))));
                                var_21 = (min(var_21, ((((-64 + 2147483647) >> (((~1219907148640420711) + 1219907148640420730)))))));
                            }
                        }
                    }
                }
                arr_15 [i_1] = -38;
            }
        }
    }
    var_22 = ((-50 ? 21 : 288230341791973376));
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 9;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                {
                    var_23 = (~13925702390023005617);
                    arr_22 [i_5] [i_5] [i_7] [i_5 - 1] = ((40 ? -1219907148640420666 : 1219907148640420668));
                    var_24 = ((+(((((arr_21 [i_5 + 1] [5]) + 2147483647)) << (((((arr_21 [i_5 - 1] [1]) + 136)) - 23))))));
                }
            }
        }
    }

    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {
        var_25 |= (35 >= -9);
        arr_25 [7] = (-88 || var_13);
        var_26 = (min(var_11, ((-9223372036854775798 ? (min(8742221619244735122, 1219907148640420642)) : (arr_23 [i_8])))));
    }
    #pragma endscop
}
