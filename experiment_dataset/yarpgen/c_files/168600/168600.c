/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_18 = (min(var_18, (((!((max(49069, -160185744))))))));
                arr_5 [i_0] [i_0] [i_1] = (((arr_2 [1] [1]) ? -1 : (((arr_2 [i_0] [i_1]) - (arr_1 [i_0])))));
                var_19 = var_13;
            }
        }
    }
    var_20 = var_16;
    #pragma endscop
}
