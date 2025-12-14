/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((~(!1)));
    var_18 = ((~(var_11 & var_16)));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_2] [i_2] = (((~7789179693470004785) ? (arr_5 [i_0]) : (var_10 > 33963)));
                    var_19 = var_9;
                    var_20 = ((!(!var_12)));
                    var_21 = ((var_15 ? var_11 : (arr_4 [i_1] [i_2])));
                }
            }
        }
        var_22 += 1;
        arr_11 [i_0] = 8431672331575564791;
    }
    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {
        var_23 = 1274951003;
        var_24 = (arr_13 [8]);
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        arr_16 [0] = (max((max(var_1, 77)), 1));
        var_25 = (((--18446744073709551615) >> (((((((1 >> (1164887963838647501 - 1164887963838647496)))) ? var_5 : (max((arr_12 [7] [i_4]), (arr_15 [i_4] [i_4]))))) - 5534795598093653572))));
    }
    #pragma endscop
}
