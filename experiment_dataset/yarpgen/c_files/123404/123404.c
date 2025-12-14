/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_11 = (((arr_4 [i_0] [i_1]) ? (((-(arr_4 [i_0] [i_0])))) : (((((-23238 ? (arr_0 [i_0] [i_1]) : (arr_0 [i_0] [i_1])))) ? (arr_4 [i_1] [i_1]) : var_3))));
                var_12 = ((!(arr_0 [i_0] [i_1])));
                var_13 = (max(var_13, ((max((arr_0 [i_0] [i_0]), var_5)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_14 = (arr_12 [i_2]);
                                var_15 = (((arr_7 [i_1] [i_2]) & ((var_1 ? (23238 ^ 7834492974233047687) : -var_4))));
                                var_16 = (arr_6 [i_0] [i_1] [i_2] [i_3]);
                            }
                        }
                    }
                }
                var_17 = (arr_9 [i_0] [i_0] [i_1] [i_1]);
            }
        }
    }
    var_18 ^= ((var_4 ? -23238 : var_1));
    #pragma endscop
}
