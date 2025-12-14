/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_12 ^= (~4294967295);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_2] [12] = (min(((((var_3 ? var_2 : var_10)))), var_11));
                    var_13 += (((((32512 ? 262143 : 0))) - var_8));
                }
            }
        }
        var_14 = (max(var_14, ((max(var_2, var_1)))));
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        var_15 = 256;
        var_16 = max((max(((((arr_7 [i_3]) ? 0 : var_7))), (max(var_0, var_10)))), var_0);
        arr_9 [i_3] = max(((max((!262159), var_7))), ((4 ? (arr_2 [i_3] [i_3]) : (~var_1))));
        arr_10 [i_3] = (1 || 65263);
    }
    var_17 = var_7;
    var_18 |= (min((max((~var_2), var_9)), (((min(0, 0))))));
    /* LoopNest 3 */
    for (int i_4 = 2; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            {
                                var_19 *= 32753;
                                var_20 -= var_5;
                                var_21 = ((((((arr_14 [i_4 - 2] [i_4 + 1]) ? (arr_14 [i_4 - 2] [i_4 + 1]) : var_3))) ? (((var_3 ? (((15 ? (-2147483647 - 1) : 32767))) : ((-(arr_23 [9] [i_5] [9] [i_7] [1] [i_4 + 1])))))) : (((var_4 - var_8) ? var_8 : (arr_11 [i_4] [1])))));
                            }
                        }
                    }
                    arr_24 [i_5] [i_5] [i_6] = ((((max((arr_14 [i_4 - 1] [6]), 68169720922112))) ? (((-(max(var_3, var_5))))) : 9223372036854775807));
                }
            }
        }
    }
    #pragma endscop
}
