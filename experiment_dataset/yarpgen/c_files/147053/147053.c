/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] = -1591928680017644173;

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_12 [i_0] = max(-12462, var_9);
                        var_18 = var_1;

                        for (int i_4 = 3; i_4 < 23;i_4 += 1)
                        {
                            arr_15 [i_0] [i_1] [i_1] [i_3] [i_1] [i_0] [i_1] = ((-13 <= (min(1591928680017644172, 28))));
                            arr_16 [i_0] = ((((((!var_14) <= var_13))) | (((!(arr_11 [i_0] [i_2 - 2] [i_4] [i_4 - 2]))))));
                        }
                        for (int i_5 = 2; i_5 < 22;i_5 += 1)
                        {
                            arr_21 [i_0] [i_1] [i_2] [i_0] [i_5 + 1] = (((((((((arr_4 [i_1] [i_0]) ? -20292 : (arr_14 [i_0] [i_0] [14] [i_2 - 3] [21] [i_3] [i_5])))) && (arr_13 [1] [i_1] [i_1] [i_0] [i_5] [i_3] [1])))) | ((max(-121, 1591928680017644159)))));
                            var_19 = (max(((-24 ? 53073 : -13)), var_3));
                            var_20 = (min((arr_0 [i_1]), var_0));
                            arr_22 [i_5] [i_0] [i_2 - 3] [i_1] [i_0] [i_0] = 18338;
                            arr_23 [i_0] [1] [i_0] [i_0] = ((-19 ? 0 : -122));
                        }
                        arr_24 [i_0] [i_1] [i_0] = ((max(18326, var_7)));
                    }
                }
            }
        }
        arr_25 [i_0] = (max((((~(max(-456463142, var_11))))), (min((~var_1), (min(-122, 4484232462190147232))))));
        arr_26 [i_0] = var_4;
        arr_27 [i_0] = (((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_14 [i_0] [i_0] [i_0] [7] [i_0] [12] [i_0]) : (max(var_3, -467578579))));
        arr_28 [i_0] = var_3;
    }

    for (int i_6 = 3; i_6 < 19;i_6 += 1)
    {
        var_21 = (((((~(arr_4 [i_6 - 3] [6])))) ? (max(0, ((var_9 ? var_4 : (arr_7 [i_6 - 1]))))) : ((max(52931, (((0 && (arr_5 [0] [i_6] [i_6])))))))));
        arr_32 [i_6] = (max((max((((7 ? 3229688141931373015 : -4375184016852442219))), ((713469864 ? var_3 : 3487195017)))), 9164554696414376694));
        arr_33 [i_6 + 2] [i_6] = var_7;
        arr_34 [i_6] = var_16;
    }
    var_22 = var_5;
    var_23 = min(7, ((((min(35, var_15))) ? (~8802863287420280840) : (min(-7601940619517575659, 503316480)))));
    var_24 = 220;
    #pragma endscop
}
