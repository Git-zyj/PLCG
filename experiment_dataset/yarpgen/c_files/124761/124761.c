/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 2242564763;
    var_13 = var_1;
    var_14 = 2052402532;

    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            var_15 = ((!(!2242564764)));
            arr_5 [19] = (~2052402534);
            arr_6 [i_0] [i_1 - 2] = 255;
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            arr_9 [i_0] [i_0] = 18226629611141753363;
            var_16 = 12;
        }
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            var_17 = 2242564764;
            arr_13 [i_3] [i_0] = (!2052402531);
            /* LoopNest 2 */
            for (int i_4 = 2; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 21;i_5 += 1)
                {
                    {
                        arr_19 [i_3] = 2242564764;
                        arr_20 [i_5 - 1] [i_3] [i_4] [i_5] [i_0 - 3] = 0;
                    }
                }
            }
            arr_21 [i_0 - 2] [i_0 - 1] [i_3 + 3] = -0;
            var_18 = 36028797018963967;
        }
        var_19 = (~-1144);
        var_20 = 32767;
    }
    #pragma endscop
}
