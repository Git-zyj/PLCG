/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = (arr_0 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 6;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [3] [i_1] = (min(((((arr_2 [i_1]) ? (arr_7 [i_1 + 2] [i_1 + 1] [i_1 - 1] [i_1]) : 1))), (min((arr_8 [i_0]), (min(var_8, (arr_4 [i_2])))))));
                    var_12 = ((max((max(127, var_0), (((arr_1 [i_0] [i_0]) ? (arr_6 [i_0] [i_1] [i_0]) : -5))))));
                    var_13 += 15;
                }
            }
        }
        arr_10 [i_0] [i_0] = (max((arr_2 [i_0]), ((((arr_5 [i_0] [i_0] [i_0]) << (((arr_4 [i_0]) - 15867271606063388993)))))));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                {
                    var_14 -= ((+((((arr_6 [i_5] [i_3] [i_3]) != ((min(64404, 4294967288))))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_15 = var_0;
                                var_16 = (min(var_16, (((+(min((((arr_21 [i_7] [i_6] [i_5 - 1] [1] [i_3]) / var_9)), (min((arr_14 [i_3] [i_7] [i_5]), 13249448562319977491)))))))));
                                var_17 = (arr_11 [i_3] [i_3]);
                                var_18 = (max((max((((7 == (arr_11 [i_5] [i_3])))), (arr_23 [4] [i_5 - 1] [i_5] [i_5] [i_5] [i_5 - 1]))), 5746));
                            }
                        }
                    }
                    var_19 &= 0;
                }
            }
        }
        arr_24 [i_3] = (((((var_2 ^ 127) & (((arr_15 [i_3] [i_3]) ? (arr_16 [5] [5] [i_3]) : -1101759355)))) | (arr_20 [i_3])));
    }
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        arr_27 [i_8] [i_8] = (((arr_26 [i_8] [i_8]) ^ 11430881428789425710));
        var_20 = (max(var_20, 249));
        arr_28 [i_8] = 1;
    }
    #pragma endscop
}
