/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_1] = (((((min((arr_6 [i_1] [i_1]), -1))) / (arr_1 [i_0]))));
                    var_10 = (min((arr_0 [i_0]), (!0)));
                    var_11 ^= 5;
                }
            }
        }
    }
    var_12 -= (var_3 | 3);
    var_13 -= ((951157441 * (((-(var_3 % 5))))));
    #pragma endscop
}
