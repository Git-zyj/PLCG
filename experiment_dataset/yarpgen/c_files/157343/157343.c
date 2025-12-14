/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= ((var_7 ^ ((var_6 ^ ((var_2 ? var_8 : var_10))))));
    var_17 = (min(var_17, (((var_7 ? 53733234 : ((var_2 + ((var_7 ? var_9 : var_8)))))))));
    var_18 |= ((var_15 + var_0) > var_1);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_19 = (((arr_2 [i_0 + 1]) == (arr_2 [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                        {
                            var_20 = (((arr_1 [i_0 + 1]) == (arr_1 [i_0 + 1])));
                            var_21 = (min(var_21, (((23125 <= (var_3 == var_2))))));
                            var_22 = (max(var_22, (arr_10 [i_0] [7] [i_0 - 1] [7] [i_4] [i_4])));
                            var_23 *= (((arr_10 [i_0 + 1] [i_0 + 1] [i_2] [i_3] [i_0 + 1] [i_0 + 1]) ? (arr_10 [i_0 + 1] [i_0 + 1] [8] [i_0] [i_0] [i_0]) : (arr_10 [i_0] [8] [i_2] [2] [i_4] [8])));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            var_24 = (max(var_24, ((((arr_5 [i_0 - 1] [i_1 - 2]) == (arr_2 [i_0 + 1]))))));
                            var_25 *= var_13;
                            var_26 = ((arr_2 [i_0 - 1]) ? ((var_14 ? (arr_1 [i_1]) : (arr_1 [i_0 - 1]))) : (arr_7 [i_1] [i_1 + 2] [i_1 - 1]));
                            var_27 *= var_9;
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            arr_17 [i_2] = (var_9 ? (arr_0 [i_1 + 2] [i_1 + 2]) : (arr_0 [i_0] [i_0 - 1]));
                            var_28 = (max(var_28, ((((arr_10 [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_1 + 2] [i_1]) && (arr_10 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_1 + 2] [i_1 + 2]))))));
                            arr_18 [i_0] [i_0] [2] [i_3] [i_6] = (((arr_9 [i_0 + 1] [i_0 - 1] [i_1 + 1] [i_1 + 2] [i_1 - 1]) ? (arr_7 [i_1 + 2] [i_0 - 1] [i_3]) : (((arr_2 [i_0 - 1]) ? (arr_10 [i_6] [i_0] [i_2] [10] [9] [i_0]) : (arr_6 [i_6] [i_0 - 1] [i_0 - 1])))));
                            arr_19 [i_0 - 1] [i_0 - 1] [i_2] = ((((((arr_7 [i_0 + 1] [i_1] [i_1]) == 7547094761845596449))) << (((arr_11 [16] [i_6] [16] [i_3] [i_2] [i_1] [i_0 + 1]) + 21749))));
                        }
                        var_29 = (arr_0 [i_0] [2]);
                    }
                }
            }
        }
        var_30 = (var_10 && var_6);
        var_31 = (max(var_31, ((((var_15 == var_10) % (((arr_6 [13] [i_0 + 1] [i_0]) * var_7)))))));
    }
    var_32 |= ((var_7 <= (((((105 >> (var_1 + 7109965468151777251)))) % var_4))));
    #pragma endscop
}
