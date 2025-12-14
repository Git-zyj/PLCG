/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = var_3;
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_10 += (arr_1 [i_2]);
                            arr_12 [2] [i_3] [i_3] [1] = 48089;
                            var_11 = 28;
                        }
                    }
                }
                var_12 = (max(var_12, (max(((max((-1461292070 + var_9), ((max(45, (arr_10 [i_0] [i_0] [10] [i_1] [i_1]))))))), ((-(min(17446, (arr_11 [i_1] [i_1] [14])))))))));
                arr_13 [i_0] = ((-(((((17447 ? 4194288 : var_9))) ? (((arr_1 [i_1]) + (arr_0 [i_1 - 1]))) : (arr_0 [1])))));
            }
        }
    }
    var_13 ^= var_9;
    var_14 = var_8;
    #pragma endscop
}
