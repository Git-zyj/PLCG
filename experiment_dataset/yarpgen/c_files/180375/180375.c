/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (1 || 1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [6] [i_0] [i_0] = ((((var_4 ? var_6 : (arr_2 [i_0])))));
                arr_6 [i_0] [i_0] = (max((max((arr_0 [i_1 + 2]), (arr_0 [i_1 + 2]))), ((1 | (arr_0 [i_1 - 2])))));
                var_18 += (max(((max((arr_0 [4]), ((min(1, -1)))))), ((min(1, 1)))));
            }
        }
    }
    var_19 |= max(var_9, (~var_9));
    #pragma endscop
}
