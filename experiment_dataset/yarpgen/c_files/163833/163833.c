/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0 + 1] = ((((~(((49152 >= (arr_1 [i_0])))))) - (((~-26742) | (~var_9)))));
        arr_4 [i_0 - 1] [i_0] |= ((-((((var_3 << 0) && ((1008 && (arr_0 [i_0 - 3] [i_0 + 1]))))))));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 8;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                {
                    arr_11 [i_1 + 3] = 257653146;
                    arr_12 [i_1] [i_2] [i_3 - 1] = ((~((~(var_11 != -2)))));
                    var_15 = ((((((((3712056428 || (arr_2 [i_3] [i_1 - 1]))))) / (~67108832))) << ((1 + (22121 <= 16380)))));
                    var_16 = (!(var_1 || 243981569));
                    var_17 = ((61440 < 2898633915) << (((((!(arr_8 [i_3 - 1] [i_1 - 1])))) / (~var_6))));
                }
            }
        }
        arr_13 [i_1] = ((!(((~134213632) <= (!var_10)))));
        var_18 = (~-1);
        var_19 = (((~(arr_8 [i_1 + 2] [i_1]))));
    }
    var_20 = (!(((-(-60 ^ 1)))));
    #pragma endscop
}
