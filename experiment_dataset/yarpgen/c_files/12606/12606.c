/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= var_15;
    var_20 = ((~((max(var_9, (1 <= var_7))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (arr_1 [i_0]);
        var_21 = var_13;
        arr_4 [1] = ((((!((max((arr_1 [1]), var_6))))) ? (((~(!var_8)))) : (max((((arr_0 [i_0]) % (arr_1 [1]))), -6894407573803461877))));
        var_22 = (min(var_22, var_13));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_23 += ((-(max((!var_5), (max((arr_2 [i_1]), var_13))))));

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_24 = var_3;
            arr_11 [i_2] = (max(var_6, ((max((!212), (((arr_2 [i_2]) > var_4)))))));
            arr_12 [i_2] [i_1] [i_2] = (max(1472985674490524697, 7814824923779515364));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    {
                        var_25 = ((max((3897 * 37320203), 58)));
                        var_26 = (min(var_26, var_1));
                    }
                }
            }
        }
        var_27 += min(var_17, (((!38) >> (!var_6))));
        arr_19 [i_1] = (arr_1 [20]);
        var_28 -= var_16;
    }
    var_29 = ((var_2 ? (min(var_7, ((562945658454016 >> (var_8 - 158))))) : (((var_17 + (var_13 - var_3))))));
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            {
                var_30 = (min(-109, 176));
                arr_27 [i_5] [i_6] = var_18;
                var_31 += var_13;
            }
        }
    }
    #pragma endscop
}
