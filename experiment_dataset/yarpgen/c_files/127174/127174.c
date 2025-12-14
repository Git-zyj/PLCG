/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_17 = (max((min(3046835602313595868, (arr_13 [i_1 + 2] [i_1 - 1] [i_1 + 2] [i_1 - 1] [i_1 + 3] [i_1 - 1]))), (((60 ? 69 : (-32767 - 1))))));
                                var_18 = ((((((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_3 [i_1])))) ? (((((((arr_11 [i_0] [i_1 - 2] [i_2] [i_2] [i_4]) ? (arr_8 [i_0] [i_1] [i_2] [i_4]) : (arr_11 [i_0] [i_1] [i_2] [i_3] [i_4])))) ? (max((arr_1 [i_2]), 4294967287)) : (arr_0 [i_1 - 2])))) : (max((((arr_11 [i_4] [i_3] [i_2] [i_1] [i_0]) ? (arr_7 [i_4] [i_4] [i_4] [i_4] [i_1]) : (arr_3 [i_1]))), ((((arr_11 [i_4] [i_2] [i_2] [i_1 - 2] [i_0]) ? 3038537621925106471 : (arr_5 [19] [i_1]))))))));
                                arr_14 [i_0] [i_1] [i_0] [i_0] [i_0] = (min((((arr_1 [i_4]) ? (arr_3 [i_1]) : ((max(9, (arr_12 [20] [i_1] [i_2] [i_2])))))), (arr_2 [i_1])));
                            }
                        }
                    }
                    arr_15 [i_1] [i_1 + 3] [18] [i_1] = (max((((4294967291 || (arr_12 [i_2] [i_1] [i_2] [i_2])))), (min((min(4294967281, 388638015)), ((((arr_5 [i_1] [i_1]) ? (arr_2 [i_1]) : (arr_2 [i_1]))))))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 2; i_5 < 22;i_5 += 1)
    {
        var_19 = ((4294967287 ? 128 : 15));
        arr_18 [i_5] = (54 ? 65533 : 902499747);
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            {
                var_20 = (min(((99 ? (((((arr_23 [i_6] [i_7] [i_6]) || 17179860992)))) : (arr_5 [i_6] [i_6]))), (((((max(118, 4294967286))) || ((((arr_16 [i_6]) ? (arr_6 [i_6]) : (arr_4 [i_6] [i_6] [i_6])))))))));
                var_21 = (arr_16 [i_6]);
                var_22 = (((max((arr_1 [1]), 127))) ? ((13 ? (((((arr_4 [i_7] [i_6] [i_6]) > 6)))) : 9)) : -388638016);
                arr_25 [i_6] [i_7] = (((((((((arr_21 [i_7]) ? (arr_7 [i_6] [i_6] [12] [i_6] [i_6]) : (arr_9 [i_7] [i_6] [i_6] [i_6] [i_6])))) ? (((max((arr_10 [i_6] [i_6] [i_6] [i_6] [i_7]), (arr_11 [i_6] [i_7] [i_6] [i_7] [i_7]))))) : (((arr_19 [i_7]) ? 2366195570663196917 : (arr_11 [i_6] [i_6] [i_6] [12] [i_6])))))) ? 118 : ((-1796146772591741283 ? (((arr_4 [1] [i_7] [13]) ? (arr_11 [i_7] [i_7] [i_6] [i_6] [i_6]) : (arr_3 [i_6]))) : (((arr_13 [i_6] [i_6] [i_7] [i_6] [i_7] [i_7]) ? (arr_4 [i_7] [23] [i_7]) : (arr_8 [i_7] [i_6] [i_6] [i_6])))))));
            }
        }
    }
    #pragma endscop
}
