/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] &= (3183160975 ? 2938803278 : 1335185474);
        var_20 += ((var_15 < ((-(arr_1 [i_0])))));
        var_21 = (min(((-30478 ? 255 : 129)), (((arr_1 [i_0]) ? (arr_1 [i_0]) : ((-(arr_2 [i_0] [i_0])))))));
    }

    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_22 = (max(var_22, (max(var_8, ((1111806348 ? (!31) : var_18))))));
        arr_6 [i_1] &= min((-195 % -30836), 252);
        arr_7 [15] = ((((arr_5 [0] [i_1]) - (arr_4 [i_1] [i_1]))));
        var_23 = ((254 ? 15 : 240));
        var_24 = (arr_5 [i_1] [i_1]);
    }
    #pragma endscop
}
