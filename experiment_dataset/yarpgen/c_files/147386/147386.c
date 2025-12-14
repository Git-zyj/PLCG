/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((((((((arr_4 [i_0 + 2] [i_1]) + -127))) ? (arr_3 [i_1 + 2] [i_0 - 1] [i_0 - 1]) : var_1))) ? (min((((arr_0 [i_0]) ? 1833709910 : var_9)), (min(175378868, (arr_1 [i_0]))))) : var_8);
                var_19 = (min(var_19, -71));
                var_20 = (min(var_20, (((max(((((arr_4 [17] [17]) - (arr_0 [i_1])))), (max((arr_2 [i_0]), (arr_3 [i_0] [i_0] [17])))))))));
                arr_6 [i_0] = (((((+(((arr_2 [i_1]) ? var_9 : 15))))) ? (max(3595758041, (arr_2 [i_0]))) : (((arr_3 [i_1 + 3] [i_0 + 1] [i_0 - 1]) ? (arr_3 [i_1 - 1] [i_0 + 2] [i_0 - 1]) : (arr_3 [i_1 + 2] [i_0 + 2] [i_0 + 1])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    arr_16 [i_2] [i_2] [i_2] [i_2] = ((((((arr_10 [i_2] [i_2]) | (arr_10 [i_2] [i_3])))) ^ ((min(1148417904979476480, var_11)))));
                    var_21 = (max(var_21, ((((arr_12 [i_2] [13] [i_4]) - (arr_3 [i_4] [i_3] [i_2]))))));
                }
            }
        }
    }
    var_22 = (max((((((max(-127, -560558737))) || (((var_5 ? var_10 : var_18)))))), ((var_12 ? -6998345787472379270 : var_1))));
    var_23 += ((var_17 ? ((4119588427 ? (var_7 * var_1) : ((min(1521157800, var_0))))) : -var_2));

    for (int i_5 = 1; i_5 < 15;i_5 += 1)
    {
        var_24 = (min(((var_17 ? var_14 : ((-560558737 ? (arr_8 [i_5]) : var_14)))), (arr_3 [i_5] [i_5] [i_5])));
        arr_19 [i_5] = (arr_17 [i_5 + 2] [i_5]);
        arr_20 [i_5] [8] = ((-((-19 - (min((arr_0 [i_5]), var_8))))));
    }
    for (int i_6 = 1; i_6 < 11;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    {

                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            var_25 += ((-((((((arr_35 [5] [i_7] [i_7] [3] [3]) * var_8))) ? (arr_34 [i_6 + 1] [i_7] [i_8] [i_9] [i_7] [i_8] [i_7]) : -var_15))));
                            var_26 = (max((max(((((arr_23 [i_6] [i_6]) ? (arr_2 [i_9]) : -94))), (((arr_1 [i_10]) ? var_7 : (arr_11 [18]))))), 1068555648));
                        }
                        var_27 = (min(var_27, 78));
                        arr_36 [i_9] [i_6 + 1] = (arr_1 [i_6 - 1]);
                        arr_37 [i_6] [i_7 - 1] [i_9] = (min(((max(3398351947, 32767))), (((arr_0 [i_8]) ? (arr_0 [i_6 - 1]) : 4294967295))));
                        var_28 -= (((((arr_31 [i_6] [i_7] [i_8] [i_8] [i_6 + 1] [i_7 + 2]) && (arr_33 [i_6] [i_6 - 1] [i_7 + 2] [i_9] [i_8]))) || ((max((arr_31 [i_6] [i_6] [i_8] [i_9] [i_6 + 1] [i_7 + 2]), var_8)))));
                    }
                }
            }
        }
        arr_38 [i_6] = ((!((((arr_26 [i_6 + 1] [i_6 - 1]) * (arr_26 [i_6 + 1] [i_6 - 1]))))));
    }
    #pragma endscop
}
