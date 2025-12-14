/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = ((((((arr_4 [i_0] [i_1 + 1]) || 55))) & (arr_2 [i_1 + 2])));

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_19 = (((4041083152306320685 ? (arr_2 [i_0]) : (arr_1 [i_1]))));
                var_20 = (arr_2 [i_2]);
                arr_9 [15] [13] [i_1] [i_0] = var_15;
                arr_10 [i_0] [i_0] [i_2] = ((((55 ? 1 : 15956851009726454045)) <= 1));
            }
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            var_21 *= (((-55 + 2147483647) << (((7697032323979730613 >= 1) - 1))));
            var_22 = ((15956851009726454045 ? 6456918627735607715 : var_18));
            var_23 = (max(var_23, (1222841022 >= 2578368332)));
            arr_14 [i_0] = (((arr_13 [i_0] [i_0]) || (arr_13 [i_0] [i_0])));
        }
        arr_15 [i_0] = var_10;
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 0;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        var_24 = (max(var_24, 0));
                        var_25 = (min(var_25, 5043040311254431962));

                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            var_26 = (((((arr_19 [i_8]) & 0)) >= (arr_21 [5])));
                            var_27 = (max(var_27, (((924035169 || ((var_6 == (arr_17 [i_4 + 1]))))))));
                            arr_29 [i_8] [i_7] [i_7] [i_5] [16] = (((7 >= 37048) || 13789428887697293071));
                            arr_30 [i_8] [i_7] [i_7] [i_5] [i_4 + 1] = ((arr_18 [i_4 + 1] [i_4 + 1]) >= (arr_18 [i_4 + 1] [i_4 + 1]));
                            var_28 = ((arr_17 [i_7]) & 206);
                        }
                        var_29 = 1;
                    }
                    var_30 = (((arr_22 [14] [i_4] [i_5] [i_6]) ? (((-1698346111 - (((arr_18 [i_4 + 1] [4]) - (arr_19 [i_4])))))) : var_14));
                    arr_31 [i_6] [i_5] [i_4] = (((((arr_19 [i_4 + 1]) ? var_16 : 5078964287056794348)) - (arr_19 [i_4 + 1])));
                }
            }
        }
    }
    var_31 = ((var_17 * ((var_13 & ((var_10 << (var_10 - 15688413092418577099)))))));
    #pragma endscop
}
