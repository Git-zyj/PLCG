/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_14 = (((((((-18 ? 1 : 2216615441596416))) ? (min((arr_3 [i_0] [i_1]), (arr_3 [10] [2]))) : ((((arr_4 [i_0]) ? 255 : 3))))) & (((((((arr_1 [i_1 - 2] [1]) ? 433157092710567505 : (arr_1 [6] [i_1])))) ? 1 : (((1 != (arr_4 [i_0])))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_15 &= (4084222454 % 4084222454);
                            arr_11 [i_3] [6] [6] [6] [i_0] = ((((((min(5470752288955236671, var_8))) ? ((-(arr_6 [i_1 + 2]))) : var_6)) != var_11));
                            var_16 = (-51 && 252);
                            var_17 = var_6;
                            arr_12 [i_0] [i_0] [i_2] [i_3] = ((((((1 + 1) ? ((((arr_7 [i_0] [5] [i_0] [i_3]) ? 1 : -79))) : (((arr_8 [i_0] [i_0] [5] [i_0] [i_0] [1]) - (arr_5 [1] [i_1] [1] [i_1])))))) ? ((-(1 < var_10))) : ((((433157092710567487 ? 1 : 1)) & (((arr_7 [i_0] [i_0] [i_2] [i_3]) | (arr_2 [i_1])))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [9] [10] [i_5] [i_5] = (!65521);
                                var_18 = (((~var_2) & 1));
                            }
                        }
                    }
                }
                arr_22 [i_0] [i_1] [i_1] = ((-2062344678 && (((((min(var_13, (arr_9 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1])))) >> ((((max(var_8, (arr_14 [i_0] [i_1] [i_1 - 2] [i_1 - 2])))) - 48950)))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 19;i_8 += 1)
        {
            {
                var_19 = (((arr_27 [i_7] [i_7]) ? ((((((arr_23 [i_7]) ? 15 : var_7))) % ((-110690469306871313 ? var_5 : 4084222431)))) : ((((arr_26 [i_7]) ? (4269570990 >> 1) : (max((arr_24 [i_7] [i_7]), (arr_26 [i_7]))))))));
                var_20 = (((((((!(arr_24 [i_7] [i_7])))) << (!var_1)))) && ((max(((var_10 >> (arr_23 [i_7]))), (~1)))));
                var_21 = ((-((76 ? 1 : 1))));
                arr_29 [i_7] [i_7] [1] = (((((((7959396512675974245 ? (arr_25 [i_7]) : (arr_27 [i_7] [i_8])))) ? (arr_25 [i_7]) : var_7))) * ((((max(var_1, 50971))) ? (((((arr_27 [i_7] [1]) == 4049540216)))) : ((18013586980998984082 | (arr_26 [i_7]))))));
            }
        }
    }
    var_22 = var_11;
    #pragma endscop
}
