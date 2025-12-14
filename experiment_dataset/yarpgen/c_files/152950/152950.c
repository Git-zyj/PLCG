/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (!var_9);
    var_19 = var_4;

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0 + 3] = (((((!(arr_1 [i_0 + 1])))) - (-7000992415790989238 > 28583)));
        arr_3 [7] = (max((((~(!18018684651773190486)))), (min((!36953), (arr_0 [i_0 - 3])))));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        var_20 &= 0;
        var_21 = ((23 ? -4080877230759661818 : 2043165120));
        var_22 *= (!var_2);
        arr_6 [i_1] [i_1 + 1] = var_16;
        arr_7 [i_1 - 1] = (!-1);
    }
    #pragma endscop
}
