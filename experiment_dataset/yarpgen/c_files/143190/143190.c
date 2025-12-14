/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_14 = (42614 | -14412);
                            arr_9 [i_0] [i_0] [i_0] [i_3] |= ((min((max(1855, var_8), 58045))));
                            var_15 -= (((max((arr_5 [7] [7] [i_2] [7]), var_3)) >> (((min(var_11, 58045)) + 6080435686140473602))));

                            for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                            {
                                var_16 = (((((-(4 ^ var_10)))) + (min((~46170), (arr_6 [i_0] [i_2 + 1] [i_3])))));
                                arr_12 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] = ((((max(-4, 7491))) ? (var_12 | var_1) : 9857));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                            {
                                var_17 = var_4;
                                var_18 = (arr_0 [i_1 + 1] [i_1 + 1]);
                                var_19 = (min(var_19, 9223372036854775807));
                                var_20 *= (!var_2);
                                arr_15 [i_2] [i_3] [i_3] [i_2] [i_1] [i_2] [i_2] = (arr_11 [i_0] [i_0] [i_0] [i_0] [5] [i_0]);
                            }
                            for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                            {
                                var_21 -= var_12;
                                var_22 = (((((var_6 >> (var_1 - 23321))) >> (((arr_2 [i_1 - 1] [10]) - 230)))));
                                var_23 += var_9;
                            }
                            for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                            {
                                var_24 = (min(var_24, -5178559346746103116));
                                var_25 = (-(~0));
                            }
                            var_26 = (max(var_26, var_7));
                        }
                    }
                }
                arr_24 [i_0] |= ((((((arr_3 [i_1 - 2]) ? ((min(4294967278, 4))) : (arr_0 [i_1 - 2] [i_1 - 2])))) ? (((min(36032, 26951)))) : (max(var_7, ((((var_2 + 2147483647) >> var_12)))))));
            }
        }
    }
    var_27 = (min(var_27, var_9));
    var_28 = (min(var_28, var_12));
    #pragma endscop
}
