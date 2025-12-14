/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_10 += ((0 ? 0 : 0));
        var_11 -= -1;
    }

    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        var_12 = (min(var_12, ((max(1, 865603170)))));
        var_13 = (arr_4 [i_1 + 1] [i_1 + 1]);
        var_14 = 0;

        for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    {
                        var_15 = (min((((~3417399895) | (arr_10 [i_1 + 1] [i_1] [i_3 + 3] [i_3 + 3]))), 7529349278456911962));
                        var_16 = 9360110208043622192;
                        var_17 = (min(var_17, ((((min(254, ((-(arr_9 [15] [i_4] [1] [18]))))) | 106)))));
                        var_18 -= ((2896467407683786046 < (max(7529349278456911973, 55627))));
                        var_19 += (max(45, 25271));
                    }
                }
            }
            var_20 = (min(var_20, ((((~10917394795252639655) ? (arr_4 [2] [6]) : (min(((9086633865665929407 % (arr_5 [11]))), (arr_5 [i_1]))))))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
        {
            var_21 = (((arr_11 [i_1 - 2] [i_1 - 1] [i_1 - 2] [i_5] [16]) + (arr_12 [i_1] [i_1 + 1] [i_1] [i_1])));
            var_22 = (arr_12 [4] [8] [i_5] [i_1]);
            var_23 += (arr_9 [i_1 - 2] [i_5] [5] [i_5]);
        }
    }
    var_24 = var_2;
    #pragma endscop
}
