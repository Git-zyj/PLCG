/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = (max(var_19, (((((arr_0 [i_0]) ? (((arr_4 [i_0] [i_0] [i_0]) ? 9223372036854775807 : 1)) : (arr_1 [3] [i_1])))))));
                var_20 -= -9223372036854775796;
                arr_5 [i_1] = (((arr_0 [i_0]) ^ (((arr_4 [i_1] [i_1] [11]) | ((var_8 >> (357841289 - 357841281)))))));
                var_21 = (arr_2 [6] [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_22 = (max(var_22, 9223372036854775807));
                                var_23 = ((1 ? (min(((max(var_2, (arr_12 [1] [i_3 - 1] [5] [i_1] [5])))), (arr_7 [i_0] [i_0] [i_0] [i_0]))) : ((((arr_9 [i_0] [i_3 - 2] [i_3 + 1] [i_1]) << (((arr_9 [i_3] [i_3 - 2] [i_3 - 2] [i_1]) - 217553694)))))));
                                var_24 = ((-(max((min(3734678200224857950, var_13)), (arr_0 [i_1])))));
                                var_25 = (max(var_25, (((((((arr_4 [i_0] [i_3 - 3] [i_0]) ^ (arr_4 [i_3] [i_3 + 1] [i_3])))) ? (arr_4 [i_0] [i_3 - 1] [i_0]) : var_10)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 -= 64463;
    #pragma endscop
}
