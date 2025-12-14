/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_10;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_20 = (arr_1 [i_0 + 1]);
            var_21 = (((arr_3 [i_1] [i_0 - 2]) ? (arr_3 [i_0] [i_1]) : (arr_3 [i_0] [i_0])));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        var_22 ^= (arr_1 [i_0 - 1]);
                        var_23 &= ((~(arr_1 [i_0 - 2])));
                        arr_13 [i_4] [i_2] [i_3] [i_2] [i_2] [i_0 + 2] = (arr_3 [i_0 - 1] [i_0 - 1]);
                    }
                }
            }
            var_24 = ((var_14 ? (arr_2 [i_0 - 2]) : var_10));

            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                var_25 = 55818;
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 18;i_7 += 1)
                    {
                        {
                            var_26 = (!0);
                            var_27 |= 14636480506654594504;
                        }
                    }
                }
            }
            for (int i_8 = 1; i_8 < 17;i_8 += 1)
            {
                var_28 |= (arr_0 [i_8 - 1]);
                var_29 = (arr_20 [i_2] [i_2]);
            }
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                var_30 += ((14266764303088662470 ? 83 : (arr_3 [i_0 + 2] [i_0 - 1])));
                arr_28 [i_0] [i_9] &= (~15414);
            }
            var_31 &= (arr_19 [i_2] [1] [i_2] [i_0]);
            arr_29 [i_2] [i_2] = var_16;
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            for (int i_11 = 3; i_11 < 18;i_11 += 1)
            {
                {
                    arr_35 [i_0 + 1] [i_10] [i_10] = (((arr_8 [i_0 + 2] [i_0 + 1] [i_0] [i_10]) ? (arr_7 [i_11] [i_11 + 1] [8] [i_11]) : (arr_8 [i_0 - 1] [i_0 - 2] [i_0] [i_0 - 2])));
                    var_32 = (arr_19 [i_0] [i_11 - 2] [i_11 - 3] [i_0 - 2]);
                    arr_36 [i_11] = ((-127 - 1) + (arr_23 [i_0] [i_0 + 1] [i_0]));
                }
            }
        }
        var_33 += ((6301 ? var_10 : (arr_6 [i_0 + 2])));
    }
    var_34 |= (min((!var_14), var_2));
    #pragma endscop
}
