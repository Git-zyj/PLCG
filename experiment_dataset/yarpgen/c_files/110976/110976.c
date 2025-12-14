/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_1] [i_2] = ((-(arr_4 [i_0])));
                    var_13 = ((-(arr_2 [i_0])));
                    var_14 += -2513717906279128550;
                }
            }
        }
    }
    var_15 = var_8;
    #pragma endscop
}
