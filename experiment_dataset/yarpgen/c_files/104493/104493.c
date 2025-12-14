/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_9 | var_8);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_2] [i_0] = (((min(241, (((arr_7 [i_0] [i_0] [i_1] [i_2]) ? (arr_7 [i_2] [i_2] [i_1] [3]) : -21904)))) - ((((((max(var_12, 27607))) == (arr_6 [i_0] [i_1])))))));
                    var_21 ^= (((max(31, var_13))));
                }
            }
        }
    }
    var_22 = (min((min((-127 - 1), -28)), var_14));
    var_23 = (!31);
    var_24 = (max(var_24, var_4));
    #pragma endscop
}
