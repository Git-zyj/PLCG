/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -2676206308901701739;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, ((((var_10 ? (max(1694, 3710758168127440523)) : 1195444030))))));

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_18 += (max(208, 0));
                        arr_15 [i_3] = ((((((((0 ? 1164931063 : 127))) & -2974869678395826267))) ? (!-1191146208) : (6972851549133477322 < -114)));
                    }
                    var_19 = ((-var_11 ? (((16 - var_10) ? -29 : (3752 + var_9))) : ((-((3 ? 630648728 : -1263022308))))));
                }
            }
        }
    }
    var_20 = min((((min(14018969119192869963, 0)))), ((var_14 ? (((166 ? var_2 : var_7))) : var_8)));
    #pragma endscop
}
