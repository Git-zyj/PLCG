/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_20 = (arr_0 [13]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_21 = min((((min((arr_2 [i_1] [19] [i_1]), 8453380405408984636)) / (arr_10 [i_3] [i_0] [i_0]))), ((((arr_6 [i_0]) > (!-917658290)))));
                        var_22 = (max(var_22, ((~(((((min(-1315017934, (arr_9 [i_3]))) + 9223372036854775807)) >> (((arr_6 [i_0]) - 3535916258339718418))))))));
                        var_23 = (((((-9093942004730812785 ? -2147483643 : -833073620))) == 63274650051392508));
                        var_24 -= ((((-(min(1001723519, var_9))))) ? -869496253 : (arr_4 [i_0]));
                        var_25 = min((-8453380405408984655 > 2147483632), (min(var_8, (arr_2 [i_0] [i_2] [i_0]))));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
    {
        var_26 = (((arr_0 [i_4]) - -2147483646));
        var_27 = (((1978322543 ^ 3665841118288921581) | (((arr_14 [i_4]) ^ -2908802568304066505))));
        var_28 ^= -4249405272220800847;
        var_29 = ((((42189030 ? (arr_8 [i_4] [i_4]) : (arr_9 [i_4]))) >= 4367606193772121654));
    }
    var_30 = (((-1 + 2147483647) << (((((622889085 | var_5) + 320742889130111390)) - 29))));

    for (int i_5 = 2; i_5 < 22;i_5 += 1)
    {
        var_31 ^= (((((arr_15 [i_5 - 1]) ? (arr_15 [i_5 + 1]) : (arr_17 [i_5 + 1] [i_5]))) < (arr_15 [i_5 - 1])));
        var_32 &= (((!-1073741824) < -8453380405408984655));
    }
    #pragma endscop
}
