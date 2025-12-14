/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;

    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    {
                        var_13 = (max((min(var_7, var_6)), (((((min(var_7, (arr_9 [i_3 + 2] [i_2] [i_1] [i_0])))) ? (arr_6 [i_3 - 1]) : ((var_2 ? 501985640 : var_7)))))));
                        arr_12 [i_3] [i_3] = ((max(var_4, (!var_2))));
                    }
                }
            }
        }

        for (int i_4 = 1; i_4 < 11;i_4 += 1)
        {
            var_14 = (arr_6 [i_0]);
            var_15 *= (arr_5 [i_4] [i_0]);
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        {
                            var_16 += var_4;
                            arr_21 [i_4] [i_4] = (((((arr_14 [i_4]) ^ (arr_14 [i_4]))) << var_8));
                        }
                    }
                }
            }
            var_17 = (min(var_17, ((((-((-(arr_20 [i_0] [i_0 + 4] [i_0] [i_0 + 4] [i_0])))))))));
            var_18 -= var_2;
        }
        arr_22 [i_0 - 1] = (~1);
        arr_23 [i_0] = ((!((min((arr_1 [i_0 - 3]), var_7)))));
    }
    for (int i_8 = 3; i_8 < 9;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 2; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                {
                    var_19 = (-((1 ? (arr_30 [i_8 - 3] [i_9] [i_10] [i_9 + 2]) : (arr_30 [i_8 + 3] [i_10] [i_9 - 1] [i_8 + 3]))));
                    arr_31 [i_10] [i_9] [i_8] [i_8] = (((((!(max(1, 1))))) != (35517 ^ 0)));
                }
            }
        }
        arr_32 [i_8] = ((~(max((arr_30 [i_8] [i_8] [i_8] [i_8]), ((var_4 ? var_1 : (arr_25 [i_8])))))));
        var_20 ^= (arr_25 [i_8]);
    }
    var_21 = var_7;
    var_22 ^= ((~(max(var_5, (~var_11)))));
    #pragma endscop
}
