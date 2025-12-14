/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_18 -= -var_6;
                var_19 = (max(var_19, (arr_4 [i_0] [i_1 - 1] [i_1 - 1])));
            }
        }
    }
    var_20 = (((max(3346179946, var_1))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            {
                var_21 = (max(var_21, (arr_11 [i_2] [i_3])));
                arr_12 [i_2] [0] [i_2] = 50;
            }
        }
    }
    var_22 = (max((max(((-1356664502 ? var_11 : var_13)), 10567037582556929980)), var_3));
    #pragma endscop
}
