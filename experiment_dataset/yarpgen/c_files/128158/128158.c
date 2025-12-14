/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_12 <= (((!74) ? (min(14573638938682307130, 14573638938682307128)) : var_14)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_8 [7] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0] [i_0] = -var_17;
                            arr_9 [i_1 + 1] [i_1] [i_1] = ((((!(((3873105135027244509 ? var_1 : var_18))))) ? ((14573638938682307112 ? var_11 : (min(var_12, 3873105135027244507)))) : (~var_9)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 9;i_5 += 1)
                    {
                        {
                            arr_16 [i_0 + 1] [i_1 + 1] [i_0 + 1] [3] [i_5] = ((((min((arr_14 [4] [i_1]), 3873105135027244478))) ? (arr_15 [7] [7] [i_5 + 2]) : var_2));
                            arr_17 [i_4] [i_4] [i_4] [i_4] = (!14573638938682307130);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 4; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            {
                                arr_26 [i_0] [i_1] [i_8] [i_6] [i_0] = 14573638938682307089;
                                arr_27 [2] [2] [i_6] [i_7 - 4] [i_7] = 3873105135027244527;
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = var_10;
    #pragma endscop
}
