/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((max((var_3 / 47606), var_19)), (((17926 * 13377) / var_10))));
    var_21 = (var_18 == var_9);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_22 = -var_2;
                arr_6 [9] [9] = 47609;
            }
        }
    }
    #pragma endscop
}
