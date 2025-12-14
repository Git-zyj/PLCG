/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((arr_1 [i_0]) + (1035047387 & 3259919936)));
                arr_6 [i_1] [i_0] [i_0] = ((((((4523559617163509043 | 4502235971310926453) ^ (~var_6)))) - 12807708302295643587));
            }
        }
    }
    var_17 = var_14;
    #pragma endscop
}
