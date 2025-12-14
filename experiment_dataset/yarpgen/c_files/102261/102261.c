/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_5 ? (((var_13 ? var_10 : -1))) : ((var_14 << ((((18446744073709551606 ? var_2 : 7)) - 7098060771255675881))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_12 [4] [4] [0] [i_3 - 2] [i_4] [i_4] [i_4] = 1344309499;
                                arr_13 [i_0] [15] [i_2 - 1] [i_3 - 1] [i_4] = (((arr_9 [i_3] [i_2] [i_0] [i_0]) ? (arr_2 [i_0] [i_2] [i_0]) : ((~(max(-24, 7))))));
                                var_16 = 0;
                                var_17 ^= (arr_9 [6] [i_3 - 2] [i_2] [i_0]);
                            }
                        }
                    }
                    var_18 &= 0;

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {

                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            arr_20 [i_0] [i_5] = ((((!(arr_16 [i_6 + 1] [i_5] [i_2 - 2] [i_1] [i_0]))) ? (arr_7 [13] [13] [i_5] [i_6]) : (((arr_9 [5] [18] [i_2] [i_1]) / var_14))));
                            var_19 -= (((var_13 <= (arr_1 [i_0] [i_1]))));
                            var_20 = ((((arr_1 [i_1] [i_2 + 1]) ? (arr_3 [i_5] [i_2] [i_1]) : (arr_3 [i_0] [i_0] [i_0]))));
                            var_21 += (((arr_9 [i_1] [i_2 - 1] [1] [i_5 + 1]) ? (((15728640 ? var_11 : 80))) : -9223372036854775801));
                        }
                        var_22 = ((1 ? (((var_2 ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : (arr_5 [i_2] [i_2] [i_2])))) : (~var_8)));

                        for (int i_7 = 1; i_7 < 16;i_7 += 1)
                        {
                            var_23 = (arr_9 [i_7] [9] [i_1] [i_0]);
                            var_24 -= var_0;
                        }
                    }
                    for (int i_8 = 3; i_8 < 19;i_8 += 1)
                    {
                        var_25 = ((((~(((arr_18 [5] [i_8 - 1] [i_2] [i_8]) ? 18138477634099157201 : (arr_16 [i_0] [i_0] [i_1] [i_8] [i_8]))))) << ((((((arr_26 [i_8] [i_1] [i_1] [i_1]) ? 308266439610394415 : var_2))) - 308266439610394380))));
                        var_26 = (0 ? ((547 * ((176 ? 17121906171424553959 : 7)))) : ((((((((arr_6 [i_0] [i_0] [i_0] [i_0]) ? var_11 : (arr_2 [i_2 - 3] [12] [i_1])))) != ((-(arr_4 [i_0]))))))));
                        var_27 = (arr_18 [i_0] [i_1] [i_2] [i_8]);
                        var_28 = ((((((70 + 196) ? (((arr_5 [3] [i_1] [i_1]) ? (arr_26 [i_8] [i_1] [i_2] [i_8]) : (arr_8 [i_0] [i_1] [17] [i_2 - 4] [i_2] [i_8]))) : 17624975732402042924))) ? (((arr_27 [i_2] [i_1] [i_0] [i_8] [i_0] [i_2]) ? (arr_1 [i_2 + 1] [i_1]) : (((arr_6 [i_0] [i_1] [i_0] [i_0]) ? (arr_27 [i_0] [i_1] [i_1] [i_2] [i_2] [i_8]) : (arr_22 [i_1] [i_1] [i_8] [i_8] [i_8]))))) : (((((arr_2 [16] [i_8] [i_2]) ? 1 : var_13))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
