/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_11 = var_8;

                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    var_12 = ((min((arr_7 [i_1] [i_2 - 2] [i_2 - 2]), (arr_3 [i_1] [i_0]))));
                    var_13 = ((-(arr_5 [i_0] [i_1] [i_2 - 1])));
                }
            }
        }
    }
    var_14 = -79;
    #pragma endscop
}
