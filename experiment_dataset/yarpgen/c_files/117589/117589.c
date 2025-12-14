/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= ((~((var_13 ? (!27162) : var_12))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_17 = (min(var_17, (((((max(3145868259327503611, 3145868259327503611))) ? ((min(((108 ? (arr_8 [i_0]) : 1145121233)), (arr_4 [i_0] [i_1] [i_3])))) : ((((98 ? 15300875814382048005 : 3149846067)) * (!5168918065332404835))))))));
                                var_18 = ((var_2 > (~91)));
                                var_19 = (((((4432310206975206405 ? var_2 : 19))) ? (((var_9 / (arr_1 [i_0])))) : var_10));
                                var_20 = -126;
                                var_21 = var_0;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 14;i_7 += 1)
                        {
                            {
                                var_22 = (((!var_11) ? ((((((arr_2 [i_0]) == (arr_7 [i_0] [i_1] [i_5] [i_7 - 1]))) && ((min((arr_1 [i_6]), var_0)))))) : ((-84 ? (~var_2) : var_2))));
                                var_23 -= 1209071323;
                            }
                        }
                    }
                }
                var_24 = (((arr_3 [i_0] [i_0]) ? (((arr_8 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_1]))) : ((min((arr_2 [i_0]), var_2)))));
            }
        }
    }
    #pragma endscop
}
