/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((((0 != 13) > var_3)))) + ((~(var_14 + var_1)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_17 = (0 ? 4294967295 : 1);
                    var_18 = 0;
                    arr_8 [i_0] [i_1] [i_0] = 255;
                    var_19 = var_9;
                }
            }
        }
    }
    var_20 = 0;
    #pragma endscop
}
