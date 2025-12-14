/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += (((-65527 ? var_19 : var_1)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 9;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            var_21 = (max(var_21, (!14135)));
                            arr_12 [0] [i_1] [i_2] [i_3 - 2] [1] = (+((0 ? (arr_11 [i_4] [i_3] [i_0] [i_0]) : (arr_9 [i_0] [i_1] [10] [i_3]))));
                        }
                        var_22 = (min(var_22, (arr_9 [i_1 - 1] [i_2] [i_2] [i_1 + 1])));
                        arr_13 [i_0] [i_1] [i_2] [i_3] = (((arr_3 [i_1 + 1]) | ((127 >> (4294967295 - 4294967289)))));
                        var_23 -= ((((!(-127 - 1))) ? (arr_4 [i_3]) : var_5));
                    }
                }
            }
        }
        var_24 ^= (arr_7 [i_0] [i_0] [i_0] [i_0]);
        var_25 = ((-((239206475 << (32 - 9)))));
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 19;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 19;i_7 += 1)
            {
                {
                    var_26 += (((!8) ? (((!(-127 - 1)))) : 0));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            {
                                var_27 += -2739224540341995672;
                                arr_27 [i_5] = ((-901589249 ? (arr_21 [i_5 + 1] [i_7 - 1]) : ((0 ? 4294967293 : 113))));
                                arr_28 [i_5] [i_5 + 1] [i_5] [i_5] [i_5] = (11468204821182688523 + 1);
                                var_28 = ((-4 ? ((((arr_17 [i_5] [i_5]) < 65535))) : var_3));
                                arr_29 [i_5] [0] [i_9] = (arr_24 [i_5 - 2] [i_8] [i_5 - 2] [i_7 - 2] [i_5 - 2]);
                            }
                        }
                    }
                }
            }
        }
        var_29 -= var_7;
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                {
                    var_30 *= var_17;
                    arr_35 [i_5] [i_5] = (arr_21 [i_5 + 1] [i_5 - 2]);
                    arr_36 [i_5] [i_5] [i_5] = (arr_34 [i_5 + 1]);
                }
            }
        }
    }
    #pragma endscop
}
