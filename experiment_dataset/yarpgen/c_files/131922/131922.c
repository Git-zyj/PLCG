/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (min((arr_3 [i_0] [i_0]), ((var_6 ? 0 : 4294967295))));
        var_20 = ((6 ? 15455 : ((567453553048682496 ? 65535 : 240))));
        var_21 -= (+((((49582 ? (arr_2 [i_0] [i_0]) : (arr_1 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_11 [i_2] = var_7;
            var_22 = 2048;
        }
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            arr_16 [i_3] = (((!var_13) <= ((15369 ? 64512 : 40431))));
            arr_17 [i_3] [i_3] [i_3] = ((-(!1007077776)));
        }
        var_23 -= -884372366;
    }
    for (int i_4 = 1; i_4 < 8;i_4 += 1)
    {
        var_24 = var_7;
        var_25 ^= (((((min(var_17, var_2)) + 2147483647)) << (((max(var_1, ((var_13 ? var_10 : var_11)))) - 64480))));
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        arr_22 [i_5] = 0;
        var_26 = (max(var_26, -567453553048682507));
    }
    var_27 = (((~28513) ? (((((var_13 ? 2727 : var_17))) ? 22 : (((var_2 ? 65535 : 0))))) : ((min(var_2, 0)))));
    var_28 ^= (((((!(26325 & var_10)))) << ((var_11 ? 11 : -var_9))));
    var_29 = (min(var_29, (~18446744073709551615)));
    #pragma endscop
}
