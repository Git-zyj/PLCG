/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_10 = ((-(!var_5)));
        var_11 ^= min((!18446744073709551615), (max(var_4, var_5)));
        var_12 = (min(var_12, (((17297117196633751286 >> ((((238 ? 8740316051304497985 : 1)) - 8740316051304497923)))))));
        arr_2 [8] = (!15);
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_13 = ((-(arr_0 [i_1])));
        var_14 |= (max((+-17), var_4));

        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {
            var_15 = (max(var_15, ((min(36429, (min((arr_8 [5] [16]), 4294967295)))))));
            var_16 = (min(48951, 9));
            arr_9 [i_2 + 2] [13] [i_1] = (min((((arr_7 [i_2 - 2] [i_1]) ? (arr_7 [i_2 - 1] [i_1]) : (arr_7 [i_1] [i_2 - 2]))), (arr_7 [i_1] [i_1])));
        }
    }
    var_17 = (~15634);
    var_18 = ((var_2 - (((4294967295 <= var_7) ? -15 : ((max(var_5, 15603)))))));
    #pragma endscop
}
