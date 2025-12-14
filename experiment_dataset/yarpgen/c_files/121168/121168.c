/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_11 = ((((-(arr_5 [i_0] [i_0])))));
                    arr_9 [i_2] [20] = var_2;
                    var_12 ^= ((((((arr_4 [i_2]) ^ var_6))) ? (~var_10) : ((min(var_3, var_8)))));
                    arr_10 [0] [0] [i_0] = (min(((((36065 || var_7) && (arr_7 [i_0])))), (((((var_3 ? 1 : var_2))) ? 1 : (min(1292325377, var_7))))));
                    arr_11 [i_1] [i_1] = (min(((((min(var_4, (arr_2 [i_1]))) ^ (arr_7 [i_1])))), ((var_0 ? (((var_0 ? var_3 : var_1))) : (var_0 & var_9)))));
                }
            }
        }
    }
    var_13 = ((((min(var_8, (var_3 / var_1)))) ? var_2 : var_6));
    #pragma endscop
}
