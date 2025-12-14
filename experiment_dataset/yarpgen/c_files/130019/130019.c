/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= var_7;
    var_13 = (16383 - -25318);
    var_14 = (1951837607 || 242);

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [20] |= (~-1951837607);
        var_15 = (min(var_15, ((((!(arr_1 [7] [i_0])))))));
        arr_3 [i_0] [i_0] = (63540 % 4574192774418132134);
    }
    for (int i_1 = 4; i_1 < 22;i_1 += 1)
    {
        var_16 = (min(var_16, ((min((!-1951837607), -74)))));
        arr_6 [2] [i_1 + 1] = (((((17427 >= (arr_1 [i_1 - 4] [i_1 - 4])))) - (arr_4 [i_1])));
    }
    for (int i_2 = 2; i_2 < 24;i_2 += 1)
    {
        arr_9 [i_2] = (min(16383, (!var_10)));
        var_17 = (min(((((4201156420772647124 ^ 18446744073709551615) ? var_3 : (~var_9)))), ((134201344 + (arr_8 [i_2 + 1])))));
        arr_10 [i_2 + 1] = ((96 ? var_9 : (arr_7 [i_2 + 1] [i_2 - 2])));

        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_18 ^= 16;
            var_19 = (min((~17413), ((((62 ? var_8 : var_4))))));
        }
        arr_13 [i_2] = var_11;
    }
    #pragma endscop
}
