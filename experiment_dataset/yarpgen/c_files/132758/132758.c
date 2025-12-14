/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= var_3;
    var_12 = (min(var_3, var_3));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    arr_7 [i_1] [i_1] [3] = ((!(arr_5 [i_0] [5] [i_0 - 1] [i_0 - 1])));
                    arr_8 [i_0] [9] [9] = (~2147483647);
                }
                arr_9 [i_0 + 3] [i_0] [i_0] = ((-28876 ? ((min(-2147483618, (var_0 - 2147483628)))) : var_1));
            }
        }
    }
    #pragma endscop
}
