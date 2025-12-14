/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_17 = (((207596187 + 200) >= (32760 % -57)));
                    arr_8 [i_0] [i_0] [i_0] = 32747;
                    arr_9 [i_0] [3] = 32760;
                }
            }
        }
    }
    var_18 = var_3;
    var_19 = ((var_9 % (207596209 ^ var_8)));
    #pragma endscop
}
