/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((min(((9223372036854775807 ? 9223372036854775807 : var_7)), (var_0 || var_12))), (var_14 && var_2)));
    var_18 ^= (((((min(1581837733, var_8)))) ? (-32767 - 1) : ((max(var_13, -1900967519)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 *= (((arr_1 [i_0]) ? (!-25522) : (((!(var_5 && -1693442537))))));
                    var_20 += ((~var_14) < 3711386352199291080);
                    arr_9 [i_0] [i_1] [i_2] = 3274031621;
                    var_21 = (+(((2750865629 && var_1) ? 1 : ((10081125619886805169 ? 8388607 : var_16)))));
                }
            }
        }
    }
    #pragma endscop
}
