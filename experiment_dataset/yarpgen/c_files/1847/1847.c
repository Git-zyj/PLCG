/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_5;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    {
                        var_16 = (max(0, ((((var_14 ? (arr_0 [i_0]) : 16777215)) * (!var_5)))));
                        arr_9 [i_0] [i_1] [i_2] [i_2] [i_0] = ((-9223372036854775807 - 1) / 7680);
                    }
                }
            }
        }
        var_17 = (max(var_17, ((min(((-16 ? -16 : ((-565455389 ? 2068957019 : 13462730055185990436)))), var_6)))));
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        arr_12 [i_4] [i_4] = (arr_1 [i_4] [i_4]);
        var_18 = ((((max((16 % var_9), 144114913197948928))) ? 3602815090 : ((((-58 || (116 & 482701459)))))));
        var_19 = ((((((var_4 + 2147483647) >> (var_14 - 3374978573)))) ? (arr_7 [i_4] [i_4] [i_4] [i_4]) : var_11));
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        var_20 += (((((((min(565455389, 482701453))) * (var_3 % var_3)))) ? (((arr_3 [i_5] [i_5]) ^ (var_11 - var_4))) : (var_12 % var_5)));
        var_21 *= var_10;
    }
    var_22 = (min(var_22, ((((!-2707551947993369911) ? ((max((((57 % (-127 - 1)))), var_7))) : (min(((var_6 ? var_8 : var_14)), (var_9 > var_9))))))));
    #pragma endscop
}
