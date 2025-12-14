/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 = (((arr_0 [i_0]) ? 0 : 34701));
        arr_3 [i_0] [i_0] = 43103;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        var_14 = (~var_12);

        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            var_15 = (((arr_5 [i_2]) ? ((var_9 - (arr_6 [i_1] [i_2] [i_2]))) : var_12));

            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                var_16 ^= var_2;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        {
                            var_17 = arr_5 [i_1];
                            var_18 = (min(var_18, var_6));
                            arr_17 [i_1] [i_2 + 1] [i_2] [i_2 + 1] [i_3 + 2] [i_4] [i_5] = ((var_9 ? (((arr_15 [i_3] [i_2] [i_3] [i_2] [i_5]) ? var_6 : var_12)) : (arr_4 [i_3 + 3])));
                        }
                    }
                }
                var_19 = (arr_7 [i_1] [i_3]);
            }
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    {
                        var_20 = (((22433 ? var_7 : var_6)));
                        var_21 = (((((arr_20 [i_1]) ? (arr_7 [i_7] [i_6]) : 805306368)) / (arr_5 [i_1])));
                        var_22 = (arr_9 [i_1] [i_1] [i_2] [i_7]);
                        arr_23 [i_1] [i_2 - 1] [i_2] [i_7] = ((((3472798617527838414 ? (arr_12 [i_2] [i_6] [i_2] [i_1] [i_2] [i_2]) : 18446744072904245248))) ? ((var_10 ? (arr_8 [i_1] [i_7] [i_6]) : (arr_18 [i_7] [i_6] [i_1]))) : ((((arr_11 [i_1] [i_2] [i_1]) ? var_8 : var_4))));

                        for (int i_8 = 1; i_8 < 13;i_8 += 1)
                        {
                            var_23 ^= 23913;
                            var_24 = ((0 ? 1 : 982039030));
                            var_25 = (((((4194304 ? 48182 : -13608))) ? ((var_12 ? var_9 : (arr_5 [i_1 - 2]))) : ((((arr_9 [i_1] [i_1] [i_2] [i_2]) == 4227858432)))));
                            var_26 = (((arr_14 [i_6]) && (~50)));
                        }
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            arr_28 [i_1 - 2] [i_2 - 1] [i_6] [i_2] [i_9] [i_9] = ((5 ? (805306368 & 16019) : (((1 ? var_9 : 3312928265)))));
                            var_27 = ((((((arr_16 [i_2] [i_2]) % 31719))) ? (((arr_6 [i_1] [i_6] [i_1]) ? var_4 : var_7)) : ((3312928265 ? var_0 : (arr_21 [i_1 - 2] [i_1 - 2] [i_2] [i_6] [i_7] [i_9])))));
                            var_28 = (i_2 % 2 == 0) ? (((((((arr_24 [i_1] [i_2 + 1] [i_6] [i_7] [i_9] [i_9]) == var_0))) >> (((arr_16 [i_2] [i_2 - 1]) - 2587088202113705626))))) : (((((((arr_24 [i_1] [i_2 + 1] [i_6] [i_7] [i_9] [i_9]) == var_0))) >> (((((arr_16 [i_2] [i_2 - 1]) - 2587088202113705626)) - 17272972198260327873)))));
                            var_29 = (max(var_29, 48182));
                        }
                    }
                }
            }
            var_30 = ((~(arr_22 [i_1])));
        }
        var_31 = ((((arr_20 [i_1]) ? var_12 : -1)));
    }
    var_32 = ((max(((min(var_9, 1))), var_5)));
    #pragma endscop
}
