/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        arr_9 [i_0] [i_3] = (!(arr_6 [6] [i_2] [i_1] [i_0]));
                        var_10 = 4555;
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        var_11 = (min(var_11, var_0));
                        var_12 = (49 ^ -1833041692);
                        arr_14 [i_0] [i_0] [i_0] [i_2] [i_4] &= ((!((max(-5808723544921961879, -3256770546007579202)))));
                    }
                    var_13 = ((min(3256770546007579183, (arr_6 [i_2] [i_0] [i_0] [i_0]))));
                    arr_15 [i_0] [i_0] [i_0] [i_0] |= (max(((((arr_13 [i_0]) || var_2))), (((arr_13 [i_2]) ? var_9 : 3256770546007579197))));
                }
            }
        }
    }
    var_14 = (max((~-3256770546007579186), (((var_6 << (((max(139, 9155828777099280179)) - 9155828777099280158)))))));
    var_15 = var_8;
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 17;i_6 += 1)
        {
            {
                arr_23 [i_5] = ((-(((~var_6) >> (var_5 + 1135646699)))));
                var_16 -= (max((min(var_7, (arr_16 [i_5 + 1] [i_5 + 1]))), (min(-3256770546007579201, 3256770546007579170))));
                var_17 = (min(var_17, (arr_21 [i_5] [i_5])));
                arr_24 [i_5 + 1] [2] [i_5] = (((~71) ? (((10567246027778194638 | var_3) ? var_0 : 2155684319)) : var_1));
            }
        }
    }
    var_18 = ((((((12847 ? var_5 : var_2))) ? ((var_0 << (12845 - 12845))) : var_1)));
    #pragma endscop
}
