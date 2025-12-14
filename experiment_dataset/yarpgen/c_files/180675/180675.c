/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, var_4));
    var_17 ^= 1400156057781458595;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, ((((((arr_7 [i_2 - 1]) && 4294967294)) ? (((min(var_8, var_8)))) : (arr_7 [i_2 - 1]))))));
                    var_19 = ((min(-1400156057781458595, -1400156057781458595)));
                    arr_8 [i_0] = (min((1 / 1400156057781458595), ((((arr_0 [i_1 - 4]) - var_2)))));
                }
            }
        }
    }
    #pragma endscop
}
