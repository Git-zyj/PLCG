/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = -831881816;
                arr_7 [i_0] [i_0] = ((((23682 + (arr_3 [i_0] [13])))) + -109);
                arr_8 [i_0] [i_0] [3] = ((((((min(var_4, 72))) / (((arr_4 [13] [13] [13]) / (arr_4 [i_1] [i_1] [i_1]))))) == 108));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    arr_11 [i_0] [10] [10] [3] = (arr_5 [i_2] [i_2] [i_2]);
                    arr_12 [i_0] = (max(-109, (((arr_1 [i_1]) - (min((arr_2 [i_1] [i_2]), -108))))));
                    arr_13 [i_0] [i_0] [i_0] [10] = (max((min(5877381988821461184, ((min((arr_4 [i_0] [i_0] [i_0]), (arr_10 [i_0] [i_1] [i_2] [15])))))), 107));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_18 [i_3] = (min((min(var_5, (arr_15 [i_3] [i_3]))), (!-109)));
                                arr_19 [i_0] [i_3] [i_0] [i_0] [i_0] [i_0] = (min(((15 & (max(var_11, (arr_17 [i_0] [i_0] [2] [2] [i_0] [i_0]))))), (arr_16 [i_3] [i_3])));
                                var_17 = (max(var_17, var_3));
                            }
                        }
                    }
                    arr_20 [i_1] &= (arr_0 [13]);
                }
                arr_21 [11] [i_1 + 1] = ((max((var_0 * 0), (((arr_17 [i_0] [i_0] [i_0] [i_0] [i_1] [11]) | (arr_15 [i_1] [i_1]))))) % -63);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 9;i_7 += 1)
            {
                {
                    var_18 = (((arr_29 [4] [4] [4]) / ((((min(32746, var_3)))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            {
                                var_19 = (max(var_19, ((min((((arr_2 [10] [i_8]) - ((((arr_31 [i_8] [i_8] [1] [i_8]) / 157412755))))), ((max(((63 | (arr_27 [i_5] [i_6] [i_7]))), (((0 > (arr_0 [i_5]))))))))))));
                                arr_35 [i_5] [i_5] [5] [3] [3] = (((arr_9 [i_5] [1] [0] [i_5]) & (arr_5 [7] [7] [i_8])));
                                arr_36 [i_5] [i_5] [i_5] [i_5] = (arr_5 [i_7] [11] [15]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
