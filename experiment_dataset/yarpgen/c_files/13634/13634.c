/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_1] = (0 == 0);
                var_12 = ((~(((!(arr_0 [i_0]))))));
            }
        }
    }
    var_13 = (max((min((2 == var_5), (min(0, var_6)))), var_11));
    var_14 = var_4;
    #pragma endscop
}
