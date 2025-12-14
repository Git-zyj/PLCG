/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [18] = var_9;
                var_10 = (max(((var_5 > (arr_2 [i_0 - 2] [i_1]))), (((1619527762 || var_5) == (((arr_3 [5]) ? 1 : (arr_2 [i_1] [17])))))));
            }
        }
    }
    var_11 = 4225646655484239952;
    var_12 = var_9;
    #pragma endscop
}
