/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_15, ((var_13 ? (((3102263519 ? -117 : var_2))) : var_1))));
    var_18 = (min((max(149209387623168606, ((var_3 ? var_12 : 4937889989731599560)))), var_2));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_19 = 739050142369323895;
                    arr_7 [i_2] [i_1] = (min(2099239800, 3102263519));
                    arr_8 [i_1] [i_1] [i_2] [i_2] = var_2;
                }
            }
        }
    }
    #pragma endscop
}
