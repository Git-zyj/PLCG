/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_14 || var_0);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_19 = ((min((arr_7 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 + 1]), (arr_7 [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1]))));
                    var_20 ^= ((((+(max((arr_3 [i_0] [i_0]), 62755)))) * ((((arr_1 [i_0] [i_2 - 1]) / 28472)))));
                }
            }
        }
    }
    var_21 ^= 4053355738;
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            {
                var_22 = (max((arr_10 [i_3 - 1]), ((min((arr_8 [i_3]), 33)))));
                var_23 = (min(1152921504606846976, ((((((arr_10 [i_3 - 1]) + 2147483647)) << (((((arr_10 [i_3 - 1]) + 13195)) - 9)))))));
            }
        }
    }

    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        var_24 = (!((max(-72057594037927936, 127))));
        var_25 -= (((~((-(arr_0 [i_5]))))));
        var_26 += ((((min((arr_10 [i_5]), 77))) || (((min((arr_5 [4] [4]), (arr_4 [i_5])))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        arr_19 [i_6] = (~8128);
        var_27 = (min(var_27, (arr_17 [0])));
        var_28 = 17;
        var_29 = (min(var_29, -3));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        var_30 -= 8817095073711778295;
        var_31 ^= ((~(~9495835433176343980)));
    }
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        var_32 = 18446744073709551615;
        var_33 = ((((37234 <= (arr_22 [i_8] [i_8])))));
    }
    #pragma endscop
}
