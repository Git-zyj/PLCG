/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((max(var_2, ((11325547661207282782 ? 1 : -9223372036854775807)))));
    var_17 = (min(7121196412502268833, 7594));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 = (max(var_18, ((((((-(arr_3 [i_1] [i_1] [i_1])))) ? ((630301742 ^ (arr_1 [i_0] [i_1]))) : ((((arr_4 [i_1]) / -21208))))))));
                var_19 = (((!12772) && ((min(11325547661207282782, -6552)))));
                var_20 = (arr_1 [i_0] [i_1]);
            }
        }
    }
    var_21 |= (!var_13);
    var_22 = -var_9;
    #pragma endscop
}
