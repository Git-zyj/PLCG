/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = -29431;
        var_19 = var_0;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = (max((32736 <= 54391), (arr_0 [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        arr_20 [i_4] [i_4] [i_2] [i_2] [i_1] [i_1] = (+-29083);

                        for (int i_5 = 3; i_5 < 18;i_5 += 1)
                        {
                            var_20 = (min(var_20, (((~(arr_15 [i_2 - 1] [i_2] [i_3 + 1] [i_5 - 3]))))));
                            var_21 = (min(var_21, ((min((arr_14 [i_5] [i_3] [i_2 - 1]), (((var_1 + 9223372036854775807) >> (((arr_4 [i_1] [i_5 - 3]) - 13159693865404828442)))))))));
                        }
                        var_22 ^= (min(var_3, (min(var_8, 9382957596072526531))));
                        var_23 = (var_5 ? 8182849675344339646 : (((8182849675344339646 / var_8) << (3893 - 3840))));
                    }
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 20;i_6 += 1)
                    {
                        arr_25 [i_1] [i_1] [i_2] [i_3 - 1] [i_6 + 1] = var_5;
                        var_24 = var_0;
                    }
                    var_25 -= 11145;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 19;i_8 += 1)
                        {
                            {
                                var_26 = (((!10263894398365211970) ? (!-7893689517699760357) : (((arr_7 [i_8] [8]) ? (min(64, -2839892108503060144)) : (arr_13 [i_1] [7] [i_8])))));
                                arr_33 [i_1] [i_1] [i_2] [i_1] [i_1] [i_1] [i_1] = (i_2 % 2 == zero) ? (((((var_7 ? (arr_15 [i_2 - 2] [i_2 - 2] [i_3 - 1] [19]) : (min(243, var_10)))) << (((max(var_7, ((var_18 ? (arr_28 [i_1] [i_2] [i_2] [i_7] [i_8]) : 23)))) - 152941921696540152))))) : (((((var_7 ? (arr_15 [i_2 - 2] [i_2 - 2] [i_3 - 1] [19]) : (min(243, var_10)))) << (((((max(var_7, ((var_18 ? (arr_28 [i_1] [i_2] [i_2] [i_7] [i_8]) : 23)))) - 152941921696540152)) - 5593295178294164215)))));
                                var_27 = min((min((arr_18 [20] [i_2] [i_8 + 1] [i_2 - 1] [i_8]), (arr_18 [i_1] [i_2] [i_8 + 1] [i_2 - 1] [i_8 - 2]))), (arr_18 [i_3] [i_2] [i_8 + 1] [i_2 - 1] [i_1]));
                                arr_34 [i_2] [i_7] [i_3] [i_2] [i_2] = 2839892108503060144;
                            }
                        }
                    }
                }
            }
        }
    }
    var_28 = -var_1;
    var_29 = (var_3 || var_12);
    #pragma endscop
}
