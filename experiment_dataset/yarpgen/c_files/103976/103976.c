/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_12 [i_3] [i_2] [i_2] [i_2] [0] [i_2] [i_2] = ((-((min(74, 65523)))));
                                var_10 = ((0 % (arr_5 [i_0] [i_0] [i_0] [i_4])));
                                var_11 = (((((((63050394783186944 ? (arr_1 [i_1]) : var_4))) ? (((arr_5 [i_0] [19] [i_0] [19]) ? 120 : 120)) : ((var_1 ? 13 : (arr_11 [i_3] [i_0]))))) != (((arr_7 [i_4 - 1] [i_4] [i_4] [i_4 - 2] [18] [16]) ? (((arr_2 [i_4]) ? 0 : 19214)) : var_3))));
                                arr_13 [15] [i_0] [i_0] [i_0] [i_0] [i_0] [i_3] = (min((((arr_10 [i_0] [i_1] [i_3] [i_3] [i_3]) ? (((-13 ? (arr_8 [i_0] [i_0]) : (arr_6 [i_0] [i_1])))) : (min((arr_9 [i_0] [i_1] [i_2] [i_4]), var_5)))), ((max(var_7, (~var_3))))));
                            }
                        }
                    }
                }
                var_12 = -48;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 24;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        {
                            arr_24 [i_7] [i_5] = (((arr_19 [i_5] [i_5]) * ((max(0, (arr_22 [i_8] [i_5] [i_6 + 1] [i_5 - 1] [i_5]))))));
                            var_13 = (max(var_13, ((min((max((arr_23 [i_5 + 1] [i_7] [i_6 - 2] [i_7]), (arr_23 [i_5 + 1] [i_7] [i_6 - 2] [i_8]))), (((arr_23 [i_5 + 1] [i_8] [i_6 - 2] [i_6 - 2]) ? (arr_23 [i_5 + 1] [i_7] [i_6 - 2] [i_6 - 1]) : (arr_23 [i_5 + 1] [i_7] [i_6 - 2] [i_8]))))))));
                            arr_25 [21] [i_5] [i_5] [21] = 120;
                        }
                    }
                }
                arr_26 [i_5] [i_5] = (max(((1 ? (((arr_14 [i_5]) ? 26 : 120)) : 32768)), (min((-112 > 46), ((44027 ? (arr_19 [i_5] [i_6]) : var_3))))));
            }
        }
    }
    var_14 = var_6;
    #pragma endscop
}
