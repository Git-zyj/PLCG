/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_13 = (((min(4294967295, 123))));
                    var_14 = (((min((arr_3 [i_0] [i_1]), ((min((arr_6 [i_2] [i_1]), var_5)))))) ? (max((arr_1 [i_0]), (~var_4))) : (arr_6 [i_2] [i_1]));
                    var_15 = ((~(max(var_12, (arr_1 [1])))));
                }
            }
        }
    }
    var_16 = ((max((min(var_12, var_8)), var_11)));
    #pragma endscop
}
