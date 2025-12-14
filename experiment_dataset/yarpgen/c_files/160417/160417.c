/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 16;i_2 += 1) /* same iter space */
                {
                    var_12 = (min(var_12, ((((((((-21257 ? 224 : (arr_5 [16] [0] [0] [i_0])))) || -47)) ? 1 : (var_0 >= 4294967290))))));
                    var_13 = ((~(arr_4 [i_0] [i_2] [i_2])));
                }
                for (int i_3 = 1; i_3 < 16;i_3 += 1) /* same iter space */
                {
                    var_14 = arr_8 [i_0] [i_0];
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 16;i_5 += 1)
                        {
                            {
                                var_15 -= ((!(((arr_9 [i_4] [i_4] [i_3 - 1] [i_5 - 1]) && (arr_9 [i_3] [i_1] [i_3 + 1] [i_5 - 3])))));
                                arr_16 [i_1] [i_1] = 32767;
                                arr_17 [i_1] = 5;
                                arr_18 [i_0] [i_0] [i_3] [i_3] [i_4] [i_1] = (((((((-10 ? (arr_5 [i_4] [i_1] [i_1] [i_0]) : (arr_3 [i_0] [i_1] [i_5])))) ? (arr_3 [i_4] [i_1] [i_1]) : (((var_2 ? (arr_11 [i_1]) : 1244698033))))) % (max(((1004638974 ? var_8 : (arr_4 [i_0] [i_0] [i_5]))), ((max((arr_8 [i_0] [i_5]), 1984)))))));
                                arr_19 [i_5] [i_1] [i_3] [i_1] [i_0] = (((((18446744073709551615 ? 63 : -1244698033))) ? ((-17744 * (min((arr_11 [i_1]), 1244698033)))) : (min((arr_6 [i_4] [i_5 - 2]), 2147483640))));
                            }
                        }
                    }
                    var_16 = ((~(0 > var_4)));
                }

                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    var_17 ^= (-44 != 436805093);
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            {
                                var_18 = (min(var_18, (((arr_2 [i_1] [i_8]) == -1244698033))));
                                var_19 += ((!((((max(113, 1))) || -1244698033))));
                            }
                        }
                    }
                    var_20 = (max(var_20, (arr_23 [0] [0])));
                }
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    var_21 = ((~((~(arr_11 [i_1])))));
                    var_22 = (max(var_22, ((((~1) == ((~((max(254, 1))))))))));
                    var_23 = 20;
                    var_24 -= min(((~((max(-20774, 118))))), (arr_0 [i_9]));
                }
                for (int i_10 = 1; i_10 < 16;i_10 += 1)
                {
                    arr_34 [i_1] [i_1] [i_10 + 1] [i_10 - 1] = (arr_8 [i_1] [i_1]);
                    arr_35 [i_0] [i_1] [i_0] [i_0] = (((((arr_33 [i_10] [i_10] [i_10 - 1] [i_10]) - 1244698026)) + ((min((arr_10 [i_0] [i_0] [i_1] [i_10 - 1]), (((arr_11 [i_1]) || (arr_4 [i_0] [i_1] [11]))))))));
                    arr_36 [i_0] [i_1] [i_1] [i_1] = 1;
                    var_25 = -2032164122;
                }
                arr_37 [i_1] [15] = var_10;
            }
        }
    }
    var_26 -= ((((max(-4, var_9)))) * (~var_5));
    #pragma endscop
}
