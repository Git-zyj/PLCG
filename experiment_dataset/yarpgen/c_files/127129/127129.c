/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((+(((((-127 - 1) ? 9297321472115088969 : 16341)) | ((105 ? var_12 : 1))))));
    var_20 = (max(var_10, ((105 ? ((-27079 ? var_0 : -114)) : 1))));
    var_21 = (min(var_21, var_7));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_22 = (min(var_22, var_13));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_23 = (((arr_9 [i_0 - 1]) ? ((((arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1]) && (arr_9 [i_0 - 1])))) : (arr_8 [i_0 - 1] [i_0])));
                    var_24 = ((var_12 % (((min(82, (-32767 - 1)))))));
                    var_25 = ((var_14 * (min((((arr_3 [i_0] [i_1] [i_1]) * var_0)), (arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1])))));
                }
                for (int i_3 = 2; i_3 < 15;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {

                        for (int i_5 = 1; i_5 < 15;i_5 += 1)
                        {
                            arr_18 [i_1] [i_4] [i_4] [i_3] [i_1] [i_1] = ((((var_13 ? (-32767 - 1) : ((1 ? -106 : -112))))) | ((((((arr_10 [i_0] [i_0] [i_3]) ? (arr_11 [i_0] [i_1] [i_0] [i_0]) : 3672984877))) ? (arr_2 [i_0 - 1]) : 255)));
                            var_26 ^= ((-(arr_9 [15])));
                            arr_19 [i_4 + 1] [i_1] [i_1] [i_4 + 1] [i_0] = ((((max(232, 1))) ^ -114));
                        }
                        var_27 = var_17;
                        arr_20 [i_0] [i_0] [i_1] = (~(~25147));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_28 |= (~-12040);

                        for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
                        {
                            var_29 = (arr_10 [i_0] [i_0 - 1] [i_0 - 1]);
                            arr_28 [i_6] [i_1] [7] [i_1] [i_7] [i_6] = (((arr_13 [i_6]) - -114));
                        }
                        for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
                        {
                            var_30 = ((((-27099 == (max(2507270770885257868, 255)))) || (arr_25 [i_1] [i_8] [i_0] [i_3 - 1] [i_1] [i_1])));
                            arr_31 [i_1] [i_6] [i_3] [i_1] = (((arr_29 [i_0 - 1] [i_1] [i_0] [i_0 - 1] [i_0]) * ((1 ? 1134340144 : (arr_29 [i_0] [i_1] [i_0 - 1] [i_0 - 1] [i_0 - 1])))));
                        }
                        for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
                        {
                            var_31 = (((((91 == (-32767 - 1)))) | (arr_14 [i_3 - 1] [i_3 - 1] [i_3 - 1])));
                            var_32 = ((((((min(var_15, 1)) | 7))) ? 24306 : ((0 ? (max(var_3, (arr_16 [i_0] [i_0]))) : 7))));
                            var_33 = 1;
                            var_34 *= ((((max(-5, 7))) ? ((196 * (7 - 1))) : (arr_26 [i_0] [i_0] [i_9] [i_0] [i_0] [i_0] [i_0])));
                        }
                        var_35 = var_13;
                    }
                    var_36 = ((~((((((~(arr_11 [i_0] [i_1] [i_1] [i_3])))) == (arr_1 [i_1]))))));
                    var_37 = (((((-(((arr_29 [i_0] [i_1] [i_1] [i_0] [i_0 - 1]) ? (arr_27 [i_0 - 1] [i_0 - 1] [i_1] [0] [i_0 - 1] [i_3]) : var_13))))) ? (59503 >= -14701) : (((arr_24 [i_3] [i_3] [i_1] [i_3] [i_3]) ? var_3 : (arr_33 [i_0] [i_1] [i_3] [i_1] [i_0] [i_1])))));
                }
            }
        }
    }
    #pragma endscop
}
