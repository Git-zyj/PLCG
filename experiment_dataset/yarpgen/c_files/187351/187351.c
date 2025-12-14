/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += (max((min(((1009102455 ? 70 : -70)), 65535)), var_1));

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_1] [i_1] [i_0] = 13096826038924128458;
                    var_21 = (min((min(3645019742, 4)), (((-70 ? ((min(0, 70))) : (min(70, 438872347)))))));
                }
            }
        }
        var_22 = (min((((3385716035 ? ((min(92, -70))) : ((-438872340 ? 7 : -102))))), (min(9223372036854775807, -12461))));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 15;i_3 += 1)
    {
        var_23 |= 3645019742;
        var_24 = (max(var_24, (((65535 ? 649947553 : -438872310)))));
        var_25 += 120;
        var_26 = 1;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                {
                    arr_17 [i_3] [i_3] [i_3 - 1] = ((-8642 ? 504537294742623980 : 3645019742));
                    arr_18 [i_3] [1] [i_4] [i_3] = ((991742128 ? -23487 : -2216526178286914593));
                    var_27 = ((-7 ? -8619 : -106));
                }
            }
        }
    }
    #pragma endscop
}
