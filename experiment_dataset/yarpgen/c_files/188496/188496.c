/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((((arr_0 [i_0 + 1] [i_0 - 2]) ? 8752668969045436326 : (arr_0 [i_0 + 1] [i_0])))) ? (-1404755376703642615 > 32767) : (((arr_0 [i_0 + 1] [12]) ? 53576 : var_5)));
        var_15 = (max((max(var_7, ((7 ? var_13 : -1404755376703642633)))), ((min(var_14, (arr_1 [i_0]))))));
        var_16 = var_6;
        arr_3 [i_0 + 1] = 0;
    }
    var_17 = 32704;
    #pragma endscop
}
