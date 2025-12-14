/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_16 = (((arr_1 [i_0] [i_0]) >> (((arr_2 [i_0]) - 114))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_17 = (max((arr_9 [i_0] [i_0] [i_2] [i_3] [3] [i_0]), ((248 << (-1915318345 + 1915318355)))));
                            var_18 = (arr_4 [i_0] [i_1 + 1] [i_1 + 1] [i_3]);
                            var_19 = (min(var_7, (111 + 111)));
                        }
                    }
                }
                var_20 = (min(((2147483647 ? var_8 : (arr_1 [i_1 + 1] [i_0]))), ((max((arr_0 [i_0 - 2]), (arr_0 [i_0 + 2]))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        {
                            var_21 = -var_6;
                            var_22 = (arr_10 [i_0] [i_0]);
                            var_23 = (max((max((((arr_14 [i_5]) - 83)), (arr_3 [i_1 + 2] [i_1 + 2] [i_5 + 1]))), (arr_1 [i_0] [i_0])));
                        }
                    }
                }
                var_24 = (((((407308759 & (max(3, (arr_1 [i_0 - 1] [2])))))) ? ((~(max(var_4, var_13)))) : (((((arr_2 [1]) & var_13)) ^ (max((arr_12 [i_0 - 1] [i_0] [16] [i_1]), -2))))));
            }
        }
    }
    var_25 = var_4;
    #pragma endscop
}
