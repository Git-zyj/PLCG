/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((var_8 & (59 << 22))) << ((((var_2 ? -var_0 : (max(var_4, 1815643141)))) + 279))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 11;i_4 += 1)
                            {
                                arr_14 [i_1] [0] [i_1] = (arr_3 [i_1]);
                                arr_15 [i_0] [i_0] [i_1] [i_0] [i_0] = (max(((-(((arr_7 [i_1] [i_1] [i_1]) * var_11)))), (arr_9 [i_1] [i_1] [i_3] [i_2] [i_1] [i_1])));
                            }
                            var_13 = (max((((~((var_11 ? (arr_0 [i_0] [i_2]) : (arr_0 [8] [i_2])))))), ((127 ? ((var_4 ? (arr_5 [i_0]) : 253952)) : (var_1 <= var_1)))));
                        }
                    }
                }
                var_14 -= (~1896737981);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            {
                var_15 = (arr_16 [9] [i_6]);
                var_16 = ((~(arr_18 [i_5] [i_5] [i_6])));
            }
        }
    }
    #pragma endscop
}
