/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(63, (min(65, 1048448))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_0] = (max(((min((arr_2 [i_0]), (arr_2 [i_0])))), (min(140737488355296, 1283709059))));
                arr_7 [i_0] = (((32763 - 1) & (min((((var_7 ? (arr_1 [i_0]) : 1202776262))), (min(1445246102, 16643699770385898871))))));
                arr_8 [i_1] [i_0] [24] = 65535;
                arr_9 [i_0] [i_0] = ((-(!3397978201)));
            }
        }
    }
    var_11 = var_5;
    var_12 = var_2;
    #pragma endscop
}
