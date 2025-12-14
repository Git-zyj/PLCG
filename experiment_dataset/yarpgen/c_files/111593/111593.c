/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-2283472224597714057 ? 42151 : -32760));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_18 = (((((arr_2 [5] [i_0]) ? -1184529441359306695 : 23366)) >= (-74 < 54229)));
                var_19 = ((((73 ? 28518 : -32751)) | -54215));

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_20 = (arr_8 [i_0] [i_1] [i_2]);
                    var_21 = (((-127 - 1) ? (-32767 - 1) : -10634));
                    var_22 = (((!123) ? (((124 ? 42151 : 119))) : (((((((-32767 - 1) ? var_2 : (arr_1 [i_1] [4]))) + 9223372036854775807)) << (var_6 - 63705)))));
                }
                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {
                    var_23 = (max(var_23, (28672 / -126)));
                    var_24 = ((69 & (((max(var_12, var_3))))));
                    var_25 = -var_6;
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    var_26 = (arr_7 [i_4]);
                    var_27 = var_2;
                }
                var_28 = 26622;
            }
        }
    }
    var_29 = var_14;
    #pragma endscop
}
