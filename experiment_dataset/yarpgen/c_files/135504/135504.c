/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((~-8174514548290336808) ? ((var_1 ? (~var_8) : 2438566942239210171)) : var_6));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_15 = (max((((~(arr_3 [i_1] [i_1 + 1] [i_1])))), (((arr_7 [22] [10]) * (arr_8 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1])))));
                    var_16 ^= (max((min((arr_6 [i_0 + 2] [i_1 + 1] [i_2 + 1]), var_11)), ((32767 ? 11819747345612856822 : (arr_4 [4])))));
                    var_17 = min((+-6709605587852931385), ((min(7, -111))));
                    arr_9 [i_1] = (max((((109 ? -8278 : -64))), (((370 >= (3465266117 != var_0))))));
                }
            }
        }
    }
    #pragma endscop
}
