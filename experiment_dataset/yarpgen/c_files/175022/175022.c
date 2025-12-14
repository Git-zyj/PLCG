/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= (((!(1 && var_1))));

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = ((-(((7 * var_13) / ((((arr_2 [i_0]) ? 94 : var_0)))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_11 [i_2] [i_1] [i_2 + 1] [i_3 + 1] = ((!(((var_11 ? (((arr_7 [i_0] [i_1] [i_3]) ? -1484838561 : 13709693206143772374)) : (max(13709693206143772374, var_8)))))));

                        for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                        {
                            arr_14 [i_0 - 1] [i_1] [i_2] [i_2] [i_4] = 1484838560;
                            arr_15 [i_0] [i_0] [i_2] = var_8;
                            var_19 = (max((max(var_3, (arr_6 [i_1]))), (((-(arr_8 [i_2]))))));
                        }
                        for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                        {
                            arr_18 [i_1] [i_2] [i_2 - 1] [i_3 + 1] [i_5] = (((arr_10 [i_2 - 1] [i_2] [i_5]) - 440352383));
                            var_20 = (((((~(~var_10)))) || ((max(-var_13, (var_12 + var_13))))));
                            var_21 = min(-var_11, (((arr_17 [i_2 - 1] [i_3 + 1] [i_0 - 3] [i_3 + 1]) - (arr_17 [i_2 - 1] [i_3 - 1] [i_0 - 2] [i_3]))));
                            arr_19 [i_2] [i_2] [i_5] [i_3] [i_5] [i_3] = var_14;
                        }
                    }
                }
            }
        }
    }
    for (int i_6 = 2; i_6 < 21;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
        {
            var_22 -= (max((((!(var_4 && var_2)))), ((((1149742693 ? (arr_22 [i_7]) : (arr_24 [i_6 + 2] [i_7]))) * (var_8 <= var_3)))));
            var_23 = var_14;
        }
        for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
        {
            arr_27 [i_6] [i_8] [i_8] = ((arr_22 [i_6 - 2]) ? (239 * 2097151) : ((((((8440840681916467325 * (arr_23 [i_8] [i_6] [i_8])))) ? 1 : (min(var_0, 2141625422))))));
            var_24 -= ((((696689173 % ((119 ? -2192520382426048925 : 2141625422))))) || (((-1149742693 ? (min(var_13, var_16)) : (((max(1, 0))))))));
        }
        var_25 = (((min((arr_20 [i_6 + 1] [i_6]), -1774810225)) != (arr_20 [i_6 + 1] [i_6])));
        var_26 = ((((((arr_24 [i_6] [i_6 - 1]) * var_10))) || ((((arr_26 [i_6] [i_6 - 2] [i_6 + 1]) ? (arr_21 [i_6] [i_6 - 2]) : (arr_21 [i_6] [i_6 - 2]))))));
    }
    #pragma endscop
}
