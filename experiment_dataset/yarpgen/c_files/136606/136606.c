/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (max(4096, 1));
        var_11 += (arr_1 [i_0]);
        var_12 += (((arr_1 [i_0]) != ((((arr_1 [i_0]) & (arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_13 = (max(var_13, ((((arr_3 [i_1] [i_1]) % (arr_5 [i_1]))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 15;i_3 += 1)
            {
                {
                    arr_10 [i_3 - 2] [i_2] [i_1] = ((((((arr_7 [i_1] [i_2]) << (((arr_8 [i_1] [i_2] [i_3 + 1]) - 3132732356))))) || (arr_4 [i_1])));
                    var_14 = (arr_8 [12] [i_1] [i_1]);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            {
                                arr_15 [i_1] [i_1] [i_3] [0] [i_5] [i_2] = (((arr_8 [i_1] [i_2] [i_3]) % (arr_8 [i_1] [i_5] [i_3 - 3])));
                                var_15 = (((((((arr_3 [2] [i_2]) || (arr_13 [13] [i_2] [i_2]))))) == (((arr_5 [i_1]) % (arr_5 [i_5])))));
                            }
                        }
                    }
                    arr_16 [i_1] [i_1] [i_1] = (arr_12 [i_3] [i_2] [i_1] [i_1]);
                    arr_17 [i_2] [i_2] [i_1] = ((((-(arr_13 [i_2] [i_2] [i_2]))) + (arr_8 [i_3 - 3] [i_3 - 2] [i_3 + 1])));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 15;i_8 += 1)
                {
                    {
                        var_16 = (max(var_16, (arr_3 [i_8 + 1] [i_8 - 1])));
                        var_17 = (arr_14 [i_1] [i_1] [1] [i_1] [i_1]);
                    }
                }
            }
        }
    }
    var_18 = var_5;
    #pragma endscop
}
