/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_20 = (arr_3 [0] [2] [2]);
                arr_4 [i_0] [1] [i_1] = (((arr_1 [2]) ? var_10 : (max(var_17, (max(var_14, (arr_2 [i_0] [i_1])))))));
                var_21 += (max((var_9 >= var_5), ((((((arr_2 [9] [i_1]) ? (arr_3 [i_0] [i_0] [i_1]) : var_10))) ? (((arr_1 [i_0]) ^ (arr_2 [i_0] [7]))) : (((min((arr_0 [7]), var_0))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 19;i_4 += 1)
            {
                {
                    var_22 += ((var_0 ? ((min((min((arr_12 [i_3] [10] [i_4] [1]), var_18)), (max(var_8, (arr_7 [i_4])))))) : (max((max(var_13, var_7)), ((min(var_16, (arr_7 [20]))))))));
                    var_23 ^= (max(((((min(var_16, (arr_11 [i_4] [i_3] [i_3] [i_2]))) != (((var_0 ? (arr_12 [i_3] [i_3] [i_4] [i_4]) : (arr_10 [i_2] [i_2] [i_4]))))))), (max((max((arr_12 [i_3] [i_3] [i_3] [i_3]), var_5)), (min(var_17, var_0))))));
                }
            }
        }
    }
    #pragma endscop
}
