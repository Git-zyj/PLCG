/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_16 = ((-1965560755 ? (arr_0 [i_0 + 1] [i_0 + 1]) : ((((!(arr_6 [8] [i_1] [i_1])))))));
                    var_17 = (arr_6 [i_2] [i_1] [i_0]);
                }
                for (int i_3 = 3; i_3 < 15;i_3 += 1)
                {
                    arr_9 [i_1] [i_1] [i_1] [1] = (arr_2 [i_0 + 1]);
                    var_18 = (((((!((((arr_8 [1] [i_1]) | (-2147483647 - 1))))))) < 1));
                }
                var_19 = ((((min((arr_5 [i_0 + 1] [i_0 + 1] [i_1] [i_1]), (arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])))) & (((arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0]) ^ (arr_5 [i_0 + 1] [i_0 + 1] [i_1] [i_1])))));
                var_20 = var_4;
                var_21 = (min(var_21, (((((((-8192 < (arr_1 [i_1] [i_0]))))) ^ ((((arr_0 [i_0 + 1] [i_0 + 1]) == (arr_0 [i_0 + 1] [i_0 + 1])))))))));
                var_22 = (max(var_2, (arr_7 [12] [i_1] [i_0 + 1])));
            }
        }
    }
    var_23 = (max((var_10 > -0), ((-2374 < (!var_3)))));

    for (int i_4 = 2; i_4 < 13;i_4 += 1) /* same iter space */
    {
        var_24 = (max(var_24, (~2652673669562226799)));
        var_25 = var_4;
        var_26 = (arr_4 [i_4 + 1] [i_4 + 1] [i_4 + 1]);
    }
    for (int i_5 = 2; i_5 < 13;i_5 += 1) /* same iter space */
    {
        var_27 = ((((((arr_0 [i_5] [i_5]) ? (arr_10 [i_5] [1]) : (arr_13 [i_5]))) != var_7)));
        arr_16 [i_5] [i_5] = (((((((~(arr_6 [i_5] [i_5] [10]))) | (((min((arr_5 [i_5] [13] [i_5] [i_5]), 196))))))) ? (arr_15 [i_5] [i_5 + 1]) : (3115425065 % var_8)));
        var_28 = (arr_8 [i_5] [8]);
    }
    var_29 = (!-9021415830164603199);
    var_30 = (max(var_30, var_14));
    #pragma endscop
}
