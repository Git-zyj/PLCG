/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_13 = min(((max(var_7, ((25701 ? 1 : 1293800807))))), ((var_1 ? (((arr_6 [i_0]) ? var_8 : (arr_6 [i_0]))) : (((-(arr_2 [i_1] [i_1] [i_2])))))));
                    arr_8 [0] [i_1] [i_1] [11] = ((25468 ? (((arr_1 [i_0 - 1]) << (var_11 + 99))) : (min(var_6, ((-14724 ? 25468 : 144))))));
                    var_14 = ((((var_0 * 1) ? ((93 ? 9223372036854775807 : (-32767 - 1))) : 17)));
                }
            }
        }
    }
    var_15 -= ((53 ? var_5 : 76));
    #pragma endscop
}
