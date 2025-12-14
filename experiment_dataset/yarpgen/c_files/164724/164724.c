/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;
    var_14 = (!108);
    var_15 = var_7;
    var_16 = 726553882365822813;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_17 = (((arr_1 [i_0] [i_0]) ? var_4 : (arr_1 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_18 += (((1943530255 + 4) << ((((1943530229 ? 17572718960218360695 : 14433263971969230479)) - 17572718960218360670))));
            arr_5 [i_0] = (((var_7 / (arr_0 [4] [4]))));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_13 [i_3] [i_3] [i_2] [i_3] = (((arr_6 [i_2 + 3] [i_2 + 3] [6] [i_2 - 1]) ? 726553882365822784 : (arr_6 [i_2 + 3] [i_2 + 3] [i_2 - 1] [i_2 + 4])));
                        arr_14 [i_3] [i_3] [i_2] [i_1] [11] = (arr_0 [i_0] [i_2]);
                        var_19 -= var_8;
                        var_20 = ((-726553882365822785 ? (arr_3 [i_2 - 1] [i_2] [i_2 + 3]) : (arr_3 [i_0] [6] [i_2 + 3])));
                        var_21 += (((arr_10 [i_2 + 1] [i_2 + 4] [i_2 - 1] [i_2 + 1]) ? var_12 : -51));
                    }
                }
            }
        }
    }
    #pragma endscop
}
