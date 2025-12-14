/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= ((max(((1 ? 0 : 18446744073709551606)), (var_2 < 18446744073709551606))));
    var_20 = ((var_14 ? (min((((40 ? -992364115 : 215))), ((1 ? var_17 : var_16)))) : ((((217 || (1 / 3266821350)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_21 = (min(var_21, 1));

                            for (int i_4 = 0; i_4 < 21;i_4 += 1)
                            {
                                var_22 &= ((-(arr_7 [i_0] [i_0] [i_0 - 3])));
                                arr_13 [i_0] [i_1] [i_3] [i_4] = -33;
                                arr_14 [i_4] [i_3] [i_3 + 1] [i_1] [i_2] [i_1] [i_0] = ((var_14 ? ((max(var_9, 40))) : ((max((max((arr_0 [i_2]), 0)), 22)))));
                                var_23 = (arr_12 [i_4] [i_2] [i_2] [i_2] [14]);
                            }
                            for (int i_5 = 2; i_5 < 20;i_5 += 1)
                            {
                                var_24 = (~var_1);
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_0 - 2] [i_0] = ((((((arr_16 [i_5] [i_2] [i_3] [i_2] [i_1] [i_0]) ? 4542525607209691726 : (arr_11 [i_0] [i_1] [i_2] [i_3] [i_3] [i_5])))) ? 5050611769325452098 : 1688422396));
                            }
                            for (int i_6 = 1; i_6 < 20;i_6 += 1) /* same iter space */
                            {
                                var_25 = (min(var_25, ((((4 ? var_14 : 163))))));
                                arr_22 [i_0] [i_0] [i_0] [i_6] [i_0] = ((((((var_8 && (arr_18 [i_0] [i_1] [i_2] [i_3] [i_6]))) && (((24997 ? -33 : var_3))))) ? (!11215871706034063006) : 8128));
                                arr_23 [i_6] [i_2] [i_6] = 1;
                                var_26 *= (((((!var_0) ? var_6 : (((47561 ? -1290 : var_8))))) <= ((((((1175741623 ? 55 : -455999614))) ? 11811 : var_11)))));
                            }
                            for (int i_7 = 1; i_7 < 20;i_7 += 1) /* same iter space */
                            {
                                arr_27 [i_7] [i_3] [10] [i_1] [i_7] = 5133922943067197659;
                                arr_28 [i_7] [i_7] = var_13;
                                var_27 = 13904218466499859872;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_8 = 3; i_8 < 20;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            {
                                var_28 = (min((((8284677474669615476 ? -3998 : 455999640))), (max((var_17 ^ var_7), (((var_8 ? 1 : var_10)))))));
                                arr_36 [i_8] [i_9] = ((arr_35 [i_8 - 2] [i_0 - 2] [i_0] [15] [i_0 - 3]) ? (((-38 && var_1) ? ((-19884 ? 1 : -344452988892005989)) : (((1028145945 ? 1028145938 : 50236))))) : (!1));
                            }
                        }
                    }
                }
                var_29 = (max(var_29, (((!(((33 - ((var_12 ? var_6 : var_17))))))))));
            }
        }
    }
    var_30 = (max(var_30, var_18));
    #pragma endscop
}
