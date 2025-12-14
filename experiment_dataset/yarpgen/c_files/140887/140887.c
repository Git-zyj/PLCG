/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_15 += 2778;
                    var_16 = ((4139006994486139173 ? 22534 : 17292));
                    arr_7 [i_0] [i_0] [i_1] [i_1] = (max(((((var_10 * (arr_6 [i_1] [0] [i_1] [i_1]))) * (((9223372036854775807 ? var_4 : var_11))))), ((min(0, var_4)))));
                }
            }
        }
    }

    for (int i_3 = 1; i_3 < 11;i_3 += 1)
    {
        var_17 = 0;
        arr_11 [i_3 + 1] = (max(((var_10 ? var_9 : 0)), (min((max(9, var_10)), (arr_9 [i_3])))));
    }
    #pragma endscop
}
