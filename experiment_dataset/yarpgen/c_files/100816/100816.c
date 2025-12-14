/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (((((min(571790420756517492, 571790420756517498))) ? ((571790420756517492 ? var_7 : 17874953652953034138)) : ((~(var_2 ^ 17874953652953034126))))))));
    var_14 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_15 = (max(var_15, (max(571790420756517498, 571790420756517513))));
                var_16 = (((arr_3 [i_0 - 1] [i_1]) ? var_6 : (max((arr_3 [i_0 - 1] [i_1]), (arr_3 [i_0 - 1] [i_1])))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_15 [11] [i_1] [11] [10] [i_4] [15] = ((~(17874953652953034117 & 571790420756517471)));
                                arr_16 [i_0] [i_1] [i_2] [i_2] [16] [i_4] [i_4] = (-((((max((arr_11 [4] [i_0] [i_1] [i_0] [17] [4] [i_4]), 17874953652953034131))) ? (min((arr_7 [i_3]), 571790420756517489)) : 571790420756517513)));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        arr_20 [i_5] = ((((((arr_17 [i_5]) & 571790420756517512))) ? 571790420756517485 : (arr_5 [i_5] [i_5] [i_5])));
        var_17 = ((((((arr_3 [i_5] [i_5]) ? (arr_3 [i_5] [i_5]) : (arr_3 [i_5] [i_5])))) != (max((arr_6 [i_5] [i_5] [i_5] [i_5]), (arr_6 [i_5] [i_5] [i_5] [i_5])))));
        var_18 = 571790420756517520;
    }
    #pragma endscop
}
