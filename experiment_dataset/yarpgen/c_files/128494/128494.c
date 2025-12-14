/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, -0));
                    var_15 = (min(var_15, ((((min((((arr_4 [i_0] [i_1 - 2] [i_1 - 2] [i_2]) ? (arr_3 [i_2] [i_1]) : (arr_4 [i_2] [i_1] [i_0] [i_0]))), (arr_3 [i_2] [i_2]))) < ((((min(1017114751924963862, 55)) == (((var_8 ? (arr_4 [i_0] [i_0] [15] [i_0]) : 65535)))))))))));
                    var_16 = min(((((arr_3 [i_1] [i_1]) == var_0))), 26);
                }
            }
        }
    }
    var_17 = 65534;
    #pragma endscop
}
