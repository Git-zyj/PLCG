/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((var_9 ? var_3 : var_14)) << ((((max(var_11, 2048))) - 15823)))));
    var_21 += var_18;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] = -0;
                arr_7 [i_0] [i_1] [i_0] = (((((((arr_4 [i_1]) ? 268435455 : 0)) % var_10)) >> 527765581332480));
                var_22 = ((((((arr_3 [i_0] [i_1 - 1]) ? (arr_3 [i_0] [i_1 - 1]) : 8903110712330225162))) ? ((-(arr_3 [i_0] [i_1 - 1]))) : (1032192 <= -1869305479)));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        arr_11 [i_2] = (((((var_11 ? (arr_5 [i_2] [i_2]) : (arr_1 [i_2] [i_2])))) || var_14));
        arr_12 [1] [i_2] = ((((3625160379 ? 13210390704127555663 : -32)) > (((((arr_0 [i_2]) > 15))))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_23 = ((((max(((2048488534 ^ (arr_4 [12]))), 783150856))) ? (max((max(0, 576460477425516544)), var_14)) : (-127 - 1)));
        arr_16 [i_3] = (arr_3 [20] [i_3]);
        var_24 += (((((max((arr_5 [9] [i_3]), var_7))) > 18014397435740160)));
        var_25 -= -25182;
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        var_26 *= (max((((((var_10 ? var_12 : (arr_18 [i_4] [i_4]))) == (arr_1 [i_4] [i_4])))), (((1038548275 + 1072466289) % (-2147483647 - 1)))));
        arr_19 [i_4] = 2198754820096;
        var_27 *= ((~(((var_7 <= -598070064) + 15))));
    }
    #pragma endscop
}
