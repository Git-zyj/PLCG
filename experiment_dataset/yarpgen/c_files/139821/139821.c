/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_11 *= (min((arr_0 [i_0]), (((max(107, (arr_0 [i_0])))))));
        var_12 = (arr_1 [12]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_5 [i_1] = (min(((min(63580, 107))), 1));
        var_13 ^= (arr_3 [i_1]);
        var_14 = 63580;
        var_15 *= (min((((arr_4 [i_1]) % 3522376908)), (((min(var_3, 1970))))));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_8 [i_2] [i_2] = (((((3522376908 ? 31118 : 31118))) ? ((min((arr_7 [i_2]), (arr_7 [i_2])))) : 31127));
        var_16 = ((-(((((~var_9) + 9223372036854775807)) << ((((34418 ? var_2 : 34402)) - 2543037568))))));
        var_17 *= (max((max((arr_7 [i_2]), var_0)), ((((((arr_7 [i_2]) << (var_1 - 40202)))) ? (arr_6 [13] [i_2]) : ((~(arr_6 [i_2] [1])))))));
        var_18 = 8646911284551352320;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_19 = (((((~(arr_9 [i_3])))) ? (~2161979206) : ((((arr_9 [i_3]) ? 43862 : (arr_9 [i_3]))))));
        arr_11 [i_3] = 254;
        arr_12 [3] [i_3] = ((823 / (((arr_9 [5]) ? 34396 : var_3))));
    }
    var_20 = (max(var_20, ((min(((var_3 ? ((var_9 ? var_6 : var_10)) : 1958095854232828622)), var_7)))));
    var_21 = ((((var_9 ? var_3 : var_4))));
    #pragma endscop
}
