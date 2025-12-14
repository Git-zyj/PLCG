/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -var_9;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 199;
        arr_3 [i_0] [i_0] = ((~(~var_9)));
    }
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        arr_8 [i_1 - 2] [i_1] = ((-364216064 - (arr_4 [i_1])));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        arr_19 [i_4] [i_3] [i_2] [4] = ((((((arr_12 [i_1] [i_1 - 2] [i_3]) + (arr_12 [i_1 + 1] [i_1 - 1] [i_1 - 1])))) ? (~var_4) : var_4));
                        var_11 = ((((max((arr_5 [6] [i_1 + 1]), ((min(-2084181690, var_0)))))) ? 866 : ((((6192507502898594282 ? var_0 : (arr_5 [5] [i_2]))) | (((849 ? -793106661 : -20801)))))));
                        arr_20 [i_1] [i_1] = (arr_0 [i_2] [i_3]);
                        arr_21 [i_1] [i_4] [i_3] [i_2] [i_1] [i_1] = ((~((((max(3, 1))) * (arr_15 [i_1 - 1] [i_1] [i_1])))));
                        arr_22 [i_4] [i_1 - 2] = (max((min(((var_4 ? var_2 : (arr_6 [i_2]))), var_5)), ((min((arr_7 [i_1 - 1] [i_4]), (arr_7 [i_1 - 1] [i_2]))))));
                    }
                }
            }
        }
        var_12 = ((~(arr_1 [i_1])));
        var_13 = (var_0 ? (arr_14 [i_1 + 1] [i_1]) : (((arr_13 [i_1] [i_1]) ^ var_6)));
    }
    var_14 = (--55614);
    #pragma endscop
}
