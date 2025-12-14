/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= (((min(var_8, 16383)) > (((var_3 ? var_9 : var_0)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        arr_13 [i_0] [i_2] [i_3] = (((((arr_10 [i_0] [i_2] [i_3] [i_3]) ? 7772 : var_0)) + (arr_9 [i_2] [i_2] [i_1])));
                        var_11 = ((((((arr_11 [i_0] [i_1]) ? (arr_4 [i_1]) : 4294967295))) - (arr_7 [i_0] [i_1 - 2] [i_1 - 2] [i_2 + 1])));
                    }
                    for (int i_4 = 2; i_4 < 19;i_4 += 1) /* same iter space */
                    {
                        var_12 = 102;
                        arr_18 [i_2] = var_6;
                        var_13 = (~73);
                        var_14 -= (arr_8 [i_1 - 1] [i_4] [i_0]);
                    }
                    for (int i_5 = 2; i_5 < 19;i_5 += 1) /* same iter space */
                    {
                        arr_21 [i_2] [i_1 - 4] [2] = (((((min(945251263, -1)))) ? ((max((57764 | 1), -12088))) : 32767));

                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            arr_25 [i_2] [i_1] [i_2 + 1] [i_5] [i_6] [i_6] = -57764;
                            var_15 ^= ((-(arr_12 [i_6] [8] [i_1] [i_1] [6])));
                        }
                        for (int i_7 = 0; i_7 < 0;i_7 += 1)
                        {
                            var_16 = ((-((~(arr_12 [i_0] [12] [i_5] [i_2 + 1] [i_7 + 1])))));
                            arr_30 [i_7] [i_2] [i_0] = (((((-6557 ? (~var_9) : 53448))) ? (arr_10 [i_2 + 1] [i_2] [11] [i_0]) : ((min(var_1, 0)))));
                            var_17 -= ((min(-32767, ((var_4 ? var_6 : 1623058756607353997)))));
                        }
                    }
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        arr_34 [i_2] = ((((((var_3 || (arr_10 [i_8] [i_2] [i_2] [i_0]))) && (var_4 && var_8))) && (((175 ? (arr_7 [15] [i_1 - 4] [i_2] [i_8]) : var_2)))));
                        arr_35 [i_2] [i_1 - 1] [19] [i_8] = (((var_4 ^ (~57764))));
                        arr_36 [i_2] [i_2] = ((((arr_31 [i_8] [i_2] [i_2] [11]) ? (arr_23 [i_0] [i_1] [i_2 + 1]) : (arr_4 [i_1]))));

                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            var_18 -= 6079;
                            arr_39 [i_2] [i_1 - 2] [i_2] [1] [i_1 - 2] = 3147753428;
                            var_19 = (((((((-(arr_8 [i_0] [i_2] [i_1 + 2])))) ? (((max(255, var_4)))) : 65535)) <= var_6));
                        }
                    }
                    arr_40 [i_2] [i_2] [i_2] [i_2 + 1] = var_5;
                    var_20 = ((-((min(59457, var_4)))));
                }
            }
        }
    }
    var_21 = (max(var_6, var_1));
    var_22 = 1;
    var_23 = (min((((-((min(-115, 1)))))), ((((min(var_9, 10563896142883490441))) ? (min(1623058756607353997, 536870911)) : -4294967295))));
    #pragma endscop
}
