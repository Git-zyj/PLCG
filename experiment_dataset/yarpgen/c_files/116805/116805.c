/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 15259;

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 20;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            var_16 = (arr_1 [i_1] [i_0]);
                            arr_12 [i_0 - 2] [i_1 + 1] [i_0] [1] [i_4] = ((643376118 ? (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((((-1565610882332180390 ? 15259 : 24576))) ? (((var_2 ? -328557679 : 24576))) : ((-1565610882332180390 ? 643376143 : 1565610882332180410))))));
                            var_17 = (arr_4 [i_1] [i_3] [i_4]);
                            var_18 = var_13;
                        }
                        arr_13 [i_0] [i_0] = (-1565610882332180427 || 1444741507);
                        var_19 = ((~((-1565610882332180390 ? 31 : var_13))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 18;i_7 += 1)
                {
                    {
                        var_20 = 1565610882332180410;

                        for (int i_8 = 1; i_8 < 21;i_8 += 1)
                        {
                            arr_25 [i_0] [i_0] [i_6] [i_8 + 1] [i_0] [i_8] [i_0] = 1539513945;
                            var_21 = (((4294942719 ? var_12 : 2262468670)));
                        }
                    }
                }
            }
        }
        arr_26 [i_0] [i_0] = ((((((((var_11 ? -26 : var_14)) + 9223372036854775807)) << (var_9 - 1)))) ? (arr_22 [i_0] [i_0 + 3] [i_0 + 1] [i_0] [i_0]) : (arr_20 [13] [14] [i_0 + 4] [i_0 - 1] [i_0] [7]));
    }
    for (int i_9 = 0; i_9 < 14;i_9 += 1)
    {
        var_22 = ((((var_1 ? ((var_1 ? 0 : var_7)) : ((var_10 ? 26 : var_13)))) < var_3));
        var_23 = (min(var_23, var_13));
        arr_29 [i_9] = (((((~0) + 2147483647)) << (((((~0) + 21)) - 20))));
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        arr_34 [i_10] = ((-115 - (arr_32 [i_10])));
        arr_35 [i_10] = -1565610882332180411;
        var_24 *= 25;
        var_25 = (((arr_31 [3] [i_10]) <= (min(((var_5 ? 3793683186 : var_13)), 224))));
        arr_36 [i_10] = (((((224 ? 224 : 4))) ? -230 : (37393 != 21)));
    }
    #pragma endscop
}
