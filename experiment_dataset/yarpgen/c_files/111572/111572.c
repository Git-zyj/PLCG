/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((!(var_0 | var_0))) ? (((var_11 + (var_10 + var_7)))) : (((var_3 || var_1) ? var_9 : ((var_13 ? var_13 : var_8))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = var_1;
                    arr_10 [11] [14] [2] [3] = (min((((arr_6 [i_0] [i_2]) ? 4742437468230861420 : (arr_6 [i_0] [i_1]))), (min((arr_6 [i_2] [i_1]), var_12))));
                    arr_11 [14] [i_0] [i_0] = ((~((170 ? 2013265920 : 2013265901))));
                }
            }
        }
    }
    var_16 = var_8;
    var_17 = ((((min((var_1 < var_13), 44))) ^ (((var_0 ? var_3 : var_12)))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 4; i_4 < 16;i_4 += 1)
        {
            {
                var_18 ^= ((((-2013265921 <= (-2147483647 - 1)))));
                var_19 = ((var_1 ? ((((arr_18 [8] [i_4 - 1] [14]) | (arr_18 [i_3] [i_4 - 4] [11])))) : var_3));
                var_20 ^= var_11;
            }
        }
    }
    #pragma endscop
}
