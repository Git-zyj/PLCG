/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_19 = -15247353208931736803;
        var_20 = (arr_1 [i_0 - 1]);
        var_21 = -22;
    }
    /* LoopNest 3 */
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                {
                    var_22 = (((((max((arr_5 [i_3]), (arr_5 [i_1])))) << (((max(var_2, (arr_1 [i_2]))) + 101)))));
                    var_23 = 1;
                }
            }
        }
    }
    var_24 |= ((-((~(2977451553606590079 & var_1)))));
    #pragma endscop
}
