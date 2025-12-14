/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0 - 2] [i_0 - 2] = 1413400553;
                arr_6 [i_0] [1] = (((((arr_3 [i_0] [20] [i_0 - 2]) ? -1413400558 : 3343563621)) - ((((1413400553 || (arr_3 [i_0 - 2] [i_1] [i_0 - 1])))))));
            }
        }
    }
    var_14 = (min(var_14, ((min((((var_12 && (~var_10)))), (max(var_2, var_12)))))));
    #pragma endscop
}
