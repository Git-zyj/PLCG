/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            var_15 = 9223372036854775807;
            /* LoopNest 3 */
            for (int i_2 = 4; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        {
                            arr_14 [i_1] [i_1 - 3] [i_2] [i_3] [i_4] = (((((arr_2 [i_3]) ? (arr_3 [i_0]) : 2957364254064400311))) && 9223372036854775807);
                            arr_15 [i_1] [i_3] = ((9223372036854775807 ? (arr_1 [i_1 - 1]) : (-9223372036854775807 - 1)));
                        }
                    }
                }
            }
            arr_16 [i_1] [i_0] [i_1] = ((9223372036854775788 ? -9223372036854775789 : (9223372036854775787 != 1)));
        }
        var_16 = (~1);
    }
    for (int i_5 = 4; i_5 < 15;i_5 += 1)
    {
        var_17 = (min((min(((2906981636531728670 * (arr_17 [i_5 - 2]))), (max(-9223372036854775787, 1)))), (((((arr_18 [i_5]) / -9223372036854775787))))));
        arr_19 [i_5 - 2] = (((!(((2906981636531728682 * (arr_18 [i_5])))))));
        var_18 = ((-3322073819903468066 ? 7361342672877908193 : -3980961192355221383));

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_19 = arr_18 [i_5];
            var_20 |= -96;
        }
    }
    var_21 = (max(1, 6245598814012990257));
    #pragma endscop
}
