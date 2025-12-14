/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_19 = 14931;
        arr_3 [i_0] [i_0] = (((((-(((arr_2 [i_0] [i_0]) >> (var_1 - 26752)))))) ? ((((!((var_18 < (arr_1 [i_0]))))))) : ((((var_2 == (arr_1 [i_0]))) ? (arr_1 [i_0]) : (arr_0 [i_0])))));
        var_20 = (max(var_20, var_11));
    }
    /* LoopNest 2 */
    for (int i_1 = 4; i_1 < 13;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            {
                var_21 = (((arr_5 [i_2] [i_2]) ? var_17 : ((var_1 ? (~var_5) : (arr_2 [i_1 - 1] [i_1 - 4])))));

                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    var_22 = ((((((((arr_6 [8] [i_2]) ? (arr_8 [i_1]) : (arr_9 [i_3] [i_1])))) || (arr_9 [i_1 - 4] [i_2]))) ? (((arr_0 [i_1 - 3]) ? (var_9 ^ var_13) : var_12)) : (((+((((arr_10 [i_3] [i_2] [i_1]) == var_10))))))));
                    var_23 *= ((((!(arr_8 [1]))) ? ((var_16 ? var_8 : (min(var_0, var_16)))) : (arr_6 [i_1] [i_2])));
                }
                for (int i_4 = 2; i_4 < 13;i_4 += 1)
                {
                    var_24 *= ((((((((var_1 ? (arr_13 [i_2] [i_4 - 1]) : (arr_9 [i_4] [i_4])))) ? (arr_8 [i_1 - 4]) : ((0 ? -18824 : -2698662016388555333))))) || (-1 ^ 0)));
                    var_25 = (min(var_25, (((((arr_9 [i_4 - 2] [i_4 - 2]) && -13270)) ? 901044331 : 25))));
                }
                var_26 = var_0;
            }
        }
    }
    #pragma endscop
}
