/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (~var_14);
    var_18 = 6130962970266872532;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] = (min(((-(((arr_1 [i_0]) - 0)))), ((-(((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [5]) : (arr_0 [i_0] [i_0])))))));
        var_19 = ((((arr_2 [3]) * (((arr_3 [i_0]) * (arr_1 [4]))))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_20 = (((1854573773 - (0 / -1))));
        var_21 = ((-((~(((arr_5 [i_1]) << (((arr_6 [i_1] [i_1]) - 22836))))))));

        /* vectorizable */
        for (int i_2 = 3; i_2 < 11;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 13;i_3 += 1)
            {
                var_22 = (min(var_22, (arr_5 [8])));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 12;i_5 += 1)
                    {
                        {
                            arr_17 [i_1] [i_2] [i_2] [i_3] [i_2] [i_4] [i_5] = arr_13 [i_5] [i_2] [11] [i_3] [i_2] [i_2] [i_1];
                            var_23 = (0 * 0);
                        }
                    }
                }
            }
            var_24 = (min(var_24, ((((arr_14 [i_2] [i_2 + 3] [i_2] [i_2 + 3] [i_2 + 3] [2] [2]) ? (arr_7 [i_1] [i_1] [i_1]) : (!39562))))));

            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                arr_22 [i_6] = 92;
                arr_23 [i_1] [i_2 - 2] [i_6] = (((arr_14 [i_1] [1] [i_6] [1] [i_1] [i_6] [i_6]) == ((~(arr_16 [i_6] [i_6] [i_6] [i_2] [i_2] [i_1])))));
                var_25 -= 16204;
            }
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                arr_26 [i_1] [i_2 + 1] [3] = (~86);
                var_26 = (arr_5 [i_2 - 2]);
            }
        }
    }
    var_27 = (65529 >> ((((max(var_10, var_5)) < var_12))));
    var_28 = var_4;
    #pragma endscop
}
