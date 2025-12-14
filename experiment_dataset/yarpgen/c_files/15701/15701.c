/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1 - 1] [i_2] = (min(((0 ? -var_0 : var_10)), 1));
                    var_13 = (max(-1, ((((arr_4 [i_0] [i_0]) || (-714 >= var_10))))));
                }
            }
        }
    }
    var_14 = 5195328980492243044;
    #pragma endscop
}
