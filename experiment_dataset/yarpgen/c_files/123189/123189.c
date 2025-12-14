/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_11 ? -34 : (((~15819534787202243384) ? ((max(-16, var_4))) : var_9))));
    var_20 = var_16;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 22;i_3 += 1) /* same iter space */
                    {
                        var_21 = (arr_6 [i_1] [i_1] [i_3 + 1]);
                        var_22 = ((((((arr_10 [i_1] [i_3 + 2]) != (arr_10 [i_1] [i_3 + 3])))) != ((max((arr_10 [i_1] [i_3 + 2]), (arr_10 [i_1] [i_3 + 1]))))));
                        var_23 = (((((3879781021 | (arr_4 [i_1 + 2] [i_3]))) ^ (arr_9 [i_2] [i_1] [i_2] [i_2] [i_3]))));
                        arr_11 [i_0] [i_0] [i_1] [i_0] [i_0] = -860803412;
                        var_24 = (min((((arr_1 [i_1 - 2] [i_3 + 3]) & 1)), (((arr_1 [i_1 - 2] [i_3 + 3]) ? (arr_3 [i_1 - 2] [i_3 + 3]) : (arr_1 [i_1 - 2] [i_3 + 3])))));
                    }
                    for (int i_4 = 1; i_4 < 22;i_4 += 1) /* same iter space */
                    {
                        arr_16 [i_4] [i_1] [i_1] = ((max((arr_14 [1] [i_4 + 2] [i_4 - 1] [i_4] [i_4 + 2] [i_4 + 3]), -39160218)) / (((arr_14 [i_4] [i_4 + 2] [i_4 - 1] [i_4 - 1] [i_4 + 2] [i_4 + 1]) ? (arr_14 [i_4] [i_4 + 2] [i_4 - 1] [24] [i_4 + 2] [19]) : (arr_14 [i_4] [i_4 + 2] [i_4 - 1] [i_4] [i_4 + 2] [i_4 - 1]))));
                        var_25 |= (var_3 ? (min((((62 << (30594 - 30594)))), (min(-34, var_6)))) : ((((!(arr_9 [i_2] [i_1 - 2] [i_1 - 1] [i_1] [i_4 + 3]))))));
                    }
                    arr_17 [i_1] [i_1] = ((((max(((((arr_6 [i_0] [i_1] [i_2]) == var_18))), (max(2060591038, 99))))) & ((-1924703097639521594 ? ((var_8 * (arr_15 [i_1] [1]))) : (arr_13 [i_1])))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_26 = (((~var_13) / (max(-30, ((var_9 | (arr_1 [i_1] [i_6])))))));
                                var_27 = (max(var_27, ((((max((min(860803413, var_12)), var_15)) + ((min(-20937, -85))))))));
                                var_28 ^= (-463683105 / 7362596196893383258);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
