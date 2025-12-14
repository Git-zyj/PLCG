/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((1 ? 2113520326555864674 : 16333223747153686942))) ? (((2113520326555864674 ? var_3 : var_4))) : (var_6 + 1)));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_11 = ((((var_9 ? var_4 : ((31 ? 8068442570314670197 : -8753289980141285059)))) * (~var_4)));
                        var_12 = (min(16333223747153686942, 1924631006));
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
                    {
                        var_13 = (min(var_8, (arr_0 [i_0])));

                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_14 = (min(var_14, ((((min((arr_2 [i_5]), (max(2113520326555864674, var_1)))) | ((max(-19006, var_4))))))));
                            var_15 = ((~(-2760 & 4294967264)));
                            var_16 = (max(var_16, (((((min(18446744073709551615, 0))) ? -1924631001 : 1924631006)))));
                            arr_16 [i_5] [i_5] [i_5] [i_2] [i_5] [i_0] [i_0] |= (arr_6 [i_0] [i_5] [i_0] [i_0]);
                            arr_17 [i_1] [i_0] [i_1] [i_2] [i_4] [i_5] [i_5] = 207;
                        }
                        arr_18 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = var_2;
                    }
                    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                    {
                        arr_21 [i_0] [i_1] [i_1] [i_6] = (1 + 0);
                        var_17 = (max(var_17, ((((((-(((arr_12 [i_1] [i_0]) ? (arr_11 [i_0] [i_1] [i_2] [i_6]) : (arr_2 [4])))))) ? (arr_1 [i_0] [i_1]) : ((((((var_0 ? 18446744073709551615 : (arr_2 [1])))) ? (((arr_11 [i_6] [i_2] [i_1] [i_0]) ? (arr_11 [i_6] [i_6] [i_6] [i_6]) : (arr_11 [i_0] [i_1] [i_2] [i_6]))) : var_0))))))));

                        for (int i_7 = 3; i_7 < 8;i_7 += 1)
                        {
                            var_18 = var_8;
                            arr_24 [8] [i_1] [i_0] [i_6] [i_0] &= var_7;
                        }
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            arr_27 [i_8] [i_1] [i_2] [i_1] [i_0] = ((((!(!var_9))) || (((-var_5 * (arr_5 [i_1 + 1] [i_0] [i_0 - 1] [i_0]))))));
                            var_19 = ((((max(((min((arr_9 [i_8] [i_6] [i_2] [i_1] [i_0]), -1924631006))), var_9))) && (!16058494004827171422)));
                        }
                    }
                    var_20 = (max(var_20, (((2113520326555864674 ? var_3 : (max(var_4, 0)))))));
                }
            }
        }
    }
    var_21 = (137 ? var_3 : var_5);
    var_22 = (max((min(var_7, (!var_1))), var_2));
    var_23 = ((~((var_7 ? 3606403108 : (247 / var_9)))));
    #pragma endscop
}
