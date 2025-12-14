/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_19;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_5 [i_1] [i_1] = ((!((((-8388452108246598558 + 9223372036854775807) << (9223372036854775790 - 9223372036854775790))))));
            var_21 = (((arr_1 [i_1] [i_0]) ? (arr_2 [i_0] [10]) : 32767));
        }
        var_22 *= var_8;
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            {
                arr_10 [i_3] [i_3] = var_0;

                for (int i_4 = 2; i_4 < 20;i_4 += 1)
                {
                    arr_13 [i_3] [13] [i_3] = (((49152 ? 7620997407388343551 : 1)));
                    var_23 = ((~(arr_11 [i_3] [i_3] [i_3])));
                    var_24 = var_5;
                    var_25 = ((!(((5311 ? var_9 : var_13)))));
                }
                var_26 ^= (max((max(0, 55244)), -1921207433767231737));
                var_27 = (max(var_27, ((((((65509 + 1) && (!3))) ? (arr_1 [16] [16]) : (max((arr_2 [i_3 - 1] [i_3]), ((27334 ? (arr_3 [i_2]) : (-32767 - 1))))))))));
                arr_14 [i_3] = (arr_11 [i_3] [i_3 - 1] [17]);
            }
        }
    }
    var_28 = -8192;
    #pragma endscop
}
