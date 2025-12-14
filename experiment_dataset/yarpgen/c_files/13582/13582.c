/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((31 ? 579200901 : var_7))));
    var_14 = (((var_5 ? (10368403103624398875 - -1803427094) : 1729382256910270464)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_15 = (max(1803427081, (!16717361816799281152)));
                    arr_7 [i_0 + 2] [i_1] [i_2] = (max(((-16717361816799281151 ? (166344796 & 32764) : ((var_6 ? var_12 : 9358378264343319674)))), (((arr_0 [i_0 + 2]) & (((arr_4 [i_0 + 1]) & var_2))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 9;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {
                    var_16 = 1865326928949787950;
                    arr_15 [i_3] [i_3] [i_3] = (9223372036854775805 ? 3254349045 : (((var_7 ? 4 : (127 & var_3)))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 8;i_7 += 1)
                        {
                            {
                                var_17 = -405060671;
                                var_18 = (~((-(arr_0 [i_3]))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
