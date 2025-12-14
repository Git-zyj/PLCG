/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = ((var_12 ? var_6 : (((((var_16 | var_1) < (!15)))))));
        var_18 = (min(4294967280, 1));
        var_19 |= ((!((((var_2 ? var_13 : var_5))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_20 = (arr_1 [i_3]);
                        arr_11 [i_1] = (arr_5 [i_3]);
                        var_21 = (((((var_2 * var_1) ? (arr_7 [i_0] [i_0] [i_2 - 1]) : ((((arr_0 [i_0] [i_2]) ? var_4 : (arr_10 [i_2 + 2])))))) & (((((max(var_7, var_4))) ? (var_3 != var_14) : (((var_3 || (arr_9 [i_0] [i_0] [i_0])))))))));
                        var_22 = (min(((var_11 ? (((arr_0 [i_0] [i_0]) ^ var_3)) : var_8)), ((((arr_5 [i_0]) >> (var_12 - 158949800))))));
                    }
                }
            }
        }
    }
    for (int i_4 = 2; i_4 < 9;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    {
                        var_23 += (arr_21 [i_4 - 1] [i_4] [i_4 - 1] [i_6] [i_7]);
                        var_24 = var_7;
                    }
                }
            }
        }
        var_25 = (arr_16 [i_4] [i_4 + 3]);

        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            arr_27 [i_4] [i_4] = (((!var_11) && ((!(var_14 || var_14)))));

            for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
            {
                var_26 -= (arr_15 [i_9]);
                arr_30 [i_4] [i_4] [i_9] [i_4] = ((var_0 <= (((!(arr_2 [i_4 + 2] [i_4 + 1]))))));
            }
            for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
            {
                arr_33 [i_4] [i_4] = (i_4 % 2 == 0) ? ((max((((max(var_4, (arr_21 [i_4] [i_4 - 2] [i_8] [i_4] [i_8]))) << (((arr_12 [i_4]) - 2733841519244342367)))), ((((((arr_26 [i_4 + 1]) || var_10)) ? (arr_13 [i_4] [i_4]) : ((((arr_24 [i_4 + 3] [i_4] [i_4]) > var_11))))))))) : ((max((((max(var_4, (arr_21 [i_4] [i_4 - 2] [i_8] [i_4] [i_8]))) << (((((arr_12 [i_4]) - 2733841519244342367)) - 2061076969726169368)))), ((((((arr_26 [i_4 + 1]) || var_10)) ? (arr_13 [i_4] [i_4]) : ((((arr_24 [i_4 + 3] [i_4] [i_4]) > var_11)))))))));
                arr_34 [i_8] [i_4] [i_8] = (arr_2 [i_4 + 3] [i_8]);
            }
        }
    }
    var_27 ^= var_13;
    #pragma endscop
}
