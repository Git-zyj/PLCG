/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, -var_1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {

                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            var_17 = ((+(((((min((arr_4 [i_0] [i_4 + 1]), 1))) && (arr_6 [i_0] [i_4] [i_4 - 1]))))));
                            var_18 = ((~((min(1, 0)))));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_19 = (min(var_19, (((+(((arr_8 [i_1 - 2] [i_1] [i_1 + 1] [i_1] [i_0] [1]) ? (arr_8 [i_1 - 2] [i_1] [i_1 + 1] [0] [i_1] [i_1]) : (arr_8 [i_1 - 2] [i_1] [i_1 + 1] [i_1] [i_1] [i_1]))))))));
                            arr_16 [i_1] [i_1] [i_0] [i_0] [i_3] [i_0] [i_0] = ((-(((1 + var_13) ? 1 : (19858 != 1354895016)))));
                        }
                        arr_17 [i_0] [i_2] [i_0] [i_0] [i_0] = ((-(-255 - var_8)));
                    }
                    for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                    {
                        arr_20 [i_0] [i_0] = 41;

                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            var_20 = (max(19858, 1));
                            var_21 = (max(var_10, ((((~var_12) < 1)))));
                            var_22 = 32767;
                        }
                        arr_25 [i_0] [i_1] [i_2] [i_6] = var_3;

                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            arr_29 [i_6] [i_0] [i_6] = ((!((min(2504889885, 1)))));
                            arr_30 [i_0] [i_0] [i_2] [i_6] [i_8] = var_1;
                            arr_31 [i_0] [i_6] [i_0] = ((-((var_1 ? (arr_10 [i_1 - 2] [i_2]) : (arr_2 [i_1 - 2])))));
                            var_23 = (max(var_23, (((((((arr_24 [i_1 - 2] [i_1 - 1]) - (arr_14 [i_8] [i_8] [i_1] [i_1] [i_1 - 1] [i_1 - 1])))) ? (arr_26 [i_0] [i_1 - 1] [i_2] [0] [i_1]) : ((-(max(var_10, var_1)))))))));
                        }
                    }
                    for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
                    {
                        var_24 = (var_10 == 2940072279);
                        arr_34 [i_0] [i_0] [i_0] [i_0] [i_2] [i_9] = ((-((7582930513068252543 ? 2504889887 : ((~(arr_9 [i_1] [1])))))));
                    }
                    var_25 = (((arr_27 [i_0] [i_1] [14]) ? ((1354895016 ? 30402 : 1759338786)) : 2251731094208512));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            {
                                var_26 = ((((1023 || ((min(18, 1354895016))))) ? ((min(1, -89))) : (arr_8 [i_11] [i_11] [13] [i_2] [i_0] [i_0])));
                                arr_41 [i_0] = ((~((((max((arr_0 [i_0]), (arr_37 [i_0] [i_1] [i_2] [i_11] [i_11])))) - 19858))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
