/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= (-41 >= 1220);

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (arr_0 [7]);

        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            var_13 = max((max(var_6, var_8)), -var_6);
            arr_7 [5] = ((((((arr_5 [i_0 - 1] [i_0 - 1] [i_1]) || 64291))) ? ((((var_9 ? (arr_5 [i_0] [i_0 + 1] [i_0]) : var_7)) >> (var_1 - 78))) : ((((arr_0 [i_1 + 1]) ? (arr_0 [i_1 + 1]) : var_5)))));
            var_14 = ((+((((min((arr_1 [i_0 + 3] [i_1]), (-32767 - 1)))) ? var_4 : -64320))));
        }
        for (int i_2 = 4; i_2 < 16;i_2 += 1)
        {
            var_15 *= (((((((arr_1 [i_0] [i_2]) < 5610062354441640218)) || (var_7 && var_11))) ? (arr_8 [i_0] [i_2 + 4]) : var_11));
            var_16 = var_1;
            var_17 = 13949;
            var_18 &= ((!((!(arr_0 [i_2])))));
        }
    }
    #pragma endscop
}
