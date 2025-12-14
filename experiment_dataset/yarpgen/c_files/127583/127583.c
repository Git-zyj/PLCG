/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_0] [4] [i_2] [i_1] = ((((((arr_7 [i_2 + 1] [15] [i_2]) ^ (arr_7 [i_2 - 3] [i_2] [i_2 + 1])))) || (arr_7 [i_2 - 1] [i_2 + 1] [i_2])));
                    var_12 = (min(var_3, (((arr_5 [i_0 + 1] [i_0 + 1] [i_0]) * var_3))));
                    var_13 ^= (arr_6 [i_0] [i_0 - 1] [18] [16]);
                }
            }
        }
    }
    var_14 = (((~2198823095) && ((((~-32250) ^ (-32767 - 1))))));
    var_15 |= -var_0;
    var_16 = (((-57 & var_3) ^ (-9223372036854775807 - 1)));

    for (int i_3 = 1; i_3 < 9;i_3 += 1)
    {

        for (int i_4 = 2; i_4 < 6;i_4 += 1)
        {
            var_17 = ((241 && ((((arr_3 [i_3 - 1] [i_3]) % (arr_3 [i_3 - 1] [i_3 + 1]))))));
            /* LoopNest 2 */
            for (int i_5 = 3; i_5 < 7;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    {
                        var_18 = var_8;
                        var_19 ^= var_9;
                    }
                }
            }
            var_20 ^= (((((22 ? -2222569886385452844 : -4))) ? (max(var_10, (arr_2 [i_4 + 4] [i_3 - 1]))) : (arr_2 [i_4 + 3] [i_3 - 1])));
        }
        for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
        {
            arr_22 [i_7] [i_3 + 1] = (((max(2080454175, 3371942857892480631)) / (((-11020 % 9) ? (-9223372036854775807 - 1) : ((max((arr_17 [i_3] [i_3] [i_7] [i_7]), (arr_21 [i_7]))))))));
            var_21 ^= (((((((((arr_9 [i_3]) % 605291269))) > (~var_8)))) != (-93 && -25)));
        }
        for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_9 = 2; i_9 < 9;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        {
                            var_22 *= (((-2087968034 + (arr_2 [i_3] [i_3]))));
                            arr_31 [i_11] [i_10] [i_8] = (max((arr_19 [1] [i_8] [i_9] [i_10] [i_11]), -1475838853));
                        }
                    }
                }
            }
            arr_32 [i_3 + 1] [i_3 + 1] = ((((((arr_15 [i_3 - 1] [i_3] [i_3 + 1] [i_3 + 1]) / (arr_15 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 + 1])))) ? (((var_2 / (arr_29 [i_3 - 1] [i_8] [i_3] [i_8] [i_8])))) : (max((min((-2147483647 - 1), -7560471920095128756)), (var_8 > var_1)))));
            arr_33 [i_3 - 1] [i_8] = (max(((min((arr_30 [i_3] [i_3] [i_3] [i_3]), 66584576))), ((-(min((arr_11 [i_3 + 1]), (arr_30 [i_8] [i_8] [i_8] [i_8])))))));
        }
        arr_34 [i_3] [i_3] = (min(-4, 230));
        arr_35 [i_3] = ((min(-var_0, (max(1804478367, 1502799208)))));
        arr_36 [i_3] = (max((!3240780054261999154), 7850178969032846318));
    }
    #pragma endscop
}
