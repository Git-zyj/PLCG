/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, ((max((max((arr_0 [i_1]), 1267502566)), ((min(var_8, var_12))))))));
                    arr_6 [i_0] [i_1] [i_1] [i_2] = (min((max(var_9, 1267502560)), (max(var_9, 1))));
                }
            }
        }
    }
    var_14 = (min((min((max(4884273020592479868, var_7)), var_10)), ((min(var_8, (min(3027464736, var_9)))))));
    var_15 &= (max((min((min(-3851000964784238744, var_4)), ((min(3027464735, var_1))))), ((min((max(var_11, var_7)), var_9)))));
    var_16 |= var_10;
    #pragma endscop
}
