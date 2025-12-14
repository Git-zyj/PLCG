/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= var_17;
    var_20 += var_17;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_0] = (((((-21895 + 2147483647) << (((-2147483647 - 1) - (-2147483647 - 1)))))) ? (max((min(-1, var_13)), 2075431731)) : 125);
                    var_21 = (-32767 - 1);
                    arr_8 [i_2] [i_0] [i_0] = ((((arr_3 [i_2 + 1] [4] [i_2 - 2]) ? (arr_5 [i_2 + 1] [i_2] [i_2 - 2] [i_2]) : (arr_3 [i_2 + 1] [i_2 - 1] [i_2 - 2]))));
                }
            }
        }
    }
    #pragma endscop
}
