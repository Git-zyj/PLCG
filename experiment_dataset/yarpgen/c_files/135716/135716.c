/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    var_11 = (min(var_11, var_3));
    var_12 = (min((min((var_8 <= 0), (-32767 - 1))), var_3));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1] [i_0] = (max((206434647 <= 32767), ((-((13292738432419137411 ? 34071 : 623456641))))));
                    arr_10 [i_2] [i_2] = (max((562949953421311 <= 229), (((-1357971102 <= -2130537593429730019) * ((0 ? 9223372036854775807 : 0))))));
                    arr_11 [i_1] = (max((((0 ? 669732704 : 0))), ((-2130537593429730019 ? 175 : 0))));
                }
            }
        }
    }
    #pragma endscop
}
