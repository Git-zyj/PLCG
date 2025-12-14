/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((var_8 > (127 - -9055))));
        var_18 -= ((-2147483641 ? 58432 : 4294967278));
        var_19 = ((58412 && (var_14 >= 7079)));
    }
    var_20 = var_5;
    var_21 = max(((var_13 ? (~7103) : (min(var_4, 71)))), -var_3);
    var_22 *= (((-24541 + 2147483647) << (var_6 - 1)));
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        arr_17 [i_1] [i_1] |= max((((45007 != -76) ? (arr_10 [i_1]) : ((var_4 ? -5859500481676565061 : (arr_14 [i_1] [i_2] [i_2] [i_4]))))), ((((!var_4) <= (min(122, (arr_10 [i_1])))))));
                        var_23 = ((!(!-0)));
                    }
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_24 *= ((var_7 ? (((!((min(var_5, var_10)))))) : (((!(((1 - (arr_13 [i_1] [i_3] [i_5])))))))));
                        arr_20 [i_5] = (arr_9 [i_1]);
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            {
                                arr_27 [i_1] [i_1] [i_2] [i_2] [i_2] [i_2] [i_1] = ((-((~(arr_8 [i_1] [i_2])))));
                                arr_28 [i_1] [i_2] [i_1] [i_6] [i_6] [i_2] [i_6] = (((((((((arr_16 [i_1] [i_2] [i_6] [i_7]) << (7125 - 7117)))) ? (min(-8, var_9)) : ((((arr_22 [i_1] [i_2] [i_2] [i_3] [i_6] [i_6]) / -1294153718)))))) > (min(-var_17, 1715355411))));
                                var_25 = (max(((!(((arr_13 [i_6] [i_3] [i_2]) || (arr_13 [i_1] [i_6] [i_3]))))), ((!(arr_18 [i_7])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                arr_34 [i_1] [i_1] [i_1] [i_2] [i_1] |= ((((var_8 << (((arr_16 [i_9] [i_8] [i_3] [i_1]) - 17394)))) >= (((((arr_19 [i_1] [i_2] [i_3]) > var_9))))));
                                var_26 = ((((~(arr_6 [i_1] [i_2]))) * ((((-24541 < ((5859500481676565087 % (arr_19 [i_1] [i_2] [i_3])))))))));
                                var_27 -= (((min(var_5, (max(1448934492, 14077))))) ? ((~((var_12 ? 20513 : var_0)))) : ((((var_8 < (max(var_15, var_4)))))));
                                var_28 = (max((max((arr_25 [i_1] [i_2] [i_1] [i_1] [i_9] [i_8]), (arr_25 [i_1] [i_2] [i_1] [i_3] [i_8] [i_9]))), (max((arr_25 [i_1] [i_2] [i_1] [i_8] [i_9] [i_8]), (arr_25 [i_1] [i_1] [i_3] [i_3] [i_3] [i_9])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
