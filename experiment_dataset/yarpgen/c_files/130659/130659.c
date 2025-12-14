/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((max(var_9, 2693074890)) & 18446744073709551605)) - (((min(var_3, 18446744073709551615))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_13 = -1148401608;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 = 1;
                                arr_15 [i_0] [i_2] [i_2] = -1;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_15 = (((arr_19 [i_0] [i_0] [i_2] [i_0] [i_0 - 2] [i_0] [i_0 - 2]) ? ((var_4 ? var_3 : (arr_2 [i_0] [i_5]))) : (arr_16 [i_0] [i_2] [i_2])));
                                var_16 = var_9;
                                var_17 = (arr_17 [i_0]);
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    var_18 = ((-(arr_13 [i_7] [i_7])));
                    arr_23 [i_0] [i_1] [i_7] [i_7] = (((((arr_11 [i_0] [i_0]) <= 64323)) ? (arr_9 [i_7] [i_1]) : (((arr_13 [i_0] [i_7]) - (arr_11 [i_0] [i_0])))));
                }
                arr_24 [i_0] [i_0] [i_1] = var_8;
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        {
                            arr_32 [i_0] [i_1] [i_8] [i_9] = (arr_4 [i_0] [i_1] [i_9]);
                            var_19 = (((((~((-117 ? -2147483637 : var_11))))) ? (1 >> 1) : ((((((min(1, var_3)))) > (var_2 % 9223372036854775807))))));
                            arr_33 [i_1] [i_0] [i_8] [i_9] [i_0] [i_8] = ((max((arr_19 [i_0 + 1] [i_1] [i_8] [i_9] [i_9] [i_9] [i_1]), ((min(-121, (arr_11 [i_0] [i_9])))))) != ((((!((((-2147483647 - 1) ? (arr_28 [i_8]) : (arr_22 [i_0] [i_1] [i_8] [i_9])))))))));
                        }
                    }
                }
            }
        }
    }
    var_20 = ((-(~1)));
    #pragma endscop
}
