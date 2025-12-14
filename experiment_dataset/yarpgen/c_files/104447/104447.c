/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_10 = 213521645;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_11 = (min((((arr_1 [i_2 - 1]) + 213521645)), (arr_7 [i_2 + 1] [i_2] [i_2 + 1] [i_2 - 1] [i_2 + 1])));
                            var_12 = (min(var_12, ((((arr_8 [1] [1] [14]) ? 16889 : (!-213521645))))));
                        }
                    }
                }
            }
        }
    }
    var_13 = var_2;
    var_14 = var_7;
    #pragma endscop
}
