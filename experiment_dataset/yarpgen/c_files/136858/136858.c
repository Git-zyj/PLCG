/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (26 >= -var_5);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0 - 3] [i_0] [i_0] = var_7;
                    arr_10 [i_0] [6] [i_0] = (((((16435 | ((min(1, 15)))))) ? ((((min(11, 1081305780))) ? ((var_10 ? (arr_2 [i_0] [6]) : (arr_7 [6] [i_1]))) : (((((arr_4 [i_0] [i_1] [i_0]) || 9223372036854775807)))))) : (((var_0 ^ (arr_8 [i_2 - 1] [i_2] [9] [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 = ((((min(var_9, (arr_2 [i_0] [2])))) ? ((-26 & (-9223372036854775807 - 1))) : ((((((arr_11 [i_0] [i_0] [3] [i_0]) ? (arr_8 [i_0] [i_1] [i_2 - 1] [i_0]) : (arr_1 [i_0]))) | (arr_14 [i_2] [i_2] [5] [i_0] [i_2 - 1] [i_2] [i_2 - 1]))))));
                                arr_15 [10] [10] [i_2] [i_3] [i_0] = ((+((((((arr_5 [2] [4] [i_0]) ? 9223372036854775794 : var_12))) ? -51 : ((var_10 ? (arr_0 [i_0]) : var_8))))));
                                var_15 = (min(var_15, ((min(((((((-9223372036854775807 - 1) / -11)) <= (~-9223372036854775795)))), (-2147483647 - 1))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
