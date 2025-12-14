/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_16 = (((((((((arr_3 [0] [i_1] [i_0]) == var_7)))) >= ((-17 ? 3679138623 : 2073921646)))) ? ((((((max(0, (-127 - 1)))) >= (-14 >= 615828653))))) : (((arr_1 [1]) - (180 ^ 75)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_0] = (~var_6);
                            var_17 = ((((-9223372036854775807 - 1) ? (~3707161797977556706) : (min(65535, var_3)))));
                            arr_11 [2] [i_1] [i_1] [2] [i_0] [i_1] = -22;
                            var_18 |= 21320;
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_19 |= (23156 < 13493);
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                {

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        arr_21 [i_4] [16] [i_4] [i_4] [i_4] [12] = ((10924 <= (((-45 <= (arr_12 [i_4]))))));
                        var_20 = 4294967277;
                    }
                    for (int i_8 = 2; i_8 < 13;i_8 += 1)
                    {
                        arr_26 [i_4] [i_5] [i_5] [i_5] [4] [0] = ((31 % (var_11 ^ 76)));

                        for (int i_9 = 2; i_9 < 16;i_9 += 1)
                        {
                            var_21 = (36118 ? 2247459727435699496 : 110);
                            arr_29 [i_4] [i_4] [i_8] [i_5] [i_8] [i_5] [i_9] = 936657388;
                            var_22 = (((((arr_27 [1] [i_5] [i_5] [i_5] [i_5] [12] [i_5]) >> (var_3 - 131))) >= (((0 >> (-60 + 70))))));
                        }
                    }
                    arr_30 [i_4] [12] [i_4] [i_4] = (1 ^ var_12);
                }
            }
        }
    }
    var_23 = (!1);
    #pragma endscop
}
