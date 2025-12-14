/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                arr_7 [i_0] = (((((arr_4 [i_0] [i_0] [i_1 + 1]) || var_3)) ? (((arr_4 [7] [7] [i_1 + 1]) << (((arr_4 [i_0] [i_1] [i_1 + 1]) - 14561951946421514988)))) : ((457805285 ? (arr_4 [i_0] [i_1] [i_1 + 1]) : (arr_4 [i_0] [i_1] [i_1 + 1])))));
                var_19 = (max((((((var_8 <= (arr_3 [i_0] [i_1]))) && (arr_3 [i_0] [i_0])))), 9053));
                var_20 ^= ((((-(arr_1 [i_1 - 2] [2]))) / (0 - var_2)));
            }
        }
    }
    var_21 += (max(((((var_18 * var_18) < var_8))), 7170634871689457545));
    #pragma endscop
}
