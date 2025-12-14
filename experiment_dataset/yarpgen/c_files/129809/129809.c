/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_19 = (max(var_19, (((((min(7095, ((12978702624853621168 ? var_6 : (arr_0 [i_0])))))) ? ((var_14 ? 3063448464512176031 : var_8)) : var_5)))));
                arr_6 [i_0] [i_0] = (((arr_2 [i_0] [i_1] [19]) - (((-(arr_1 [i_0]))))));
            }
        }
    }
    var_20 = -0;
    #pragma endscop
}
