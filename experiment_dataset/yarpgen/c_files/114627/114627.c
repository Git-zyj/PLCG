/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= (((((-var_8 ? 1000859835 : 45256))) ? var_7 : var_2));
    var_14 += ((((((var_8 ? -74 : var_10)))) + var_2));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min((((((min(var_0, -674191097))) >= (arr_1 [i_0])))), ((((var_4 + (arr_1 [i_0]))) << (var_0 - 37828)))));
        var_15 = 3775421590021854686;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_16 = (((((1 ? (-127 - 1) : (arr_3 [i_1])))) ? ((var_8 ? var_2 : 3821615431185157670)) : 32752));
        var_17 = (arr_4 [i_1]);
        var_18 ^= -1;
        arr_5 [2] [i_1] |= 124;
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        var_19 += -30159;
        var_20 = (max(var_20, ((-((3995409449 ? 1489398800 : var_3))))));
    }
    var_21 &= ((var_5 ? ((-var_10 ? 288230238712758272 : -var_3)) : (var_6 << var_12)));
    #pragma endscop
}
