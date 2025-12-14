/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_15));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_19 = var_9;
                        arr_8 [i_3] [i_2] [i_2] [10] [i_2] [10] = (((min((arr_4 [i_2] [19]), (arr_4 [i_2] [i_1]))) * ((((!(arr_6 [i_0] [i_0] [i_0] [i_2] [11])))))));
                    }
                }
            }
        }

        for (int i_4 = 2; i_4 < 23;i_4 += 1)
        {

            for (int i_5 = 3; i_5 < 23;i_5 += 1)
            {
                arr_13 [i_4] |= arr_10 [i_5 - 2] [i_4 + 1] [i_4 + 1];
                var_20 = ((~(((((var_12 | (arr_6 [i_0] [i_4] [i_5 - 2] [i_4] [i_5])))) ? (arr_10 [i_5 + 1] [i_5 - 3] [i_5 - 3]) : (~28261)))));
                var_21 += (((var_14 >> var_0) ? ((min(((-(arr_6 [i_4] [i_0] [12] [i_0] [i_0]))), 28261))) : (((arr_11 [i_0] [i_4 - 2] [i_4 - 2] [i_5 + 1]) ? (((~(-32767 - 1)))) : (arr_0 [i_5 - 2] [i_5 + 1])))));
            }

            for (int i_6 = 2; i_6 < 23;i_6 += 1) /* same iter space */
            {
                var_22 = (((((((((-32767 - 1) ? (-32767 - 1) : 246))) ? var_10 : ((var_3 ? (arr_4 [i_6] [i_4]) : (arr_15 [i_0] [i_0] [i_6 - 1] [20])))))) ? (-32767 - 1) : (min(9, (arr_4 [i_0] [i_4 - 2])))));
                var_23 = (arr_14 [i_0] [i_4 + 1] [9]);
            }
            for (int i_7 = 2; i_7 < 23;i_7 += 1) /* same iter space */
            {
                var_24 = var_9;
                arr_18 [i_0] [i_4] [18] [i_7] = ((((min((~var_3), var_15))) ? var_8 : var_15));
                var_25 = (min(var_25, ((-5913881987751241862 ? 0 : 281406257233920))));
            }
            for (int i_8 = 4; i_8 < 21;i_8 += 1)
            {
                var_26 = var_8;
                var_27 += (min((((arr_17 [i_8 + 3]) ? (arr_17 [i_8 + 3]) : var_16)), ((min((arr_17 [i_8 + 1]), (arr_17 [i_8 + 3]))))));
            }
            arr_21 [i_0] [i_4 + 1] [i_0] &= (((((~(arr_15 [i_4 - 1] [i_4 + 1] [i_4 - 2] [i_4 - 2])))) ? ((min(var_10, var_14))) : ((~(arr_15 [i_4 + 1] [i_4 - 2] [i_4 + 1] [i_4 - 2])))));
        }
    }
    var_28 = (min((min(((var_14 ? var_13 : var_0)), var_6)), var_8));
    var_29 = (min(var_29, ((~(min((((120 ? -28262 : 127))), var_13))))));
    #pragma endscop
}
