/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_8 [i_0] [2] = (((743710766 || var_5) ^ ((1 ? 18446744073709551615 : 2610))));
                            arr_9 [i_0] [i_2 + 3] [i_1] [i_0] = 167;
                            var_14 = (min(var_14, (31189 - -1930116032)));
                            var_15 -= (((((min(-8477871170414247329, -121)) | var_10)) / (((((max(743710762, -2610))) ? (max(743710764, 2610)) : -125)))));
                        }
                    }
                }
                var_16 = 119;
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_17 += (min(6688326536920182703, (((2832170389 ? 3405293861 : 72053195991416832)))));
                                var_18 -= (((min(11769063414568901043, 4294967295))) ? (((13626 ? 150 : 3551256533))) : 11769063414568901043);
                                arr_19 [i_6] [8] [10] [i_1] [8] [i_0 + 4] |= var_10;
                            }
                        }
                    }
                }
                var_19 = ((-127 ^ ((((((2621 ? var_7 : var_11))) ? (120 * 245) : 218)))));
            }
        }
    }
    var_20 = 22165;
    #pragma endscop
}
