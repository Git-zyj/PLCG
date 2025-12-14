/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= (max(((min(var_0, var_13))), (--177)));
    var_16 = var_11;

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = (!(arr_4 [7]));
                    var_18 = (max(var_18, ((max(var_0, (min(1, ((246 ? 13364729586097628977 : 5082014487611922638)))))))));
                    arr_8 [i_0] [i_1] [1] [i_0] = ((~(((((arr_7 [i_0] [i_0]) || (arr_7 [9] [i_1])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_19, var_6));
                                var_20 &= (arr_11 [i_0] [i_1] [i_3] [4]);
                                var_21 = ((!(max((arr_12 [i_4 + 3] [i_4] [i_4 + 1] [10] [i_4 + 3] [i_4]), (arr_7 [i_4] [i_1])))));
                                var_22 = (min(var_22, (((max(-7780988756131720400, 1))))));
                            }
                        }
                    }
                }
            }
        }
        var_23 = ((((((var_3 ? 3203291582754602246 : 5082014487611922637))) ? ((var_3 << (((-127 - 1) + 136)))) : (((arr_0 [i_0]) ? var_14 : (arr_2 [i_0] [i_0]))))));
        var_24 = (min(var_24, ((((((!(arr_2 [i_0] [1])))) * (((arr_11 [i_0] [i_0] [i_0] [i_0]) ? (arr_11 [i_0] [i_0] [i_0] [i_0]) : (arr_7 [i_0] [i_0]))))))));
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
    {
        arr_18 [i_5] |= max((arr_17 [i_5] [i_5]), ((((max(var_9, (arr_17 [i_5] [i_5])))) ? (arr_4 [i_5]) : ((max(1, -24))))));
        var_25 = (min((arr_10 [i_5] [i_5] [i_5]), ((max((arr_16 [i_5]), (arr_5 [i_5] [i_5] [i_5]))))));
        arr_19 [i_5] [i_5] = var_14;

        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            arr_24 [i_6] = (15243452490954949359 | 0);
            arr_25 [6] = ((+(max((arr_0 [i_6]), (arr_2 [i_5] [i_6])))));
            var_26 = ((((((arr_22 [i_5]) * var_11))) ? (((arr_22 [i_5]) ? (arr_22 [i_5]) : (arr_22 [9]))) : ((~(arr_22 [i_6])))));
            /* LoopNest 3 */
            for (int i_7 = 2; i_7 < 9;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 11;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        {
                            var_27 += (((arr_15 [1]) ? (((((((arr_9 [i_8] [12] [i_7] [i_6] [i_5] [i_8]) ? -77 : 189))) || (((var_11 ? 1 : 1)))))) : ((var_1 ? (arr_27 [i_5] [i_5]) : (arr_29 [i_8] [1] [i_8 + 1] [1])))));
                            var_28 = (max(var_28, (arr_12 [i_9] [i_8] [i_7] [i_7] [i_5] [i_5])));
                            var_29 = (arr_1 [i_9]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
