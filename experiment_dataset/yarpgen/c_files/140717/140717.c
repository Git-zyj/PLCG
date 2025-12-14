/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((max(0, -138883867233651041)), var_2));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_13 = (max((min((arr_8 [i_2] [i_1] [i_2]), (arr_6 [i_2 - 2] [i_2 + 1] [i_2]))), (((!(arr_8 [i_2] [i_3 - 1] [i_3]))))));
                            var_14 = (arr_3 [i_0]);
                            var_15 = 3172350029;

                            for (int i_4 = 2; i_4 < 15;i_4 += 1)
                            {
                                arr_14 [i_0] [i_1] [i_2 - 2] [i_1] [i_3] [i_4] [i_2] = -670692248;
                                arr_15 [i_0 + 1] [i_1] [i_2] [i_2] [i_0 + 1] = (min((-3468933968247542947 + 9), ((min((min(7213701056919889511, 392430757)), (arr_13 [i_2 + 1] [i_4]))))));
                                arr_16 [i_2] [i_2] [i_3] = (~(min((arr_9 [i_0] [i_1] [i_2] [i_3] [i_4]), ((min((arr_2 [i_0]), 1))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 4; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 16;i_6 += 1)
                    {
                        {
                            var_16 = (((arr_6 [i_0] [i_5 + 2] [i_5]) >> (((min((arr_6 [i_0] [i_5 + 2] [i_6]), (arr_6 [i_5] [i_5 - 4] [i_6]))) - 7136137799314495554))));
                            arr_23 [i_0] [i_0] [i_5] [i_6] [i_1] [i_6] = (!90);
                            var_17 = 0;
                        }
                    }
                }
                arr_24 [i_0] [i_0 - 1] = ((((min(-138883867233651039, (arr_12 [i_1] [i_1] [i_1] [i_1]))))));
            }
        }
    }
    var_18 = (((~(~var_2))) & ((((max(var_11, 17))) ? (~var_2) : (24 ^ var_3))));
    #pragma endscop
}
