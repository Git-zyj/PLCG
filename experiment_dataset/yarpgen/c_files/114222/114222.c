/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += ((((~(min(var_4, -7688338806601924301)))) ^ var_12));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_15 = var_11;
                arr_7 [i_0] = (((!var_3) > ((~(arr_6 [i_0])))));
                var_16 *= (((min((arr_4 [i_0 - 2] [i_0 - 2]), 7688338806601924301)) > (((~(min(0, (arr_2 [i_0]))))))));
            }
        }
    }
    var_17 = (min((max(4157440800542444268, var_9)), var_10));
    #pragma endscop
}
