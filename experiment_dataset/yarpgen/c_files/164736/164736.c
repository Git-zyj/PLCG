/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_7 [i_0] = ((max(((max(106, 122)), (~-114)))));

                    for (int i_3 = 4; i_3 < 8;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_0] = (106 / (((!132) ? var_13 : 32744)));
                        var_16 = (132 ? -118 : ((((max((arr_8 [i_0]), var_1))) ? (((min(0, (arr_6 [i_0] [i_1] [i_3]))))) : var_4)));
                    }
                    for (int i_4 = 1; i_4 < 10;i_4 += 1)
                    {
                        arr_14 [i_0] [9] [i_2] [i_4] [i_2] [i_0] = (arr_12 [i_4] [i_4 - 1] [i_4] [i_4]);
                        arr_15 [i_0] [i_0] [i_4] [i_0] = (96 != 570504410);
                        arr_16 [i_0] [i_0] = ((((min((arr_0 [i_1 + 2] [i_1 + 3]), (arr_0 [i_1 + 2] [i_1 + 4])))) ? ((((~9223372036854775807) ? ((~(arr_8 [i_0]))) : (-570504411 & 75)))) : 274341036032));
                        arr_17 [i_0] [i_0] [9] [i_4 + 1] = (((1 | (~var_13))) <= (((var_4 ? ((0 << (((arr_13 [i_0] [i_0]) - 54829)))) : ((8388352 << (1150586681574635035 - 1150586681574635032)))))));
                    }
                }
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    var_17 = (((arr_10 [i_0]) ? 32767 : (28405 >= -60)));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_18 = ((((((-60 * var_10) ? var_6 : (106 / -24)))) ? 1 : (--3629826509)));
                                var_19 = 4160749568;
                            }
                        }
                    }
                    arr_26 [10] [10] [i_5] [i_0] = (-127 - 1);
                }
                arr_27 [i_0] = 4160749568;
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 9;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 9;i_10 += 1)
                        {
                            {
                                arr_36 [i_0] [i_9] [i_0] [i_1] [i_0] = -1976346647;
                                arr_37 [i_0] [i_1 + 4] [i_8] [i_8] [i_0] = ((+((((((arr_31 [i_0] [4] [i_0] [i_10]) ? var_10 : (arr_2 [i_0] [i_0])))) ? ((14514050285024935272 ^ (arr_23 [i_10] [i_9] [i_9 - 1] [i_8] [2] [i_0] [i_0]))) : -134217756))));
                            }
                        }
                    }
                }
                var_20 = (((~var_9) ? 94 : (!2167029632180527227)));
            }
        }
    }
    var_21 = var_15;
    #pragma endscop
}
