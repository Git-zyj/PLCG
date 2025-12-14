/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= 1073741312;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [4] = (-((25272 ? -237196697 : 1073741334)));
        var_21 = (~25290);
        arr_5 [i_0] [i_0] = ((~(min((~1931535072), 18))));
    }
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        arr_9 [i_1] [8] = -34681665;
        arr_10 [i_1] = ((-34681659 != ((-(max(1718166818, 530985479))))));
        arr_11 [i_1] [i_1] = 72;
    }
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    {
                        arr_24 [i_5] [10] [10] [i_2 - 1] &= (((-1596808564 || 0) ? ((max(54, 25290))) : 0));
                        var_22 = (max(var_22, (((max(87102186, 1765311747))))));
                    }
                }
            }
        }
        arr_25 [i_2] [i_2] = (min(-34681655, -34681666));
    }
    var_23 = ((-1710603585 ? -693447863 : -65509));
    var_24 = var_4;
    var_25 = -8523404705224526834;
    #pragma endscop
}
