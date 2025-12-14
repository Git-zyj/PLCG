/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= ((((~(~1139033449))) < 1));
    var_17 ^= 980879523;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (((((((((arr_0 [13]) & 82))) ? 0 : ((~(arr_0 [i_0])))))) ? (min((-127 - 1), (arr_0 [i_0]))) : 117));
        var_18 += -174;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_19 = ((((((min(109, 2940184400)) || (((153 ? 180 : 4294967276))))))));
                        var_20 -= ((-var_5 ? ((-(((arr_7 [i_0] [i_1] [13] [i_2] [i_3]) ? (arr_0 [i_0]) : var_7)))) : ((0 ? (arr_0 [i_2 + 3]) : 4))));
                        var_21 = (((!(!-21))) ? ((var_11 ? 242 : 3280131884)) : (arr_3 [i_0] [i_3]));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        var_22 += ((((max((arr_1 [i_4]), 824222527))) ? -0 : (-6 || 3928623565)));
        var_23 = (-127 - 1);
        arr_12 [i_4] [1] = ((+(((arr_5 [17] [i_4] [i_4]) << ((((arr_5 [i_4] [9] [i_4]) >= 1)))))));
        var_24 -= ((((min(1201356635, 6544996768226587993))) ? 5079212770562595924 : ((max(4144237073, (((4228218068 || (arr_4 [i_4] [7])))))))));
    }
    var_25 = (((((var_2 ? var_10 : (var_1 + var_3)))) ? (((((166 ? var_6 : 2972537627))) ? 2222124684 : ((var_2 ? var_10 : var_1)))) : (((var_6 ? var_11 : var_13)))));
    #pragma endscop
}
