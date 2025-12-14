/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_0] [i_0] = ((!((max((arr_6 [i_1] [i_1]), (arr_4 [i_0]))))));

                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_17 = 49;
                                var_18 = ((((((((-1007862032 ? -13240 : 65535))) ^ var_2))) & var_6));
                                arr_19 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3] = 15;
                                var_19 = 1573725353;
                            }
                        }
                    }
                    var_20 = var_9;
                }
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                arr_27 [i_0] [i_0] [i_0] [i_1] [i_5] [i_6] [i_0] = ((-68 < ((-((67 ? 25071 : (arr_7 [9])))))));
                                arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] = (6364340956193051530 & 2721241946);
                                var_21 = ((((((((arr_11 [i_0] [i_0] [i_0]) % 949)) * 0))) ? 949 : var_7));
                            }
                        }
                    }
                    var_22 = ((-(((arr_6 [i_0] [i_0]) / (arr_6 [i_0] [i_0])))));
                    var_23 += (((!((((arr_24 [14] [i_1] [i_5]) ? var_2 : 112253889708622989))))));
                    arr_29 [i_1] [i_0] [16] [i_1] = (arr_21 [i_0] [i_1] [i_5] [4]);

                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        arr_34 [i_8] &= ((((min((arr_16 [i_0] [i_8] [i_5] [i_8]), 8796093022176))) ? 949 : (18446735277616529439 * var_3)));
                        var_24 = ((((var_5 || (arr_33 [i_0] [i_1] [i_5] [i_8] [i_1] [i_1]))) ? (~var_6) : ((((((~8469550123035527871) + 9223372036854775807)) << (((max(4198526857, var_2)) - 4198526857)))))));
                        var_25 = ((((min(65535, (arr_31 [i_0] [i_0]))) % -var_4)) % var_3);
                    }
                }
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    var_26 = arr_6 [i_1] [i_1];
                    var_27 = (((arr_14 [i_9] [i_1] [i_1] [12] [2]) * ((((!(arr_3 [i_1])))))));
                    arr_37 [i_0] [i_0] [i_9] = (arr_6 [i_0] [i_9]);
                }
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    var_28 = 1;
                    var_29 = (((((!var_8) + 26)) == (min(var_12, 134217727))));
                }
                var_30 = ((!(((~(((-32767 - 1) ? 1 : var_11)))))));
            }
        }
    }

    for (int i_11 = 0; i_11 < 10;i_11 += 1)
    {
        arr_42 [i_11] = (arr_11 [i_11] [i_11] [i_11]);
        var_31 ^= ((35 >> ((((arr_4 [i_11]) != (arr_4 [i_11]))))));
        arr_43 [i_11] = (arr_12 [i_11] [i_11] [i_11]);
    }
    #pragma endscop
}
