/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_20 = (((-1432895761 ? 1989837389 : 18)));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_11 [8] [i_1] [i_3] [i_2] [1] [2] = var_11;
                            arr_12 [i_3] [i_3] [i_3] [i_0] = (max((min((arr_6 [i_0 + 1]), (arr_3 [i_2 - 1] [i_3]))), (52 && 51)));
                            arr_13 [i_0 - 1] [i_0] [i_0] [i_3] = min((((-(arr_9 [i_1] [i_1] [2] [i_3 + 1] [i_1 - 2])))), (min((min(var_10, var_16)), (var_18 / var_6))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 9;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            {
                var_21 = (min((min((((arr_6 [i_4 - 2]) - var_15)), (arr_4 [i_4 - 2] [i_4 + 1]))), (!214)));
                var_22 = (!var_19);
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 9;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        {
                            var_23 = var_6;
                            var_24 |= ((((var_12 | ((((arr_6 [i_4 + 1]) < var_3)))))) ? (!178) : ((var_5 ? (arr_19 [i_5]) : var_16)));
                        }
                    }
                }
                var_25 = var_6;
            }
        }
    }
    var_26 = (-199648777 / 2107952940025499833);
    var_27 = var_6;
    #pragma endscop
}
