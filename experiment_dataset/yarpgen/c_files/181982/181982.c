/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_1));
    var_11 = (min(var_11, var_1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    var_12 = (~var_3);

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_13 = (max(var_13, var_6));
                        arr_11 [i_0] [i_2] [i_0] = ((((min((((var_4 + 2147483647) >> (4294967295 - 4294967270))), (!var_8)))) ? (arr_9 [i_0] [i_0] [i_2 - 3] [i_2 + 3]) : (max(228, 56225188))));
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        var_14 = (min(var_14, ((min(((((((arr_0 [i_1]) | var_4))) ? (!var_7) : (arr_5 [i_1]))), (arr_1 [i_1] [i_1]))))));
                        var_15 -= ((~(((var_5 || (((18 ? var_2 : (arr_13 [i_0] [2] [i_4])))))))));

                        for (int i_5 = 2; i_5 < 12;i_5 += 1)
                        {
                            var_16 = ((((((min(var_7, var_6))) ? (((var_5 ? var_1 : var_5))) : (arr_16 [i_0] [i_1] [i_2 - 1] [i_4] [i_5 - 2]))) / var_2));
                            var_17 = ((!((min((arr_0 [i_0]), var_7)))));
                        }
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            var_18 = (max((~var_3), var_2));
                            var_19 = ((~(!102)));
                            arr_19 [i_0] [i_0] [i_2] = var_4;
                            var_20 = (((((var_5 % 3958707991) & 9915427337223345792)) | 75));
                            arr_20 [i_0] [i_0] = ((~(((10127653659269768513 & 0) ? (66 % -11642) : 189))));
                        }
                        for (int i_7 = 2; i_7 < 12;i_7 += 1)
                        {
                            var_21 = (min(var_21, ((((((min(var_0, var_6)))) || ((var_8 || (arr_5 [i_2 + 1]))))))));
                            var_22 = (min(var_22, ((max((((255 - 30556) + 16383)), (min(((92 ? 5667764077019317255 : 12163221393319422331)), var_3)))))));
                        }
                    }
                    var_23 = var_9;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            {
                                var_24 = (min(var_24, ((((arr_10 [i_9] [i_8] [i_1] [i_0]) && ((((arr_7 [i_0] [i_2 + 2] [i_0] [i_9] [i_9] [i_9]) ? var_0 : var_1))))))));
                                var_25 = var_3;
                                var_26 = (max(var_26, ((~((-((min((arr_2 [i_0] [i_1]), var_1)))))))));
                                var_27 = (max(var_27, ((max((((((min((arr_8 [3] [i_8] [i_2] [i_1] [i_0]), var_1))) != (var_1 * var_6)))), (~var_8))))));
                                var_28 = (((((var_1 ? (arr_22 [i_2 + 3] [i_2] [i_2 + 1] [i_2] [i_2] [i_2 + 3]) : (arr_22 [i_2 + 3] [i_2 + 1] [i_2 + 1] [i_2 - 2] [i_2] [i_2 + 3])))) ? var_4 : (arr_22 [i_2 + 3] [i_2 + 3] [i_2 + 1] [i_2 + 3] [i_2] [i_2 + 3])));
                            }
                        }
                    }
                    var_29 = ((((((var_8 != (arr_26 [i_0] [i_1]))))) - (((arr_26 [i_0] [i_1]) >> (((arr_26 [i_0] [i_2 - 1]) - 9548526829455000539))))));
                }
            }
        }
    }
    #pragma endscop
}
