/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += var_3;
    var_11 = (min(var_3, var_8));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min(1023, 4491673657131534542));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_12 -= -8826381148520860941;
            var_13 = (min(var_13, (~var_2)));

            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                arr_8 [i_1] [i_1] [i_0] [i_1] = ((~((~(arr_6 [i_2 - 3] [i_2] [i_2])))));
                arr_9 [i_0] [i_2] [i_1] [i_0] = (max(4491673657131534542, ((((arr_7 [i_0] [i_1] [i_1] [i_2 - 3]) | (arr_7 [i_0] [i_1] [i_2] [i_2 + 3]))))));
            }
        }
        arr_10 [i_0] = ((((((min(var_4, var_7)) / 11752))) ? (((arr_6 [i_0] [i_0] [i_0]) | ((9079134030701028997 ? 4491673657131534539 : var_5)))) : ((((arr_3 [i_0] [i_0] [i_0]) + (arr_7 [i_0] [i_0] [i_0] [i_0]))))));

        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {

            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                arr_16 [i_0] = (~var_9);
                var_14 = ((9079134030701028969 > ((((min((arr_11 [i_3] [i_3]), (arr_1 [i_0] [i_3])))) ? var_1 : (((arr_11 [i_0] [i_3]) ? 4491673657131534564 : (arr_15 [i_3] [i_4 - 1])))))));
            }
            for (int i_5 = 4; i_5 < 19;i_5 += 1)
            {
                var_15 = (((((var_5 ? 1380786788 : (((arr_15 [i_3] [i_5 + 3]) << var_7))))) >= -9079134030701028985));
                var_16 = (max(((((arr_12 [i_0]) + (arr_12 [i_0])))), ((13955070416578017070 ? (((1 ? 11750 : 1632562696))) : 2901668493))));
                arr_19 [i_0] = max((((((9779 ? var_9 : -11732))) ? ((min((arr_14 [i_3] [i_3] [i_5] [i_0]), (arr_0 [i_0])))) : (arr_14 [i_0] [i_0] [i_0] [i_0]))), -var_1);
            }
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 21;i_7 += 1)
                {
                    {
                        var_17 = (((((~(max((arr_20 [i_0]), (arr_15 [i_0] [i_7])))))) ? (((var_2 ? ((((arr_3 [i_3] [i_6] [i_0]) == var_2))) : ((252962678 ? -14 : -1))))) : (arr_21 [i_0] [i_6] [i_3] [i_0])));
                        arr_25 [i_0] [i_3] [i_6] [i_7 + 1] = min((arr_17 [i_3]), (min((max(11748, 9007199254740991)), (((-11777 / (arr_7 [i_0] [i_6] [i_3] [i_0])))))));

                        for (int i_8 = 3; i_8 < 19;i_8 += 1)
                        {
                            var_18 = (var_1 > (max(17231, -1)));
                            var_19 = -3;
                        }
                        arr_28 [i_0] = -var_4;
                    }
                }
            }

            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {

                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    arr_33 [i_0] [i_0] [i_0] [i_10] [i_3] = (max((((-(arr_11 [i_0] [i_0])))), (min((min(var_8, var_9)), ((((arr_3 [i_0] [i_0] [i_0]) && (arr_32 [i_0] [i_0] [i_9] [i_0]))))))));
                    var_20 -= (((((-((-9079134030701028991 ? (arr_4 [i_3] [i_3]) : (arr_13 [i_0] [i_9] [i_10])))))) + ((-31744 ? (1632562692 - 8582456638016720020) : (((11748 ? (arr_12 [i_10]) : var_7)))))));
                }
                arr_34 [i_0] [i_3] [i_9] = ((((min((max((arr_22 [i_0] [i_0]), -968268787)), ((min((arr_26 [i_0] [i_3] [i_9]), (arr_26 [i_0] [i_3] [i_3]))))))) ? var_9 : var_6));
                arr_35 [i_0] [i_0] = arr_17 [i_0];
            }
            arr_36 [i_0] [i_0] = ((-(min(((((arr_5 [i_0] [i_0]) == var_0))), var_4))));
        }
    }
    var_21 = var_3;
    #pragma endscop
}
