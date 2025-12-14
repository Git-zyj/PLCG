/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_3, var_4));
    var_14 = (var_11 != var_10);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_15 *= max(((min((~21459), 3))), 927882747);
                var_16 = ((((arr_2 [i_0 + 1]) ? -4957 : (arr_0 [i_0 + 1]))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            {
                arr_9 [i_3] [i_3] [i_3] = ((((min((arr_7 [i_2]), var_10)) ^ (arr_4 [i_2] [19]))));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        {

                            for (int i_6 = 0; i_6 < 13;i_6 += 1)
                            {
                                arr_18 [i_4] [i_5] = var_10;
                                arr_19 [i_2] [i_3] [i_5 - 1] [i_4] [i_3] = (arr_13 [i_2] [i_5 + 1]);
                                var_17 = (max(((((((arr_5 [i_2]) ? var_0 : var_8)) >= var_6))), (min(var_0, (arr_10 [i_4 + 1] [i_5 - 1])))));
                            }
                            for (int i_7 = 2; i_7 < 12;i_7 += 1)
                            {
                                arr_23 [i_3] [i_4] [0] [i_4] = 173;
                                var_18 = (min(var_18, var_5));
                                var_19 -= ((var_6 ? (arr_6 [i_2] [i_2]) : var_0));
                                var_20 = (((((0 ? 64013 : 67104768))) ? ((-(arr_21 [i_7] [i_5 + 3] [i_5 - 1] [i_4 + 1] [i_4] [i_3] [2]))) : ((min((arr_15 [i_3] [i_5 + 2] [i_5] [1] [i_5] [4] [i_7]), (arr_20 [i_2] [i_2] [i_2] [i_4 - 1] [i_4] [i_4] [i_7]))))));
                            }
                            for (int i_8 = 0; i_8 < 13;i_8 += 1)
                            {
                                arr_27 [6] [4] [i_4 - 1] [i_5 + 1] [i_4] [i_5] [i_8] = ((-((((min(3711594230, 583373066))) ? 3855097220 : 4956))));
                                var_21 = ((~((3711594229 ? (arr_26 [i_4] [i_4] [i_4 + 1]) : (arr_26 [i_4] [i_4 - 1] [i_4 + 1])))));
                                arr_28 [i_3] [i_3] [i_4] [i_5] [i_8] |= ((-(((arr_22 [2] [i_3] [i_4] [i_4 + 1] [i_3]) ? var_2 : (arr_15 [i_2] [i_4] [i_4 + 1] [i_4 - 1] [8] [i_5 + 2] [7])))));
                            }
                            arr_29 [i_4] [i_3] [i_4] [i_5] = (((((~(arr_11 [i_5] [i_5 + 3] [i_5 + 1] [i_4])))) ? ((max(var_6, var_8))) : (arr_24 [i_4] [i_4 - 1] [7] [i_3] [i_2])));
                        }
                    }
                }
                var_22 = ((110 ? (((max(var_7, var_5)))) : ((~(arr_5 [i_2])))));
                var_23 = (+-4294967276);
            }
        }
    }
    var_24 = ((24733 ? 9223372036854775807 : 115));
    #pragma endscop
}
