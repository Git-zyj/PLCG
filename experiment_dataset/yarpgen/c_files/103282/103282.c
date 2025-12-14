/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((~(((!var_12) ? (!var_14) : var_0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_19 ^= (min((((!(arr_7 [i_2] [i_0] [i_0] [i_0])))), 1));
                    var_20 = (((max(106, var_9))) && ((((559677248 ? var_11 : 0)) < ((min(29612140, var_14))))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            var_21 = (max(var_21, (((((arr_11 [i_0] [i_4] [i_3] [i_3] [i_4] [i_0]) ? var_3 : (~0)))))));
                            var_22 ^= var_2;
                            var_23 = 21;
                        }
                        for (int i_5 = 3; i_5 < 22;i_5 += 1)
                        {
                            arr_15 [i_0] [15] [i_1] [i_3] [i_5 - 2] = arr_14 [i_0] [i_1];
                            var_24 = (min((((((max((arr_9 [i_0] [i_1] [i_1] [i_3] [i_5]), 17))) - ((max(127, (arr_10 [i_0]))))))), (((arr_12 [i_0] [i_1] [i_3] [i_5]) / (arr_13 [i_0] [i_1] [i_1] [i_1] [i_1] [i_5] [i_5])))));
                            arr_16 [i_1] [i_3] [i_2] [i_1] [16] [i_1] = (((((!((min(var_11, (arr_4 [i_0]))))))) & -1));
                            arr_17 [i_0] [i_1] [i_2] [i_2] [i_1] = (arr_2 [i_1]);
                            var_25 = arr_10 [i_0];
                        }
                        var_26 = (max(var_26, -641221748));
                        var_27 += (((max(var_13, var_9)) / (((+(min((arr_10 [i_0]), var_8)))))));
                        var_28 &= ((((((!(~var_2))))) < (((arr_12 [i_3] [i_2] [i_0] [i_0]) ? (((var_12 ? (arr_7 [i_0] [i_1] [i_0] [10]) : 1))) : var_5))));
                    }
                }
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    var_29 = (min(var_29, 152));
                    var_30 = 0;
                    var_31 = ((((max((arr_8 [i_0] [i_0]), (arr_0 [i_0] [i_1])))) ? (!var_1) : (arr_19 [i_0] [i_1] [i_0] [i_6])));
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 23;i_8 += 1)
                    {
                        {
                            var_32 = (((((!220) ? (arr_23 [i_8 - 1] [i_8 + 1] [i_8 - 2]) : 103))) ? (((((~(arr_12 [i_1] [i_7] [i_1] [i_0])))) ? (arr_20 [i_8 + 2] [i_8 + 1] [i_8 - 1] [i_8 + 1]) : (!var_13))) : 29612140);

                            for (int i_9 = 1; i_9 < 22;i_9 += 1)
                            {
                                var_33 &= 4294836224;
                                var_34 = (min((~-29612153), ((~((max(1, 16)))))));
                            }
                            arr_29 [i_8] [i_1] &= ((((min((arr_0 [i_0] [i_8 + 1]), (arr_0 [1] [i_8 + 2])))) / (arr_0 [i_7] [i_8 - 2])));
                            arr_30 [i_0] [i_1] [i_1] [i_8] = (arr_6 [i_1]);
                        }
                    }
                }
            }
        }
    }
    var_35 = ((3830432112 ? var_15 : (min((~3742607132), ((-8038 ? 552360163 : var_17))))));
    var_36 = ((var_2 ? 2194016118 : var_0));
    #pragma endscop
}
