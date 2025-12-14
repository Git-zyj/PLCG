/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 14;i_4 += 1)
                            {
                                var_17 = (max(var_17, (((-((~(arr_1 [i_1]))))))));
                                arr_15 [i_0] [i_0] = (~17684773614927245642);
                                var_18 = (182768023 || -11370658243124151218);
                                arr_16 [1] [i_1] [i_2] [i_0] [i_4] = ((2147483643 ? (120 && 135) : 4322468990338640244));
                            }

                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 0;i_5 += 1)
                            {
                                var_19 += (((((var_7 ? var_0 : 120))) >= (45131 + var_6)));
                                arr_19 [i_0] [i_0] [i_3] [i_3] [i_5 + 1] = (var_11 || 135);
                                arr_20 [i_0] [i_0] [6] = (4322468990338640244 || -1070207765);
                            }
                            for (int i_6 = 0; i_6 < 14;i_6 += 1)
                            {
                                var_20 = (min((!48), (48 && 770399902)));
                                var_21 = (max((min(1949969517, (arr_14 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))), ((~(arr_14 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])))));
                                arr_24 [i_0] [7] [i_0] [i_0] [i_6] = (((var_9 != 787790085476987286) >= 42));
                            }
                            for (int i_7 = 0; i_7 < 14;i_7 += 1)
                            {
                                arr_27 [i_0] [i_0] = (max(var_6, (~var_4)));
                                var_22 = ((((max(var_0, ((~(arr_25 [i_0] [i_0] [i_0] [i_0])))))) ? var_1 : var_12));
                            }
                            /* vectorizable */
                            for (int i_8 = 0; i_8 < 14;i_8 += 1)
                            {
                                arr_31 [i_0] = (((~var_5) ? var_14 : (arr_21 [i_0] [i_0] [i_0] [i_2])));
                                arr_32 [i_0] [i_1] [9] [i_1] [i_2] [i_3] [i_0] = ((63 ? 13 : (arr_23 [i_0] [i_0 - 1] [i_0] [3] [3] [i_0])));
                                var_23 *= (8249066866715889247 * -4322468990338640224);
                            }
                            arr_33 [i_0] [i_2] = (((((min(189, 243)))) >= ((~(min(787790085476987286, -27208))))));
                        }
                    }
                }
                arr_34 [i_0] = (((~97) || ((((max(44, 124))) != var_7))));
                arr_35 [i_0] [10] = (((arr_0 [i_0]) | (arr_0 [i_0])));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        {
                            arr_40 [i_0] [i_0] = ((~((((max(219, 121))) - (1 ^ 1)))));
                            arr_41 [i_0] [i_1] [i_0] [4] = (min(((~(arr_30 [i_0] [i_0 - 1]))), var_8));
                            arr_42 [7] [i_1] [i_9] [i_0] = var_10;
                            var_24 = ((min((arr_3 [i_0 - 1] [i_0 - 1]), (arr_38 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))) / (~36));
                            arr_43 [i_0] [i_1] [i_0] [2] = (min(787790085476987285, -1757229186));
                        }
                    }
                }
            }
        }
    }
    var_25 = (((((min(35, -27208)))) % var_11));
    var_26 *= ((var_2 << (68 == 0)));
    #pragma endscop
}
