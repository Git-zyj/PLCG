/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= var_10;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    var_19 = (((!(arr_2 [i_0]))));
                    arr_8 [i_0] [5] = (max((!-var_3), var_3));
                }
            }
        }
    }
    #pragma endscop
}
