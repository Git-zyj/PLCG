/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= 46817;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 += ((46817 ? 26637 : 18706));
                arr_5 [i_1] [1] [i_1] = (((46817 + (arr_0 [i_0]))) / ((max(46834, -6))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_19 = ((-(((!2117523301610564077) ? ((var_7 ? var_15 : var_9)) : (((2147483647 ? -2111094452 : -31201)))))));

                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        var_20 = ((16329220772098987525 ? -1206957044 : ((-383916418 ? (max(-1075423137, 1576009022)) : 1))));
                        var_21 = (min(var_21, (((1685 ? 0 : -8192)))));
                    }
                }
            }
        }
    }
    var_22 = (min(1, 3557194997175674266));
    #pragma endscop
}
