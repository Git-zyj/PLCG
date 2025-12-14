/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= ((!(var_7 - 1)));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        var_20 = (min(var_20, ((((arr_3 [i_0 + 1]) + (arr_3 [i_0 - 2]))))));
        var_21 = 1762637620518616831;
    }
    for (int i_1 = 2; i_1 < 8;i_1 += 1)
    {
        var_22 = (min(var_22, (arr_2 [i_1])));
        var_23 = ((5496824378422392728 << (((((arr_3 [i_1 + 3]) ? (arr_3 [i_1 - 1]) : var_3)) - 6884502056087856319))));
    }

    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_24 = (min(var_24, ((((((-(!59324)))) / (~var_2))))));
        var_25 ^= (min((((!((!(arr_7 [17])))))), ((5496824378422392737 ? (57420 != 65535) : (arr_8 [i_2])))));

        for (int i_3 = 1; i_3 < 24;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    {
                        var_26 = ((((-18 ? 5496824378422392715 : (arr_13 [i_4] [i_4] [i_4] [i_4]))) != var_4));
                        var_27 = var_10;
                    }
                }
            }
            var_28 += (((((((min((arr_15 [4]), (arr_8 [i_2])))) ? ((5496824378422392752 ? 1 : 104)) : (arr_14 [i_3 + 1] [i_3 + 1] [i_3 - 1])))) >= var_1));
        }
        var_29 = (max((min(5806640880207973115, 127)), ((2 ? (arr_7 [i_2]) : var_4))));
    }
    #pragma endscop
}
