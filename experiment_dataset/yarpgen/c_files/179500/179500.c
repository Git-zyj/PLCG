/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (min(34, (46995 / 18561)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_2] [i_0] = (max((1 / -127), 1));
                    var_17 ^= (((18557 != 1690558116) - (1 <= 2604409179)));
                    var_18 += (~1518627398);
                    var_19 = (min(var_19, 18540));
                }
            }
        }
    }
    var_20 += (max((min(18532, (-379212462 - 6053511887430933480))), (var_2 / 230)));
    #pragma endscop
}
