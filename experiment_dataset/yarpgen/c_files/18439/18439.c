/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_0 ? ((~(8191 < 3091006443))) : var_0);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_15 ^= (min(var_10, (((arr_3 [i_0] [11] [i_0 + 1]) + 3091006443))));
                    arr_7 [i_0] [i_1] [i_1] [i_1] = ((!(((min(3091006435, 1203960836))))));
                }
            }
        }
    }
    var_16 = ((~(3091006464 << 0)));
    #pragma endscop
}
