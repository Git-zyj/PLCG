/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        var_19 += ((+(((arr_10 [1] [i_1] [11] [i_1] [i_1]) ? 230 : 230))));
                        arr_11 [i_0] [i_0] [i_0] [i_0] |= var_18;
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        var_20 = (((min((arr_13 [i_0] [i_1] [i_4]), (((arr_8 [i_0] [i_1] [i_2] [i_1]) ? 27 : (arr_12 [0] [0]))))) * ((((!(arr_9 [i_0] [i_0] [i_0] [i_0] [4] [i_4])))))));

                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            var_21 = (var_17 ? (min((arr_0 [i_0] [i_0]), (arr_9 [i_0] [5] [6] [i_0] [i_4] [i_5]))) : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]));
                            var_22 = ((-(((arr_14 [i_1] [i_1] [i_1] [i_1]) ? (arr_14 [i_0] [i_0] [i_1] [7]) : (arr_14 [i_0] [i_2] [i_2] [i_4])))));
                            var_23 = (-(29 != 29));
                            arr_16 [i_4] [i_2] [i_1] [i_4] [i_2] = ((((max(((max(29, (arr_13 [i_2] [i_2] [1])))), (arr_10 [i_0] [i_0] [i_2] [i_0] [i_5])))) ? ((((arr_1 [i_0] [i_0]) || (arr_8 [i_0] [i_0] [i_0] [i_0])))) : ((((1258400304098139072 ? -27 : 2176266321))))));
                            var_24 = (arr_12 [i_0] [i_2]);
                        }
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            arr_21 [i_0] [i_0] [i_0] [i_2] = (max(var_5, ((78 ? -28 : -29))));
                            var_25 = (min(var_25, ((((((((min(3317372743, 22))) ? -20 : 1))) + (((((27332 ? (arr_5 [3] [3] [3]) : 5338522370159906936))) ? 10 : (4 - 1))))))));
                        }
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            var_26 = (((((arr_7 [i_0] [i_2]) ? (arr_7 [i_2] [i_4]) : (arr_7 [i_0] [i_1])))) ? (min(-4, -5599523444359156882)) : 15);
                            var_27 = ((((((arr_4 [i_1] [7] [10]) ? -103 : var_2)) * (var_0 ^ 2118700975))));
                        }
                        var_28 ^= (max(((max((arr_25 [7] [i_1] [i_1] [i_1] [11]), (arr_4 [i_0] [i_1] [i_2])))), var_14));
                    }
                    arr_26 [i_0] [i_1] [i_2] [i_1] = (arr_24 [i_2] [i_1] [1] [i_0] [i_0]);
                }
            }
        }
    }
    var_29 = (((((14440 | 1) ? var_13 : (!var_10))) >= ((min(1, 255)))));
    var_30 = 2118700975;
    /* LoopNest 3 */
    for (int i_8 = 2; i_8 < 14;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 14;i_10 += 1)
            {
                {
                    var_31 &= ((+(min((arr_31 [i_10 - 1] [i_10 - 3]), (((arr_29 [i_8]) ? 1588735837 : -22012))))));
                    var_32 = ((((arr_27 [14] [i_10 + 1]) || 1)) ? ((((arr_27 [i_10] [i_10 - 2]) >= (arr_31 [4] [i_10 + 1])))) : ((min((arr_27 [7] [i_10 - 1]), (arr_27 [i_10] [i_10 - 1])))));
                }
            }
        }
    }
    var_33 = var_9;
    #pragma endscop
}
