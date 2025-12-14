/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = (((max(32767, (arr_3 [i_1])))));

                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    var_16 += (((((arr_5 [i_2 + 1] [6] [i_0 + 1]) ? 493903674 : (((arr_3 [0]) & var_14)))) & ((1259763390 ? -32767 : ((-32768 ? -32788 : 0))))));
                    arr_9 [10] [2] [2] |= (((((min(-32768, -30679) <= 11986)))));
                    arr_10 [i_1] = var_12;
                    var_17 = (arr_5 [i_0] [i_1] [i_0]);
                }
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    var_18 -= (!9329);
                    var_19 += ((var_9 || ((((var_4 || 32767) ? var_14 : (max(var_1, (arr_4 [i_0 + 2] [i_0 + 2]))))))));
                }
                /* vectorizable */
                for (int i_4 = 2; i_4 < 14;i_4 += 1)
                {
                    arr_15 [i_0] [1] [i_1] [i_1] = (arr_8 [i_1]);

                    for (int i_5 = 1; i_5 < 14;i_5 += 1)
                    {
                        var_20 = 247055539;
                        var_21 = -9888168267986263153;
                    }
                    var_22 = ((38943 ? (arr_3 [i_4 + 2]) : var_11));
                }
                var_23 ^= (((~var_0) & (((min(4, (arr_7 [0] [4] [0])))))));
                var_24 = ((!(10532 != 127)));
                var_25 = 252;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        for (int i_7 = 3; i_7 < 19;i_7 += 1)
        {
            {
                arr_25 [11] [i_6] = 32767;
                arr_26 [1] [i_6] [i_6] = ((((arr_21 [8] [i_6]) ? 0 : (max(var_3, var_11)))));
                var_26 = 32746;
            }
        }
    }
    #pragma endscop
}
