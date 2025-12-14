/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= 1046887414;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        arr_10 [i_0] [i_2] [i_0] [i_2] = (((1046887424 << (-1 + 15))));
                        arr_11 [i_2] [i_2] [i_3] = (((arr_0 [i_0 + 1]) ? ((((!(arr_7 [i_0] [i_2] [i_0]))))) : (arr_5 [i_2 - 1])));
                        var_21 ^= (((arr_0 [i_1]) ? (((-1 ? (arr_4 [i_1] [i_2]) : (arr_6 [i_2] [i_0] [8])))) : (arr_6 [i_0] [i_0] [i_2])));
                        arr_12 [i_0] [i_1] [i_2] [i_2] = (((~-1) ? (arr_7 [i_0 - 1] [i_2] [i_2 + 1]) : (((arr_9 [i_0] [6]) ? (arr_9 [i_1] [i_1]) : (arr_2 [i_0 - 1] [i_0 - 1])))));
                    }
                    arr_13 [i_0] [i_1] &= 0;
                    arr_14 [i_2] = (arr_5 [i_0]);
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 8;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            {
                                var_22 = (arr_17 [i_2] [i_1] [i_2] [i_4] [i_5] [i_1] [i_2]);
                                var_23 = (max(var_23, (((~(!-54))))));
                            }
                        }
                    }
                }
            }
        }
        var_24 ^= (arr_4 [1] [i_0 + 1]);
        arr_20 [5] = -1827840367993800537;
    }
    var_25 = (min(var_25, 4294967295));
    #pragma endscop
}
