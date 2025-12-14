/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= (((((min(30944, 10570199219133133025))) ? 1 : 1)));
    var_16 = (max(var_16, ((((((var_11 ? 0 : -1))) ? var_2 : var_11)))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_12;
        arr_4 [i_0] = ((var_11 ? (((min(var_13, 1)))) : (max(16, 4115274029513734135))));
        arr_5 [6] = arr_2 [i_0];
        arr_6 [i_0] [i_0] |= var_6;
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            {
                var_17 = (arr_10 [i_1] [i_1]);
                var_18 = (arr_10 [i_1] [i_2 + 1]);
            }
        }
    }
    #pragma endscop
}
