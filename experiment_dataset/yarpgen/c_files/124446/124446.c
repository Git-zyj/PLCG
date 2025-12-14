/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] [10] [i_1] = (((((-(arr_2 [i_0 + 2] [i_0 - 1] [i_0])))) ? (((42834 ? (arr_3 [8] [i_0]) : ((min(1, 194)))))) : var_8));
                arr_5 [i_0] [17] = var_10;
            }
        }
    }
    var_20 = var_10;
    var_21 = var_14;
    #pragma endscop
}
