/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_13));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_20 -= var_8;
                var_21 ^= (min((max(var_16, var_18)), var_9));
                var_22 = (max(var_22, (((-(arr_2 [i_1]))))));
                arr_4 [i_0] [i_0] = (max(((min((arr_3 [i_1]), (arr_3 [i_0])))), ((min(var_10, 1086884711)))));
            }
        }
    }
    #pragma endscop
}
