/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((var_0 <= var_11) ? var_6 : ((var_16 >> (var_8 + 1683289304))))) != var_15));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            var_21 -= (arr_3 [i_1 - 3]);
            arr_7 [i_0] [i_1] [i_1 - 1] = ((((!((((arr_3 [i_0]) >> (var_11 - 509564335)))))) ? (arr_6 [i_0]) : (((var_4 ? (arr_1 [i_1 - 2] [i_1 + 1]) : (arr_1 [i_1 - 1] [i_1 - 3]))))));
            var_22 = (-6775216439857295933 ? -6775216439857295933 : 91);
            var_23 -= (((-(min((arr_6 [i_1 - 3]), (arr_0 [1]))))) % ((max(6775216439857295934, var_0))));
        }
        var_24 = (min((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))), (~var_3)));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        arr_10 [i_2] [i_2] = ((((((arr_6 [i_2]) + (arr_4 [i_2] [i_2] [i_2])))) ? ((-(arr_6 [i_2]))) : (arr_6 [i_2])));
        var_25 = -6775216439857295933;
        var_26 = (max((arr_8 [i_2]), ((((var_1 > var_13) < (~-6775216439857295934))))));
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_27 = ((((min((min((arr_12 [i_3] [i_3]), (arr_6 [i_3]))), ((((arr_3 [i_3]) ? var_9 : 1)))))) ? var_4 : (((-6775216439857295915 && (arr_5 [i_3]))))));
        arr_13 [i_3] = -var_11;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 15;i_5 += 1)
            {
                {

                    for (int i_6 = 2; i_6 < 13;i_6 += 1)
                    {
                        arr_24 [5] [i_4] [i_4] [i_4] = (((((min(var_7, (arr_12 [i_6] [i_5]))) + var_19)) * (-9223372036854775807 - 1)));
                        var_28 = ((min(5995901764564983317, 9223372036854775807)));
                    }
                    var_29 = (max(var_29, (((-((var_7 ? (arr_0 [i_5 - 1]) : ((var_11 ? var_4 : (arr_0 [i_3]))))))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 14;i_8 += 1)
                        {
                            {
                                arr_29 [i_8] [i_7] [1] [i_7] [i_3] = ((!((((arr_14 [i_5 - 1]) ? -6775216439857295923 : (arr_15 [i_5] [i_5] [i_5 - 2]))))));
                                var_30 |= min((((arr_4 [i_8 + 2] [i_8 + 3] [i_8 - 1]) ? (var_6 ^ 0) : (-1245067622 / 55595))), var_16);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
