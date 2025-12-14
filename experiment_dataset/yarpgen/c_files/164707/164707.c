/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((var_8 / ((var_2 ? var_5 : var_2)))) % var_1);
    var_11 *= var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (var_8 < var_2);
                arr_5 [i_0] = (max(((min((arr_3 [i_0]), (arr_3 [i_0])))), (min((arr_2 [i_0]), (arr_1 [i_0])))));
            }
        }
    }
    #pragma endscop
}
