/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        var_19 = 63;
                        arr_9 [i_0] [i_1] [i_1] [i_3] [i_3] = ((((((arr_4 [i_0] [i_1] [i_2] [i_3]) & (arr_4 [i_0] [i_0] [i_0] [i_0])))) ? ((var_6 ? (arr_4 [i_0] [i_1] [i_2] [i_0]) : var_0)) : (min(var_14, (arr_4 [i_0] [i_1] [i_2] [i_3])))));
                        var_20 = (-((((var_8 ? var_0 : var_2)) / ((4294967282 + (arr_3 [i_0] [i_0]))))));
                        arr_10 [i_2] [i_2] [i_2] [i_2] = 0;
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        arr_13 [i_0] [i_0] [i_4] [i_1] [i_2] [3] = var_11;

                        for (int i_5 = 1; i_5 < 16;i_5 += 1) /* same iter space */
                        {
                            arr_17 [i_0] [i_0] [i_1] [i_2] [i_4] [i_4] [i_5 + 3] = ((~(min(var_9, (max(var_11, (arr_5 [i_1] [i_4] [i_5])))))));
                            var_21 = ((((max((arr_11 [i_5 + 1] [i_4] [i_2] [i_4] [5]), (max(var_2, var_11))))) ? (min((arr_14 [i_0] [i_1] [i_2] [i_0] [i_5 + 3]), 1)) : ((((!(((7274 ? var_18 : 0)))))))));
                            var_22 = (((((~var_11) ^ (((arr_6 [i_0] [i_1] [7] [7]) & var_10)))) ^ 49845));
                        }
                        for (int i_6 = 1; i_6 < 16;i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_4] [i_4] = ((((max(65532, (arr_14 [i_1] [i_6 + 1] [i_6 + 2] [i_6 + 1] [i_6 - 1])))) ^ ((var_15 ? (arr_0 [i_6 + 1]) : (arr_14 [i_6 + 3] [i_6 - 1] [i_6 + 1] [i_6] [i_6 + 2])))));
                            var_23 = ((!((((arr_16 [i_0] [i_1] [i_2] [i_4] [3]) - 4294967288)))));
                        }
                        for (int i_7 = 1; i_7 < 16;i_7 += 1) /* same iter space */
                        {
                            var_24 -= (max((min(((1 ? (arr_12 [i_0] [i_1] [i_2] [i_0]) : var_18)), ((max(1, (arr_8 [i_2] [i_1])))))), ((((arr_8 [i_0] [i_7 + 1]) ? 49844 : 49844)))));
                            arr_26 [i_0] [i_0] [i_4] [i_0] [1] [i_0] [i_0] = ((~((1 ? 24471 : ((max(15672, var_17)))))));
                            arr_27 [i_0] [i_4] [i_2] [i_0] [i_7] = (((max(var_11, var_1)) | ((((arr_25 [i_0] [12] [i_2] [i_7 + 3] [i_7 + 3] [i_7] [i_7 + 3]) - (arr_25 [i_7] [i_7 + 2] [i_7] [i_7 + 3] [i_7 + 3] [i_7 + 1] [i_7 + 3]))))));
                        }
                        var_25 = (max((((!(~49845)))), (max((arr_19 [i_0] [i_1] [i_4] [i_4] [0]), (((arr_5 [i_0] [i_0] [i_0]) - 15688))))));
                        var_26 = 12720466661832705900;
                    }
                    for (int i_8 = 1; i_8 < 16;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_27 ^= var_5;
                            arr_33 [i_0] [i_1] [i_2] [i_8] [i_8] [i_9] = (15690 < 1);
                            var_28 = (min(var_28, var_5));
                            arr_34 [4] [i_2] [4] [i_0] [i_9] |= (((arr_2 [i_8 + 3] [i_8 + 3]) ? var_17 : (arr_2 [i_8 + 1] [i_8 + 2])));
                        }
                        arr_35 [i_0] [i_1] [i_8] [i_8 - 1] = ((var_9 - (((arr_14 [i_8 + 1] [i_8 + 3] [i_8 + 3] [i_8 + 1] [i_8 - 1]) - (arr_20 [i_8 + 3] [i_8 + 2] [i_8 + 2] [i_8 + 3] [i_8 + 2])))));
                        var_29 = (min(((min((var_10 > var_4), (min(1, (arr_21 [i_2] [i_1] [1] [i_1] [i_1] [i_8])))))), ((var_7 - (!1)))));
                        arr_36 [i_0] [i_1] [i_0] [i_8] = var_2;
                    }
                    arr_37 [i_0] [i_1] [i_2] = (((((((((arr_32 [i_0] [i_0] [i_1] [i_2] [i_2] [i_2]) & 1))) ? (~161060253) : 1024))) ? var_8 : (min(((min(var_13, (arr_7 [i_0])))), (min(9223372036854775806, var_9))))));
                    arr_38 [i_1] = (((((arr_19 [i_0] [i_1] [i_1] [i_0] [i_0]) ? (arr_7 [i_1]) : 15692)) & var_13));
                }
            }
        }
    }
    var_30 = ((((max(-var_10, var_12))) ? (((~var_6) ? var_1 : (((var_12 ? var_10 : 32764))))) : var_3));
    var_31 = ((((max((var_14 * var_3), (min(-1096880152, var_4))))) ? (var_3 / var_1) : ((max(var_13, ((1 ? var_2 : 65512)))))));
    #pragma endscop
}
