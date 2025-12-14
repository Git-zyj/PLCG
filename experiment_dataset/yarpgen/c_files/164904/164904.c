/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_11 = (((arr_5 [i_1] [i_1] [i_1]) | (((18237 ? -18253 : (arr_8 [i_1]))))));

                        for (int i_4 = 1; i_4 < 24;i_4 += 1) /* same iter space */
                        {
                            arr_15 [i_0] [i_0] [9] [i_1] [i_3] [i_4 + 1] = -18255;
                            var_12 *= (((arr_14 [0] [20] [i_4 + 1] [i_2] [0]) ? var_6 : (arr_11 [7] [i_1] [i_4 + 1] [i_3] [i_4] [i_1])));
                            var_13 = (max(var_13, ((((arr_11 [i_4] [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4] [i_4 + 1]) ? 18249 : (arr_11 [i_4 + 1] [i_4] [i_4 - 1] [i_4] [i_4] [i_4]))))));
                        }
                        for (int i_5 = 1; i_5 < 24;i_5 += 1) /* same iter space */
                        {
                            arr_19 [i_1] [17] [i_2] [i_3] [i_5 - 1] = ((~(arr_14 [i_0] [i_1] [i_2] [i_1] [i_5 + 1])));
                            arr_20 [i_1] [i_1] = 18244;
                        }
                        for (int i_6 = 1; i_6 < 24;i_6 += 1) /* same iter space */
                        {
                            var_14 *= ((224 && ((((arr_14 [i_6] [i_6] [i_2] [i_3] [i_2]) * (arr_3 [i_0] [i_1] [i_3]))))));
                            arr_23 [i_1] [i_1] [i_2] [i_2] [i_6 - 1] [i_1] = ((~(arr_7 [i_0] [i_0] [i_6 - 1])));
                        }
                        for (int i_7 = 1; i_7 < 24;i_7 += 1) /* same iter space */
                        {
                            var_15 *= (((arr_27 [i_0] [i_0] [i_2] [i_1] [i_7 + 1] [i_0]) || 17293822569102704640));
                            var_16 += ((-(arr_12 [i_7 - 1] [i_7 + 1] [i_7] [10] [i_7] [i_7 + 1] [i_7 + 1])));
                            var_17 += (3783075374 + (var_1 ^ -18238));
                            var_18 = (arr_4 [i_0]);
                        }
                    }
                    var_19 = ((-25285 ? (arr_2 [i_2]) : (~18237)));
                }
                for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
                {
                    var_20 = ((var_6 ? ((((arr_27 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1]) && -18228))) : ((((arr_12 [i_0] [i_0] [i_1] [i_1] [i_1] [i_8] [i_8]) > 18227)))));
                    var_21 = (((arr_0 [i_8] [i_1]) ? (arr_24 [i_0] [i_0] [i_0] [i_1] [i_1] [i_8] [i_8]) : ((min(34016, (arr_10 [i_1] [i_1] [i_8] [i_8]))))));
                    var_22 = (max(var_22, 12266688385889989734));
                }
                for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
                {
                    arr_32 [i_1] [i_1] [i_9] = (arr_12 [i_0] [i_1] [i_1] [i_9] [i_9] [i_9] [i_9]);
                    var_23 = (max(var_23, ((((((1351598626 ? (arr_27 [6] [i_9] [i_1] [6] [i_0] [i_9]) : -22431))) ? ((-(~98))) : (arr_31 [i_9] [i_9] [i_9]))))));
                }
                var_24 = (((arr_6 [i_0] [9] [i_1]) ? ((-(arr_7 [i_0] [i_0] [i_0]))) : (max((arr_6 [i_0] [i_0] [i_1]), (arr_7 [i_0] [i_1] [i_1])))));
                var_25 = (arr_24 [i_1] [i_1] [i_1] [i_1] [1] [i_1] [i_1]);
                var_26 = (-22443 / var_0);
            }
        }
    }
    var_27 = (max(var_27, (25284 & 34007)));
    var_28 *= var_1;
    var_29 = (min(var_29, (((((-18245 ? var_10 : var_10)) & ((((min(25284, -18236))) + var_3)))))));
    #pragma endscop
}
