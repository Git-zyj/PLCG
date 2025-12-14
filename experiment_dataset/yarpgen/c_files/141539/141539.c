/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] = (max(((min((arr_1 [i_0] [i_0]), (arr_3 [i_0])))), (min((min(var_3, (arr_1 [i_0] [i_0]))), ((((arr_0 [i_0]) > (arr_2 [i_0] [i_0]))))))));
                var_19 += (max((((~(arr_3 [10])))), 2170082519));
            }
        }
    }
    var_20 *= var_11;
    #pragma endscop
}
