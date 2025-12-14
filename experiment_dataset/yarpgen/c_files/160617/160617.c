/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_7 >> 1);
    var_12 = (min(var_12, ((1 ? (((!(var_2 - 2147483643)))) : (((var_2 >= (max(0, 65535)))))))));
    var_13 = (min((var_1 > 18446744073709551593), var_1));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_2] = ((((arr_4 [i_2] [i_2]) << (((min(var_10, var_2)) + 23)))));
                    arr_8 [i_2] = (((((arr_1 [i_2 - 1]) ? (arr_1 [i_2 - 1]) : (arr_5 [i_2 - 1] [i_1] [i_2])))) ? ((18446744073709551615 ? 614799431 : -507923591)) : 0);
                }
            }
        }
        var_14 = (((arr_6 [i_0] [i_0]) ? ((max((max(1, (arr_4 [i_0] [i_0]))), 1))) : 896));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_15 = (min(var_15, ((max(27730, (((23561 == var_6) ^ (arr_12 [i_3]))))))));
        arr_13 [i_3] = 65472;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_16 = (max(var_16, (((arr_14 [i_4]) ? 9223372036854775807 : 12001887681852530703))));
        arr_17 [i_4] = (((((17089929177017663718 ? 1563327308 : 4294967292))) ? (arr_15 [i_4]) : (arr_16 [i_4] [i_4])));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_17 ^= (((18446744071562067968 ? var_1 : 0)));
        var_18 = 3680167853;
    }
    #pragma endscop
}
