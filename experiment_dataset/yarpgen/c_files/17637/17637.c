/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_16 *= ((~((((((!(arr_0 [i_0 - 1])))) == (arr_0 [i_0]))))));
        arr_2 [i_0 - 1] [i_0] = ((!(((~(!255))))));
        var_17 *= ((-(((!(~13494167881411396439))))));
        var_18 = (((~-var_3) ^ ((((-4952576192298155177 > (((((arr_0 [20]) <= 4952576192298155169))))))))));
    }
    var_19 = ((((-(var_13 ^ 13494167881411396447))) != (((((!var_8) && (var_12 && var_2)))))));
    var_20 = ((-(!var_12)));
    #pragma endscop
}
