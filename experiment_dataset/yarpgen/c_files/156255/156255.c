/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = 1;
        var_12 = (((max((1 % 36028797018963967), -var_8)) != (((+((var_7 ? (arr_1 [i_0]) : var_9)))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_2] [12] [i_0] |= (((((var_8 - ((1 ? var_5 : 1))))) ? ((-1 ? var_4 : ((1 >> (3312804411509096822 - 3312804411509096798))))) : var_2));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_15 [i_3] [i_2] |= var_6;
                                var_13 &= (arr_6 [19] [i_1] [i_2] [i_3]);
                                var_14 = (min(var_14, (((4294966272 & (((min(var_5, (arr_4 [i_0]))))))))));
                                var_15 = (min(var_15, var_3));
                                var_16 = var_11;
                            }
                        }
                    }
                }
            }
        }
        var_17 = (min(((2408875526 ^ (4294966284 >= -595338577))), (arr_1 [i_0 - 1])));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    {
                        arr_24 [i_0] [i_0] [i_0] [i_5] [i_0] [i_0] = ((var_4 && (!562400197607424)));
                        arr_25 [i_0] [i_5] [i_5] [i_5] = ((626841241 && (((((1 ? -2565867784216342097 : 5630674765831399844)) + (595338576 == 25))))));
                        var_18 = ((-(-127 - 1)));
                    }
                }
            }
        }
    }
    var_19 = (((595338553 - (var_11 != var_2))));
    var_20 = var_7;
    #pragma endscop
}
