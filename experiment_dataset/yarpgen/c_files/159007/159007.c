/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += (min(var_5, (((((min(var_0, var_0))) && var_1)))));
    var_13 &= var_2;

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_14 = var_9;

        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            var_15 = ((((min((arr_2 [i_1 + 2] [i_1 - 1] [i_1 - 1]), (2467788107 != var_9)))) * (((((var_7 - (arr_2 [i_0] [i_1] [i_1 + 1])))) ? (arr_3 [i_1]) : (arr_2 [i_0 + 1] [i_0] [i_0 + 1])))));
            var_16 -= ((((max(((((arr_1 [i_1] [i_0]) ? (arr_0 [i_0]) : var_11))), (~1988571406134224430)))) ? ((max(var_8, (arr_2 [i_0] [i_0] [i_0 + 1])))) : ((((var_4 ? var_5 : (arr_2 [i_0] [i_0 + 1] [i_0])))))));
        }
        var_17 = (max((((!(arr_0 [i_0])))), (min((arr_2 [i_0 + 1] [i_0 + 1] [i_0 + 1]), var_8))));
    }
    var_18 = 0;
    #pragma endscop
}
