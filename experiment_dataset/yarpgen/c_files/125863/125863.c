/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 -= 65535;
                    var_21 ^= (min((-1955763966 * -1), var_6));
                }
            }
        }
    }

    for (int i_3 = 1; i_3 < 18;i_3 += 1)
    {
        var_22 |= (max(((((((arr_9 [i_3]) ? (arr_8 [1] [10]) : var_2))) || (arr_9 [i_3]))), ((var_4 || (arr_8 [i_3] [1])))));
        var_23 += (-1 ? (min(7, (arr_9 [i_3 - 1]))) : -1);
        var_24 |= ((!(((var_11 * (arr_9 [i_3 - 1]))))));
        var_25 += (max(var_19, -var_2));
    }
    #pragma endscop
}
